#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_TEX_ANIME__FP12RS_STACKDATAi
// Address: 0x272340 - 0x2723c8
void ps2__OBJS_TEX_ANIME__FP12RS_STACKDATAi_0x272340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_TEX_ANIME__FP12RS_STACKDATAi_0x272340");
#endif

    switch (ctx->pc) {
        case 0x272360u: goto label_272360;
        case 0x272370u: goto label_272370;
        case 0x272388u: goto label_272388;
        case 0x272394u: goto label_272394;
        case 0x2723acu: goto label_2723ac;
        default: break;
    }

    ctx->pc = 0x272340u;

    // 0x272340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x272340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x272344: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x272344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x272348: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x272348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27234c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27234cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272350: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x272350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x272354: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x272354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272358: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272358u;
    SET_GPR_U32(ctx, 31, 0x272360u);
    ctx->pc = 0x27235Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272358u;
            // 0x27235c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272360u; }
        if (ctx->pc != 0x272360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272360u; }
        if (ctx->pc != 0x272360u) { return; }
    }
    ctx->pc = 0x272360u;
label_272360:
    // 0x272360: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272364: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272368: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272368u;
    SET_GPR_U32(ctx, 31, 0x272370u);
    ctx->pc = 0x27236Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272368u;
            // 0x27236c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272370u; }
        if (ctx->pc != 0x272370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272370u; }
        if (ctx->pc != 0x272370u) { return; }
    }
    ctx->pc = 0x272370u;
label_272370:
    // 0x272370: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x272370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272374: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x272374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x272378: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272378u;
    {
        const bool branch_taken_0x272378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27237Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272378u;
            // 0x27237c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272378) {
            ctx->pc = 0x27238Cu;
            goto label_27238c;
        }
    }
    ctx->pc = 0x272380u;
    // 0x272380: 0xc097e48  jal         func_25F920
    ctx->pc = 0x272380u;
    SET_GPR_U32(ctx, 31, 0x272388u);
    ctx->pc = 0x272384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272380u;
            // 0x272384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272388u; }
        if (ctx->pc != 0x272388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272388u; }
        if (ctx->pc != 0x272388u) { return; }
    }
    ctx->pc = 0x272388u;
label_272388:
    // 0x272388: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27238c:
    // 0x27238c: 0xc098a44  jal         func_262910
    ctx->pc = 0x27238Cu;
    SET_GPR_U32(ctx, 31, 0x272394u);
    ctx->pc = 0x272390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27238Cu;
            // 0x272390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272394u; }
        if (ctx->pc != 0x272394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272394u; }
        if (ctx->pc != 0x272394u) { return; }
    }
    ctx->pc = 0x272394u;
label_272394:
    // 0x272394: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272394u;
    {
        const bool branch_taken_0x272394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272394u;
            // 0x272398: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272394) {
            ctx->pc = 0x2723A4u;
            goto label_2723a4;
        }
    }
    ctx->pc = 0x27239Cu;
    // 0x27239c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27239Cu;
    {
        const bool branch_taken_0x27239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2723A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27239Cu;
            // 0x2723a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27239c) {
            ctx->pc = 0x2723B0u;
            goto label_2723b0;
        }
    }
    ctx->pc = 0x2723A4u;
label_2723a4:
    // 0x2723a4: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2723A4u;
    SET_GPR_U32(ctx, 31, 0x2723ACu);
    ctx->pc = 0x25D230u;
    if (runtime->hasFunction(0x25D230u)) {
        auto targetFn = runtime->lookupFunction(0x25D230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2723ACu; }
        if (ctx->pc != 0x2723ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexAnime__12CSceneObjSeqFPci_0x25d230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2723ACu; }
        if (ctx->pc != 0x2723ACu) { return; }
    }
    ctx->pc = 0x2723ACu;
label_2723ac:
    // 0x2723ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2723acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2723b0:
    // 0x2723b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2723b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2723b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2723b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2723b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2723b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2723bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2723bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2723c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2723C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2723C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2723C0u;
            // 0x2723c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2723C8u;
}
