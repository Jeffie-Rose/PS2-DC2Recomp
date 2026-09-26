#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__4CMapFv
// Address: 0x15fef0 - 0x15ff58
void Step__4CMapFv_0x15fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__4CMapFv_0x15fef0");
#endif

    switch (ctx->pc) {
        case 0x15fef0u: goto label_15fef0;
        case 0x15fef4u: goto label_15fef4;
        case 0x15fef8u: goto label_15fef8;
        case 0x15fefcu: goto label_15fefc;
        case 0x15ff00u: goto label_15ff00;
        case 0x15ff04u: goto label_15ff04;
        case 0x15ff08u: goto label_15ff08;
        case 0x15ff0cu: goto label_15ff0c;
        case 0x15ff10u: goto label_15ff10;
        case 0x15ff14u: goto label_15ff14;
        case 0x15ff18u: goto label_15ff18;
        case 0x15ff1cu: goto label_15ff1c;
        case 0x15ff20u: goto label_15ff20;
        case 0x15ff24u: goto label_15ff24;
        case 0x15ff28u: goto label_15ff28;
        case 0x15ff2cu: goto label_15ff2c;
        case 0x15ff30u: goto label_15ff30;
        case 0x15ff34u: goto label_15ff34;
        case 0x15ff38u: goto label_15ff38;
        case 0x15ff3cu: goto label_15ff3c;
        case 0x15ff40u: goto label_15ff40;
        case 0x15ff44u: goto label_15ff44;
        case 0x15ff48u: goto label_15ff48;
        case 0x15ff4cu: goto label_15ff4c;
        case 0x15ff50u: goto label_15ff50;
        case 0x15ff54u: goto label_15ff54;
        default: break;
    }

    ctx->pc = 0x15fef0u;

label_15fef0:
    // 0x15fef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15fef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15fef4:
    // 0x15fef4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15fef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15fef8:
    // 0x15fef8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15fef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15fefc:
    // 0x15fefc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15fefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15ff00:
    // 0x15ff00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15ff00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ff04:
    // 0x15ff04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ff04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15ff08:
    // 0x15ff08: 0x8c90032c  lw          $s0, 0x32C($a0)
    ctx->pc = 0x15ff08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
label_15ff0c:
    // 0x15ff0c: 0x10000007  b           . + 4 + (0x7 << 2)
label_15ff10:
    if (ctx->pc == 0x15FF10u) {
        ctx->pc = 0x15FF10u;
            // 0x15ff10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FF14u;
        goto label_15ff14;
    }
    ctx->pc = 0x15FF0Cu;
    {
        const bool branch_taken_0x15ff0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF0Cu;
            // 0x15ff10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff0c) {
            ctx->pc = 0x15FF2Cu;
            goto label_15ff2c;
        }
    }
    ctx->pc = 0x15FF14u;
label_15ff14:
    // 0x15ff14: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x15ff14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15ff18:
    // 0x15ff18: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x15ff18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_15ff1c:
    // 0x15ff1c: 0x320f809  jalr        $t9
label_15ff20:
    if (ctx->pc == 0x15FF20u) {
        ctx->pc = 0x15FF20u;
            // 0x15ff20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FF24u;
        goto label_15ff24;
    }
    ctx->pc = 0x15FF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15FF24u);
        ctx->pc = 0x15FF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF1Cu;
            // 0x15ff20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15FF24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15FF24u; }
            if (ctx->pc != 0x15FF24u) { return; }
        }
        }
    }
    ctx->pc = 0x15FF24u;
label_15ff24:
    // 0x15ff24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15ff24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15ff28:
    // 0x15ff28: 0x26100310  addiu       $s0, $s0, 0x310
    ctx->pc = 0x15ff28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_15ff2c:
    // 0x15ff2c: 0x0  nop
    ctx->pc = 0x15ff2cu;
    // NOP
label_15ff30:
    // 0x15ff30: 0x8e430330  lw          $v1, 0x330($s2)
    ctx->pc = 0x15ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 816)));
label_15ff34:
    // 0x15ff34: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15ff34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15ff38:
    // 0x15ff38: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_15ff3c:
    if (ctx->pc == 0x15FF3Cu) {
        ctx->pc = 0x15FF40u;
        goto label_15ff40;
    }
    ctx->pc = 0x15FF38u;
    {
        const bool branch_taken_0x15ff38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ff38) {
            ctx->pc = 0x15FF14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ff14;
        }
    }
    ctx->pc = 0x15FF40u;
label_15ff40:
    // 0x15ff40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15ff40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15ff44:
    // 0x15ff44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ff44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15ff48:
    // 0x15ff48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ff48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15ff4c:
    // 0x15ff4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ff4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15ff50:
    // 0x15ff50: 0x3e00008  jr          $ra
label_15ff54:
    if (ctx->pc == 0x15FF54u) {
        ctx->pc = 0x15FF54u;
            // 0x15ff54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x15FF58u;
        goto label_fallthrough_0x15ff50;
    }
    ctx->pc = 0x15FF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF50u;
            // 0x15ff54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15ff50:
    ctx->pc = 0x15FF58u;
}
