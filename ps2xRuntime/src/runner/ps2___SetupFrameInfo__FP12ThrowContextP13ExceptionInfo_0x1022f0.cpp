#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __SetupFrameInfo__FP12ThrowContextP13ExceptionInfo
// Address: 0x1022f0 - 0x1023a0
void ps2___SetupFrameInfo__FP12ThrowContextP13ExceptionInfo_0x1022f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___SetupFrameInfo__FP12ThrowContextP13ExceptionInfo_0x1022f0");
#endif

    switch (ctx->pc) {
        case 0x10233cu: goto label_10233c;
        case 0x102348u: goto label_102348;
        case 0x102380u: goto label_102380;
        default: break;
    }

    ctx->pc = 0x1022f0u;

    // 0x1022f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1022f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1022f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1022f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1022f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1022f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1022fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1022fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x102300: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x102300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102304: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x102304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x102308: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x102308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10230c: 0x26250220  addiu       $a1, $s1, 0x220
    ctx->pc = 0x10230cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x102310: 0x30500040  andi        $s0, $v0, 0x40
    ctx->pc = 0x102310u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x102314: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x102314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x102318: 0xac820230  sw          $v0, 0x230($a0)
    ctx->pc = 0x102318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
    // 0x10231c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x10231cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102320: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x102320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x102324: 0xac82022c  sw          $v0, 0x22C($a0)
    ctx->pc = 0x102324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 2));
    // 0x102328: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x102328u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10232c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x10232cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x102330: 0xac820228  sw          $v0, 0x228($a0)
    ctx->pc = 0x102330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 2));
    // 0x102334: 0xc04028c  jal         func_100A30
    ctx->pc = 0x102334u;
    SET_GPR_U32(ctx, 31, 0x10233Cu);
    ctx->pc = 0x102338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102334u;
            // 0x102338: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10233Cu; }
        if (ctx->pc != 0x10233Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10233Cu; }
        if (ctx->pc != 0x10233Cu) { return; }
    }
    ctx->pc = 0x10233Cu;
label_10233c:
    // 0x10233c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10233cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102340: 0xc04028c  jal         func_100A30
    ctx->pc = 0x102340u;
    SET_GPR_U32(ctx, 31, 0x102348u);
    ctx->pc = 0x102344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102340u;
            // 0x102344: 0x26250224  addiu       $a1, $s1, 0x224 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 548));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102348u; }
        if (ctx->pc != 0x102348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102348u; }
        if (ctx->pc != 0x102348u) { return; }
    }
    ctx->pc = 0x102348u;
label_102348:
    // 0x102348: 0x8e230230  lw          $v1, 0x230($s1)
    ctx->pc = 0x102348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x10234c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10234Cu;
    {
        const bool branch_taken_0x10234c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10234Cu;
            // 0x102350: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10234c) {
            ctx->pc = 0x102368u;
            goto label_102368;
        }
    }
    ctx->pc = 0x102354u;
    // 0x102354: 0x7a230200  lq          $v1, 0x200($s1)
    ctx->pc = 0x102354u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x102358: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x102358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x10235c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10235cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x102360: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x102360u;
    {
        const bool branch_taken_0x102360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102360u;
            // 0x102364: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102360) {
            ctx->pc = 0x102370u;
            goto label_102370;
        }
    }
    ctx->pc = 0x102368u;
label_102368:
    // 0x102368: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x102368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x10236c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x10236cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_102370:
    // 0x102370: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102370u;
    {
        const bool branch_taken_0x102370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x102374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102370u;
            // 0x102374: 0x26250234  addiu       $a1, $s1, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 564));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102370) {
            ctx->pc = 0x102388u;
            goto label_102388;
        }
    }
    ctx->pc = 0x102378u;
    // 0x102378: 0xc04028c  jal         func_100A30
    ctx->pc = 0x102378u;
    SET_GPR_U32(ctx, 31, 0x102380u);
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102380u; }
        if (ctx->pc != 0x102380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102380u; }
        if (ctx->pc != 0x102380u) { return; }
    }
    ctx->pc = 0x102380u;
label_102380:
    // 0x102380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x102380u;
    {
        const bool branch_taken_0x102380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102380u;
            // 0x102384: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102380) {
            ctx->pc = 0x102390u;
            goto label_102390;
        }
    }
    ctx->pc = 0x102388u;
label_102388:
    // 0x102388: 0xae200234  sw          $zero, 0x234($s1)
    ctx->pc = 0x102388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 0));
    // 0x10238c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10238cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_102390:
    // 0x102390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x102390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x102394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102398: 0x3e00008  jr          $ra
    ctx->pc = 0x102398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10239Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102398u;
            // 0x10239c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1023A0u;
}
