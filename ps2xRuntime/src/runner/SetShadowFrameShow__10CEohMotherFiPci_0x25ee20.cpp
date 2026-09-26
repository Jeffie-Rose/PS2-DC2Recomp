#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetShadowFrameShow__10CEohMotherFiPci
// Address: 0x25ee20 - 0x25eecc
void SetShadowFrameShow__10CEohMotherFiPci_0x25ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetShadowFrameShow__10CEohMotherFiPci_0x25ee20");
#endif

    switch (ctx->pc) {
        case 0x25ee90u: goto label_25ee90;
        default: break;
    }

    ctx->pc = 0x25ee20u;

    // 0x25ee20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ee24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25ee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25ee28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ee28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ee2c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EE2Cu;
    {
        const bool branch_taken_0x25ee2c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25EE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EE2Cu;
            // 0x25ee30: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee2c) {
            ctx->pc = 0x25EE40u;
            goto label_25ee40;
        }
    }
    ctx->pc = 0x25EE34u;
    // 0x25ee34: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25ee34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25ee38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EE38u;
    {
        const bool branch_taken_0x25ee38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EE38u;
            // 0x25ee3c: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee38) {
            ctx->pc = 0x25EE48u;
            goto label_25ee48;
        }
    }
    ctx->pc = 0x25EE40u;
label_25ee40:
    // 0x25ee40: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25EE40u;
    {
        const bool branch_taken_0x25ee40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EE40u;
            // 0x25ee44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee40) {
            ctx->pc = 0x25EEBCu;
            goto label_25eebc;
        }
    }
    ctx->pc = 0x25EE48u;
label_25ee48:
    // 0x25ee48: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25ee4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25ee50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EE50u;
    {
        const bool branch_taken_0x25ee50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ee50) {
            ctx->pc = 0x25EE60u;
            goto label_25ee60;
        }
    }
    ctx->pc = 0x25EE58u;
    // 0x25ee58: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25EE58u;
    {
        const bool branch_taken_0x25ee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EE58u;
            // 0x25ee5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee58) {
            ctx->pc = 0x25EEBCu;
            goto label_25eebc;
        }
    }
    ctx->pc = 0x25EE60u;
label_25ee60:
    // 0x25ee60: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x25ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25ee64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EE64u;
    {
        const bool branch_taken_0x25ee64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ee64) {
            ctx->pc = 0x25EE74u;
            goto label_25ee74;
        }
    }
    ctx->pc = 0x25EE6Cu;
    // 0x25ee6c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25EE6Cu;
    {
        const bool branch_taken_0x25ee6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EE6Cu;
            // 0x25ee70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee6c) {
            ctx->pc = 0x25EEBCu;
            goto label_25eebc;
        }
    }
    ctx->pc = 0x25EE74u;
label_25ee74:
    // 0x25ee74: 0x8c4402c0  lw          $a0, 0x2C0($v0)
    ctx->pc = 0x25ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
    // 0x25ee78: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EE78u;
    {
        const bool branch_taken_0x25ee78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EE78u;
            // 0x25ee7c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee78) {
            ctx->pc = 0x25EE88u;
            goto label_25ee88;
        }
    }
    ctx->pc = 0x25EE80u;
    // 0x25ee80: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25EE80u;
    {
        const bool branch_taken_0x25ee80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EE80u;
            // 0x25ee84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee80) {
            ctx->pc = 0x25EEBCu;
            goto label_25eebc;
        }
    }
    ctx->pc = 0x25EE88u;
label_25ee88:
    // 0x25ee88: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x25EE88u;
    SET_GPR_U32(ctx, 31, 0x25EE90u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EE90u; }
        if (ctx->pc != 0x25EE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EE90u; }
        if (ctx->pc != 0x25EE90u) { return; }
    }
    ctx->pc = 0x25EE90u;
label_25ee90:
    // 0x25ee90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EE90u;
    {
        const bool branch_taken_0x25ee90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ee90) {
            ctx->pc = 0x25EEA0u;
            goto label_25eea0;
        }
    }
    ctx->pc = 0x25EE98u;
    // 0x25ee98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25EE98u;
    {
        const bool branch_taken_0x25ee98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EE98u;
            // 0x25ee9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee98) {
            ctx->pc = 0x25EEBCu;
            goto label_25eebc;
        }
    }
    ctx->pc = 0x25EEA0u;
label_25eea0:
    // 0x25eea0: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x25eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x25eea4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EEA4u;
    {
        const bool branch_taken_0x25eea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25eea4) {
            ctx->pc = 0x25EEB4u;
            goto label_25eeb4;
        }
    }
    ctx->pc = 0x25EEACu;
    // 0x25eeac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25EEACu;
    {
        const bool branch_taken_0x25eeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EEACu;
            // 0x25eeb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eeac) {
            ctx->pc = 0x25EEBCu;
            goto label_25eebc;
        }
    }
    ctx->pc = 0x25EEB4u;
label_25eeb4:
    // 0x25eeb4: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x25eeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
    // 0x25eeb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25eebc:
    // 0x25eebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25eebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25eec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25eec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25eec4: 0x3e00008  jr          $ra
    ctx->pc = 0x25EEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EEC4u;
            // 0x25eec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25EECCu;
}
