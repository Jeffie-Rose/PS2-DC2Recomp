#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawLast__11CDngFreeMapFv
// Address: 0x1eb030 - 0x1eb114
void DrawLast__11CDngFreeMapFv_0x1eb030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawLast__11CDngFreeMapFv_0x1eb030");
#endif

    switch (ctx->pc) {
        case 0x1eb06cu: goto label_1eb06c;
        case 0x1eb078u: goto label_1eb078;
        case 0x1eb084u: goto label_1eb084;
        case 0x1eb090u: goto label_1eb090;
        case 0x1eb09cu: goto label_1eb09c;
        case 0x1eb0b4u: goto label_1eb0b4;
        case 0x1eb0c4u: goto label_1eb0c4;
        case 0x1eb0d8u: goto label_1eb0d8;
        case 0x1eb0e8u: goto label_1eb0e8;
        case 0x1eb0fcu: goto label_1eb0fc;
        case 0x1eb104u: goto label_1eb104;
        default: break;
    }

    ctx->pc = 0x1eb030u;

    // 0x1eb030: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1eb030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1eb034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eb034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eb038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eb03c: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x1eb03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1eb040: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1EB040u;
    {
        const bool branch_taken_0x1eb040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB040u;
            // 0x1eb044: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb040) {
            ctx->pc = 0x1EB104u;
            goto label_1eb104;
        }
    }
    ctx->pc = 0x1EB048u;
    // 0x1eb048: 0x8604000c  lh          $a0, 0xC($s0)
    ctx->pc = 0x1eb048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1eb04c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb050: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB050u;
    {
        const bool branch_taken_0x1eb050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EB054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB050u;
            // 0x1eb054: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb050) {
            ctx->pc = 0x1EB064u;
            goto label_1eb064;
        }
    }
    ctx->pc = 0x1EB058u;
    // 0x1eb058: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1EB058u;
    {
        const bool branch_taken_0x1eb058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB058u;
            // 0x1eb05c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb058) {
            ctx->pc = 0x1EB108u;
            goto label_1eb108;
        }
    }
    ctx->pc = 0x1EB060u;
    // 0x1eb060: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1eb060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1eb064:
    // 0x1eb064: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1EB064u;
    SET_GPR_U32(ctx, 31, 0x1EB06Cu);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB06Cu; }
        if (ctx->pc != 0x1EB06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB06Cu; }
        if (ctx->pc != 0x1EB06Cu) { return; }
    }
    ctx->pc = 0x1EB06Cu;
label_1eb06c:
    // 0x1eb06c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1eb06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb070: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1EB070u;
    SET_GPR_U32(ctx, 31, 0x1EB078u);
    ctx->pc = 0x1EB074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB070u;
            // 0x1eb074: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB078u; }
        if (ctx->pc != 0x1EB078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB078u; }
        if (ctx->pc != 0x1EB078u) { return; }
    }
    ctx->pc = 0x1EB078u;
label_1eb078:
    // 0x1eb078: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1eb078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb07c: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1EB07Cu;
    SET_GPR_U32(ctx, 31, 0x1EB084u);
    ctx->pc = 0x1EB080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB07Cu;
            // 0x1eb080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB084u; }
        if (ctx->pc != 0x1EB084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB084u; }
        if (ctx->pc != 0x1EB084u) { return; }
    }
    ctx->pc = 0x1EB084u;
label_1eb084:
    // 0x1eb084: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1eb084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb088: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1EB088u;
    SET_GPR_U32(ctx, 31, 0x1EB090u);
    ctx->pc = 0x1EB08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB088u;
            // 0x1eb08c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB090u; }
        if (ctx->pc != 0x1EB090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB090u; }
        if (ctx->pc != 0x1EB090u) { return; }
    }
    ctx->pc = 0x1EB090u;
label_1eb090:
    // 0x1eb090: 0x8e0500dc  lw          $a1, 0xDC($s0)
    ctx->pc = 0x1eb090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1eb094: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1EB094u;
    SET_GPR_U32(ctx, 31, 0x1EB09Cu);
    ctx->pc = 0x1EB098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB094u;
            // 0x1eb098: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB09Cu; }
        if (ctx->pc != 0x1EB09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB09Cu; }
        if (ctx->pc != 0x1EB09Cu) { return; }
    }
    ctx->pc = 0x1EB09Cu;
label_1eb09c:
    // 0x1eb09c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1eb09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb0a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1eb0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb0a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1eb0a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0a8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1eb0a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0ac: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EB0ACu;
    SET_GPR_U32(ctx, 31, 0x1EB0B4u);
    ctx->pc = 0x1EB0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0ACu;
            // 0x1eb0b0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0B4u; }
        if (ctx->pc != 0x1EB0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0B4u; }
        if (ctx->pc != 0x1EB0B4u) { return; }
    }
    ctx->pc = 0x1EB0B4u;
label_1eb0b4:
    // 0x1eb0b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1eb0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb0b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0bc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1EB0BCu;
    SET_GPR_U32(ctx, 31, 0x1EB0C4u);
    ctx->pc = 0x1EB0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0BCu;
            // 0x1eb0c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0C4u; }
        if (ctx->pc != 0x1EB0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0C4u; }
        if (ctx->pc != 0x1EB0C4u) { return; }
    }
    ctx->pc = 0x1EB0C4u;
label_1eb0c4:
    // 0x1eb0c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1eb0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb0c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eb0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0d0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1EB0D0u;
    SET_GPR_U32(ctx, 31, 0x1EB0D8u);
    ctx->pc = 0x1EB0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0D0u;
            // 0x1eb0d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0D8u; }
        if (ctx->pc != 0x1EB0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0D8u; }
        if (ctx->pc != 0x1EB0D8u) { return; }
    }
    ctx->pc = 0x1EB0D8u;
label_1eb0d8:
    // 0x1eb0d8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1eb0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb0dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1eb0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb0e0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1EB0E0u;
    SET_GPR_U32(ctx, 31, 0x1EB0E8u);
    ctx->pc = 0x1EB0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0E0u;
            // 0x1eb0e4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0E8u; }
        if (ctx->pc != 0x1EB0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0E8u; }
        if (ctx->pc != 0x1EB0E8u) { return; }
    }
    ctx->pc = 0x1EB0E8u;
label_1eb0e8:
    // 0x1eb0e8: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x1eb0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1eb0ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1eb0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb0f0: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x1eb0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1eb0f4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1EB0F4u;
    SET_GPR_U32(ctx, 31, 0x1EB0FCu);
    ctx->pc = 0x1EB0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0F4u;
            // 0x1eb0f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0FCu; }
        if (ctx->pc != 0x1EB0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0FCu; }
        if (ctx->pc != 0x1EB0FCu) { return; }
    }
    ctx->pc = 0x1EB0FCu;
label_1eb0fc:
    // 0x1eb0fc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1EB0FCu;
    SET_GPR_U32(ctx, 31, 0x1EB104u);
    ctx->pc = 0x1EB100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0FCu;
            // 0x1eb100: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB104u; }
        if (ctx->pc != 0x1EB104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB104u; }
        if (ctx->pc != 0x1EB104u) { return; }
    }
    ctx->pc = 0x1EB104u;
label_1eb104:
    // 0x1eb104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eb104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb108:
    // 0x1eb108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb10c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB10Cu;
            // 0x1eb110: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB114u;
}
