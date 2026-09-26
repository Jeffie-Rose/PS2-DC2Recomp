#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckLRKey__12CMenuKeyFuncFv
// Address: 0x23e100 - 0x23e1b0
void CheckLRKey__12CMenuKeyFuncFv_0x23e100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckLRKey__12CMenuKeyFuncFv_0x23e100");
#endif

    switch (ctx->pc) {
        case 0x23e120u: goto label_23e120;
        case 0x23e140u: goto label_23e140;
        case 0x23e160u: goto label_23e160;
        case 0x23e180u: goto label_23e180;
        default: break;
    }

    ctx->pc = 0x23e100u;

    // 0x23e100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23e100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23e104: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x23e104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23e108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23e108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23e10c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23e110: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23e110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e114: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x23e114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x23e118: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E118u;
    SET_GPR_U32(ctx, 31, 0x23E120u);
    ctx->pc = 0x23E11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E118u;
            // 0x23e11c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E120u; }
        if (ctx->pc != 0x23E120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E120u; }
        if (ctx->pc != 0x23E120u) { return; }
    }
    ctx->pc = 0x23E120u;
label_23e120:
    // 0x23e120: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E120u;
    {
        const bool branch_taken_0x23e120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E120u;
            // 0x23e124: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e120) {
            ctx->pc = 0x23E134u;
            goto label_23e134;
        }
    }
    ctx->pc = 0x23E128u;
    // 0x23e128: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23e12c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23E12Cu;
    {
        const bool branch_taken_0x23e12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E12Cu;
            // 0x23e130: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e12c) {
            ctx->pc = 0x23E18Cu;
            goto label_23e18c;
        }
    }
    ctx->pc = 0x23E134u;
label_23e134:
    // 0x23e134: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x23e134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23e138: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E138u;
    SET_GPR_U32(ctx, 31, 0x23E140u);
    ctx->pc = 0x23E13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E138u;
            // 0x23e13c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E140u; }
        if (ctx->pc != 0x23E140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E140u; }
        if (ctx->pc != 0x23E140u) { return; }
    }
    ctx->pc = 0x23E140u;
label_23e140:
    // 0x23e140: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E140u;
    {
        const bool branch_taken_0x23e140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E140u;
            // 0x23e144: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e140) {
            ctx->pc = 0x23E154u;
            goto label_23e154;
        }
    }
    ctx->pc = 0x23E148u;
    // 0x23e148: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x23e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23e14c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23E14Cu;
    {
        const bool branch_taken_0x23e14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E14Cu;
            // 0x23e150: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e14c) {
            ctx->pc = 0x23E18Cu;
            goto label_23e18c;
        }
    }
    ctx->pc = 0x23E154u;
label_23e154:
    // 0x23e154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23e154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e158: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E158u;
    SET_GPR_U32(ctx, 31, 0x23E160u);
    ctx->pc = 0x23E15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E158u;
            // 0x23e15c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E160u; }
        if (ctx->pc != 0x23E160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E160u; }
        if (ctx->pc != 0x23E160u) { return; }
    }
    ctx->pc = 0x23E160u;
label_23e160:
    // 0x23e160: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E160u;
    {
        const bool branch_taken_0x23e160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E160u;
            // 0x23e164: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e160) {
            ctx->pc = 0x23E174u;
            goto label_23e174;
        }
    }
    ctx->pc = 0x23E168u;
    // 0x23e168: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x23e168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x23e16c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23E16Cu;
    {
        const bool branch_taken_0x23e16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E16Cu;
            // 0x23e170: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e16c) {
            ctx->pc = 0x23E18Cu;
            goto label_23e18c;
        }
    }
    ctx->pc = 0x23E174u;
label_23e174:
    // 0x23e174: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23e174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23e178: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E178u;
    SET_GPR_U32(ctx, 31, 0x23E180u);
    ctx->pc = 0x23E17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E178u;
            // 0x23e17c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E180u; }
        if (ctx->pc != 0x23E180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E180u; }
        if (ctx->pc != 0x23E180u) { return; }
    }
    ctx->pc = 0x23E180u;
label_23e180:
    // 0x23e180: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23E180u;
    {
        const bool branch_taken_0x23e180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E180u;
            // 0x23e184: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e180) {
            ctx->pc = 0x23E18Cu;
            goto label_23e18c;
        }
    }
    ctx->pc = 0x23E188u;
    // 0x23e188: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23e188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_23e18c:
    // 0x23e18c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x23e18cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x23e190: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23E190u;
    {
        const bool branch_taken_0x23e190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e190) {
            ctx->pc = 0x23E19Cu;
            goto label_23e19c;
        }
    }
    ctx->pc = 0x23E198u;
    // 0x23e198: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x23e198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_23e19c:
    // 0x23e19c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23e1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23e1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e1a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e1a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x23E1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E1A8u;
            // 0x23e1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E1B0u;
}
