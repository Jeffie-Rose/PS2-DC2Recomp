#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CROSSFADE__FP12RS_STACKDATAi
// Address: 0x265050 - 0x26512c
void ps2__SET_CROSSFADE__FP12RS_STACKDATAi_0x265050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CROSSFADE__FP12RS_STACKDATAi_0x265050");
#endif

    switch (ctx->pc) {
        case 0x265074u: goto label_265074;
        case 0x26508cu: goto label_26508c;
        case 0x26509cu: goto label_26509c;
        case 0x2650a8u: goto label_2650a8;
        case 0x2650ccu: goto label_2650cc;
        case 0x2650ecu: goto label_2650ec;
        case 0x2650fcu: goto label_2650fc;
        case 0x265114u: goto label_265114;
        default: break;
    }

    ctx->pc = 0x265050u;

    // 0x265050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x265054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x265058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26505c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x265060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x265060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265064: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x265064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x265068: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x265068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26506c: 0xc05f69c  jal         func_17DA70
    ctx->pc = 0x26506Cu;
    SET_GPR_U32(ctx, 31, 0x265074u);
    ctx->pc = 0x265070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26506Cu;
            // 0x265070: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DA70u;
    if (runtime->hasFunction(0x17DA70u)) {
        auto targetFn = runtime->lookupFunction(0x17DA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265074u; }
        if (ctx->pc != 0x265074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CaptureScreen__10CFadeInOutFv_0x17da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265074u; }
        if (ctx->pc != 0x265074u) { return; }
    }
    ctx->pc = 0x265074u;
label_265074:
    // 0x265074: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x265074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265078: 0x1602001e  bne         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x265078u;
    {
        const bool branch_taken_0x265078 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26507Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265078u;
            // 0x26507c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265078) {
            ctx->pc = 0x2650F4u;
            goto label_2650f4;
        }
    }
    ctx->pc = 0x265080u;
    // 0x265080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x265080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265084: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265084u;
    SET_GPR_U32(ctx, 31, 0x26508Cu);
    ctx->pc = 0x265088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265084u;
            // 0x265088: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26508Cu; }
        if (ctx->pc != 0x26508Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26508Cu; }
        if (ctx->pc != 0x26508Cu) { return; }
    }
    ctx->pc = 0x26508Cu;
label_26508c:
    // 0x26508c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26508cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x265090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265094: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265094u;
    SET_GPR_U32(ctx, 31, 0x26509Cu);
    ctx->pc = 0x265098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265094u;
            // 0x265098: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26509Cu; }
        if (ctx->pc != 0x26509Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26509Cu; }
        if (ctx->pc != 0x26509Cu) { return; }
    }
    ctx->pc = 0x26509Cu;
label_26509c:
    // 0x26509c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26509cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2650a0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2650A0u;
    SET_GPR_U32(ctx, 31, 0x2650A8u);
    ctx->pc = 0x2650A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2650A0u;
            // 0x2650a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2650A8u; }
        if (ctx->pc != 0x2650A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2650A8u; }
        if (ctx->pc != 0x2650A8u) { return; }
    }
    ctx->pc = 0x2650A8u;
label_2650a8:
    // 0x2650a8: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2650A8u;
    {
        const bool branch_taken_0x2650a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2650ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2650A8u;
            // 0x2650ac: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650a8) {
            ctx->pc = 0x2650D4u;
            goto label_2650d4;
        }
    }
    ctx->pc = 0x2650B0u;
    // 0x2650b0: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x2650b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2650b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2650b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2650b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2650b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2650bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2650bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2650c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2650c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2650c4: 0xc05f62c  jal         func_17D8B0
    ctx->pc = 0x2650C4u;
    SET_GPR_U32(ctx, 31, 0x2650CCu);
    ctx->pc = 0x2650C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2650C4u;
            // 0x2650c8: 0x24642c70  addiu       $a0, $v1, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D8B0u;
    if (runtime->hasFunction(0x17D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x17D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2650CCu; }
        if (ctx->pc != 0x2650CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CrossFadeIn__10CFadeInOutFiif_0x17d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2650CCu; }
        if (ctx->pc != 0x2650CCu) { return; }
    }
    ctx->pc = 0x2650CCu;
label_2650cc:
    // 0x2650cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2650CCu;
    {
        const bool branch_taken_0x2650cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2650D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2650CCu;
            // 0x2650d0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650cc) {
            ctx->pc = 0x265118u;
            goto label_265118;
        }
    }
    ctx->pc = 0x2650D4u;
label_2650d4:
    // 0x2650d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2650d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2650d8: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x2650d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2650dc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2650dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2650e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2650e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2650e4: 0xc05f644  jal         func_17D910
    ctx->pc = 0x2650E4u;
    SET_GPR_U32(ctx, 31, 0x2650ECu);
    ctx->pc = 0x2650E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2650E4u;
            // 0x2650e8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D910u;
    if (runtime->hasFunction(0x17D910u)) {
        auto targetFn = runtime->lookupFunction(0x17D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2650ECu; }
        if (ctx->pc != 0x2650ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CrossFadeOut__10CFadeInOutFiif_0x17d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2650ECu; }
        if (ctx->pc != 0x2650ECu) { return; }
    }
    ctx->pc = 0x2650ECu;
label_2650ec:
    // 0x2650ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2650ECu;
    {
        const bool branch_taken_0x2650ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2650ec) {
            ctx->pc = 0x265114u;
            goto label_265114;
        }
    }
    ctx->pc = 0x2650F4u;
label_2650f4:
    // 0x2650f4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2650F4u;
    SET_GPR_U32(ctx, 31, 0x2650FCu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2650FCu; }
        if (ctx->pc != 0x2650FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2650FCu; }
        if (ctx->pc != 0x2650FCu) { return; }
    }
    ctx->pc = 0x2650FCu;
label_2650fc:
    // 0x2650fc: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x2650fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x265100: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x265100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265104: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x265104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x265108: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x265108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26510c: 0xc05f628  jal         func_17D8A0
    ctx->pc = 0x26510Cu;
    SET_GPR_U32(ctx, 31, 0x265114u);
    ctx->pc = 0x265110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26510Cu;
            // 0x265110: 0x24642c70  addiu       $a0, $v1, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D8A0u;
    if (runtime->hasFunction(0x17D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x17D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265114u; }
        if (ctx->pc != 0x265114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CrossFade__10CFadeInOutFif_0x17d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265114u; }
        if (ctx->pc != 0x265114u) { return; }
    }
    ctx->pc = 0x265114u;
label_265114:
    // 0x265114: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x265114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_265118:
    // 0x265118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26511c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26511cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265124: 0x3e00008  jr          $ra
    ctx->pc = 0x265124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265124u;
            // 0x265128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26512Cu;
}
