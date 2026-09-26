#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__14CWeaponElementFPA4_fPffif
// Address: 0x1c5c60 - 0x1c5d1c
void Set__14CWeaponElementFPA4_fPffif_0x1c5c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__14CWeaponElementFPA4_fPffif_0x1c5c60");
#endif

    switch (ctx->pc) {
        case 0x1c5cccu: goto label_1c5ccc;
        case 0x1c5ce0u: goto label_1c5ce0;
        case 0x1c5cf4u: goto label_1c5cf4;
        case 0x1c5d04u: goto label_1c5d04;
        default: break;
    }

    ctx->pc = 0x1c5c60u;

    // 0x1c5c60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c5c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5c64: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1c5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1c5c68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c5c68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5c6c: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x1c5c6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1c5c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5c74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c5c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5c78: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1c5c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1c5c7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c5c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5c80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c88: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1c5c88u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5c8c: 0x0  nop
    ctx->pc = 0x1c5c8cu;
    // NOP
    // 0x1c5c90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c5c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c5c94: 0xe48005a8  swc1        $f0, 0x5A8($a0)
    ctx->pc = 0x1c5c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1448), bits); }
    // 0x1c5c98: 0xa48705a4  sh          $a3, 0x5A4($a0)
    ctx->pc = 0x1c5c98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1444), (uint16_t)GPR_U32(ctx, 7));
    // 0x1c5c9c: 0xe48d05a0  swc1        $f13, 0x5A0($a0)
    ctx->pc = 0x1c5c9cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1440), bits); }
    // 0x1c5ca0: 0x10e20016  beq         $a3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C5CA0u;
    {
        const bool branch_taken_0x1c5ca0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CA0u;
            // 0x1c5ca4: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ca0) {
            ctx->pc = 0x1C5CFCu;
            goto label_1c5cfc;
        }
    }
    ctx->pc = 0x1C5CA8u;
    // 0x1c5ca8: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C5CA8u;
    {
        const bool branch_taken_0x1c5ca8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CA8u;
            // 0x1c5cac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ca8) {
            ctx->pc = 0x1C5CECu;
            goto label_1c5cec;
        }
    }
    ctx->pc = 0x1C5CB0u;
    // 0x1c5cb0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5cb4: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5CB4u;
    {
        const bool branch_taken_0x1c5cb4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CB4u;
            // 0x1c5cb8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cb4) {
            ctx->pc = 0x1C5CD8u;
            goto label_1c5cd8;
        }
    }
    ctx->pc = 0x1C5CBCu;
    // 0x1c5cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5cc0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c5cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5cc4: 0xc071788  jal         func_1C5E20
    ctx->pc = 0x1C5CC4u;
    SET_GPR_U32(ctx, 31, 0x1C5CCCu);
    ctx->pc = 0x1C5CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CC4u;
            // 0x1c5cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5E20u;
    if (runtime->hasFunction(0x1C5E20u)) {
        auto targetFn = runtime->lookupFunction(0x1C5E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5CCCu; }
        if (ctx->pc != 0x1C5CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_Cold__14CWeaponElementFPf_0x1c5e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5CCCu; }
        if (ctx->pc != 0x1C5CCCu) { return; }
    }
    ctx->pc = 0x1C5CCCu;
label_1c5ccc:
    // 0x1c5ccc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C5CCCu;
    {
        const bool branch_taken_0x1c5ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CCCu;
            // 0x1c5cd0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ccc) {
            ctx->pc = 0x1C5D08u;
            goto label_1c5d08;
        }
    }
    ctx->pc = 0x1C5CD4u;
    // 0x1c5cd4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c5cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c5cd8:
    // 0x1c5cd8: 0xc071a20  jal         func_1C6880
    ctx->pc = 0x1C5CD8u;
    SET_GPR_U32(ctx, 31, 0x1C5CE0u);
    ctx->pc = 0x1C6880u;
    if (runtime->hasFunction(0x1C6880u)) {
        auto targetFn = runtime->lookupFunction(0x1C6880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5CE0u; }
        if (ctx->pc != 0x1C5CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_Wind__14CWeaponElementFPf_0x1c6880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5CE0u; }
        if (ctx->pc != 0x1C5CE0u) { return; }
    }
    ctx->pc = 0x1C5CE0u;
label_1c5ce0:
    // 0x1c5ce0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5CE0u;
    {
        const bool branch_taken_0x1c5ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ce0) {
            ctx->pc = 0x1C5D04u;
            goto label_1c5d04;
        }
    }
    ctx->pc = 0x1C5CE8u;
    // 0x1c5ce8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c5ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c5cec:
    // 0x1c5cec: 0xc071d40  jal         func_1C7500
    ctx->pc = 0x1C5CECu;
    SET_GPR_U32(ctx, 31, 0x1C5CF4u);
    ctx->pc = 0x1C7500u;
    if (runtime->hasFunction(0x1C7500u)) {
        auto targetFn = runtime->lookupFunction(0x1C7500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5CF4u; }
        if (ctx->pc != 0x1C5CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_Fire__14CWeaponElementFPf_0x1c7500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5CF4u; }
        if (ctx->pc != 0x1C5CF4u) { return; }
    }
    ctx->pc = 0x1C5CF4u;
label_1c5cf4:
    // 0x1c5cf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5CF4u;
    {
        const bool branch_taken_0x1c5cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5cf4) {
            ctx->pc = 0x1C5D04u;
            goto label_1c5d04;
        }
    }
    ctx->pc = 0x1C5CFCu;
label_1c5cfc:
    // 0x1c5cfc: 0xc071fdc  jal         func_1C7F70
    ctx->pc = 0x1C5CFCu;
    SET_GPR_U32(ctx, 31, 0x1C5D04u);
    ctx->pc = 0x1C5D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CFCu;
            // 0x1c5d00: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F70u;
    if (runtime->hasFunction(0x1C7F70u)) {
        auto targetFn = runtime->lookupFunction(0x1C7F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D04u; }
        if (ctx->pc != 0x1C5D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_Thunder__14CWeaponElementFPf_0x1c7f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D04u; }
        if (ctx->pc != 0x1C5D04u) { return; }
    }
    ctx->pc = 0x1C5D04u;
label_1c5d04:
    // 0x1c5d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5d08:
    // 0x1c5d08: 0xa60305ac  sh          $v1, 0x5AC($s0)
    ctx->pc = 0x1c5d08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1452), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c5d0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D14u;
            // 0x1c5d18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5D1Cu;
}
