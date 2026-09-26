#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgDrawDirect__FP9mgCVisualPA4_f
// Address: 0x143040 - 0x1430b4
void mgDrawDirect__FP9mgCVisualPA4_f_0x143040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgDrawDirect__FP9mgCVisualPA4_f_0x143040");
#endif

    switch (ctx->pc) {
        case 0x143040u: goto label_143040;
        case 0x143044u: goto label_143044;
        case 0x143048u: goto label_143048;
        case 0x14304cu: goto label_14304c;
        case 0x143050u: goto label_143050;
        case 0x143054u: goto label_143054;
        case 0x143058u: goto label_143058;
        case 0x14305cu: goto label_14305c;
        case 0x143060u: goto label_143060;
        case 0x143064u: goto label_143064;
        case 0x143068u: goto label_143068;
        case 0x14306cu: goto label_14306c;
        case 0x143070u: goto label_143070;
        case 0x143074u: goto label_143074;
        case 0x143078u: goto label_143078;
        case 0x14307cu: goto label_14307c;
        case 0x143080u: goto label_143080;
        case 0x143084u: goto label_143084;
        case 0x143088u: goto label_143088;
        case 0x14308cu: goto label_14308c;
        case 0x143090u: goto label_143090;
        case 0x143094u: goto label_143094;
        case 0x143098u: goto label_143098;
        case 0x14309cu: goto label_14309c;
        case 0x1430a0u: goto label_1430a0;
        case 0x1430a4u: goto label_1430a4;
        case 0x1430a8u: goto label_1430a8;
        case 0x1430acu: goto label_1430ac;
        case 0x1430b0u: goto label_1430b0;
        default: break;
    }

    ctx->pc = 0x143040u;

label_143040:
    // 0x143040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_143044:
    // 0x143044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x143044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_143048:
    // 0x143048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14304c:
    // 0x14304c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_143050:
    // 0x143050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x143050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_143054:
    // 0x143054: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_143058:
    if (ctx->pc == 0x143058u) {
        ctx->pc = 0x143058u;
            // 0x143058: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14305Cu;
        goto label_14305c;
    }
    ctx->pc = 0x143054u;
    {
        const bool branch_taken_0x143054 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x143058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143054u;
            // 0x143058: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143054) {
            ctx->pc = 0x143064u;
            goto label_143064;
        }
    }
    ctx->pc = 0x14305Cu;
label_14305c:
    // 0x14305c: 0x10000010  b           . + 4 + (0x10 << 2)
label_143060:
    if (ctx->pc == 0x143060u) {
        ctx->pc = 0x143060u;
            // 0x143060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x143064u;
        goto label_143064;
    }
    ctx->pc = 0x14305Cu;
    {
        const bool branch_taken_0x14305c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14305Cu;
            // 0x143060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14305c) {
            ctx->pc = 0x1430A0u;
            goto label_1430a0;
        }
    }
    ctx->pc = 0x143064u;
label_143064:
    // 0x143064: 0xc041ace  jal         func_106B38
label_143068:
    if (ctx->pc == 0x143068u) {
        ctx->pc = 0x143068u;
            // 0x143068: 0x8f848774  lw          $a0, -0x788C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
        ctx->pc = 0x14306Cu;
        goto label_14306c;
    }
    ctx->pc = 0x143064u;
    SET_GPR_U32(ctx, 31, 0x14306Cu);
    ctx->pc = 0x143068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143064u;
            // 0x143068: 0x8f848774  lw          $a0, -0x788C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B38u;
    if (runtime->hasFunction(0x106B38u)) {
        auto targetFn = runtime->lookupFunction(0x106B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14306Cu; }
        if (ctx->pc != 0x14306Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkTerminate_0x106b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14306Cu; }
        if (ctx->pc != 0x14306Cu) { return; }
    }
    ctx->pc = 0x14306Cu;
label_14306c:
    // 0x14306c: 0x8f828774  lw          $v0, -0x788C($gp)
    ctx->pc = 0x14306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_143070:
    // 0x143070: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x143070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143074:
    // 0x143074: 0x8e39001c  lw          $t9, 0x1C($s1)
    ctx->pc = 0x143074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_143078:
    // 0x143078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x143078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14307c:
    // 0x14307c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14307cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_143080:
    // 0x143080: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x143080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_143084:
    // 0x143084: 0x320f809  jalr        $t9
label_143088:
    if (ctx->pc == 0x143088u) {
        ctx->pc = 0x143088u;
            // 0x143088: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14308Cu;
        goto label_14308c;
    }
    ctx->pc = 0x143084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14308Cu);
        ctx->pc = 0x143088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143084u;
            // 0x143088: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14308Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14308Cu; }
            if (ctx->pc != 0x14308Cu) { return; }
        }
        }
    }
    ctx->pc = 0x14308Cu;
label_14308c:
    // 0x14308c: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x14308cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_143090:
    // 0x143090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x143090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143094:
    // 0x143094: 0xc041b7e  jal         func_106DF8
label_143098:
    if (ctx->pc == 0x143098u) {
        ctx->pc = 0x143098u;
            // 0x143098: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x14309Cu;
        goto label_14309c;
    }
    ctx->pc = 0x143094u;
    SET_GPR_U32(ctx, 31, 0x14309Cu);
    ctx->pc = 0x143098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143094u;
            // 0x143098: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106DF8u;
    if (runtime->hasFunction(0x106DF8u)) {
        auto targetFn = runtime->lookupFunction(0x106DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14309Cu; }
        if (ctx->pc != 0x14309Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkReserve_0x106df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14309Cu; }
        if (ctx->pc != 0x14309Cu) { return; }
    }
    ctx->pc = 0x14309Cu;
label_14309c:
    // 0x14309c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14309cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1430a0:
    // 0x1430a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1430a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1430a4:
    // 0x1430a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1430a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1430a8:
    // 0x1430a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1430a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1430ac:
    // 0x1430ac: 0x3e00008  jr          $ra
label_1430b0:
    if (ctx->pc == 0x1430B0u) {
        ctx->pc = 0x1430B0u;
            // 0x1430b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1430B4u;
        goto label_fallthrough_0x1430ac;
    }
    ctx->pc = 0x1430ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1430B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1430ACu;
            // 0x1430b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1430ac:
    ctx->pc = 0x1430B4u;
}
