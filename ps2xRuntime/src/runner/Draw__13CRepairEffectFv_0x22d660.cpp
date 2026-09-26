#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__13CRepairEffectFv
// Address: 0x22d660 - 0x22d844
void Draw__13CRepairEffectFv_0x22d660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__13CRepairEffectFv_0x22d660");
#endif

    switch (ctx->pc) {
        case 0x22d698u: goto label_22d698;
        case 0x22d6a4u: goto label_22d6a4;
        case 0x22d6b0u: goto label_22d6b0;
        case 0x22d6bcu: goto label_22d6bc;
        case 0x22d6c4u: goto label_22d6c4;
        case 0x22d6dcu: goto label_22d6dc;
        case 0x22d6ecu: goto label_22d6ec;
        case 0x22d700u: goto label_22d700;
        case 0x22d710u: goto label_22d710;
        case 0x22d72cu: goto label_22d72c;
        case 0x22d734u: goto label_22d734;
        case 0x22d740u: goto label_22d740;
        case 0x22d74cu: goto label_22d74c;
        case 0x22d758u: goto label_22d758;
        case 0x22d764u: goto label_22d764;
        case 0x22d770u: goto label_22d770;
        case 0x22d77cu: goto label_22d77c;
        case 0x22d798u: goto label_22d798;
        case 0x22d7b0u: goto label_22d7b0;
        case 0x22d7c0u: goto label_22d7c0;
        case 0x22d7d4u: goto label_22d7d4;
        case 0x22d7e4u: goto label_22d7e4;
        case 0x22d808u: goto label_22d808;
        case 0x22d828u: goto label_22d828;
        default: break;
    }

    ctx->pc = 0x22d660u;

    // 0x22d660: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x22d660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x22d664: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22d664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22d668: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22d668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22d66c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22d670: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22d674: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22d678: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x22d678u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d67c: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x22D67Cu;
    {
        const bool branch_taken_0x22d67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D67Cu;
            // 0x22d680: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d67c) {
            ctx->pc = 0x22D828u;
            goto label_22d828;
        }
    }
    ctx->pc = 0x22D684u;
    // 0x22d684: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x22d684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x22d688: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x22D688u;
    {
        const bool branch_taken_0x22d688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D688u;
            // 0x22d68c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d688) {
            ctx->pc = 0x22D828u;
            goto label_22d828;
        }
    }
    ctx->pc = 0x22D690u;
    // 0x22d690: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x22D690u;
    SET_GPR_U32(ctx, 31, 0x22D698u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D698u; }
        if (ctx->pc != 0x22D698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D698u; }
        if (ctx->pc != 0x22D698u) { return; }
    }
    ctx->pc = 0x22D698u;
label_22d698:
    // 0x22d698: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d69c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x22D69Cu;
    SET_GPR_U32(ctx, 31, 0x22D6A4u);
    ctx->pc = 0x22D6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D69Cu;
            // 0x22d6a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6A4u; }
        if (ctx->pc != 0x22D6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6A4u; }
        if (ctx->pc != 0x22D6A4u) { return; }
    }
    ctx->pc = 0x22D6A4u;
label_22d6a4:
    // 0x22d6a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d6a8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x22D6A8u;
    SET_GPR_U32(ctx, 31, 0x22D6B0u);
    ctx->pc = 0x22D6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D6A8u;
            // 0x22d6ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6B0u; }
        if (ctx->pc != 0x22D6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6B0u; }
        if (ctx->pc != 0x22D6B0u) { return; }
    }
    ctx->pc = 0x22D6B0u;
label_22d6b0:
    // 0x22d6b0: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x22d6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x22d6b4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x22D6B4u;
    SET_GPR_U32(ctx, 31, 0x22D6BCu);
    ctx->pc = 0x22D6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D6B4u;
            // 0x22d6b8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6BCu; }
        if (ctx->pc != 0x22D6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6BCu; }
        if (ctx->pc != 0x22D6BCu) { return; }
    }
    ctx->pc = 0x22D6BCu;
label_22d6bc:
    // 0x22d6bc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22D6BCu;
    SET_GPR_U32(ctx, 31, 0x22D6C4u);
    ctx->pc = 0x22D6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D6BCu;
            // 0x22d6c0: 0xc64c0014  lwc1        $f12, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6C4u; }
        if (ctx->pc != 0x22D6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6C4u; }
        if (ctx->pc != 0x22D6C4u) { return; }
    }
    ctx->pc = 0x22D6C4u;
label_22d6c4:
    // 0x22d6c4: 0x240500c4  addiu       $a1, $zero, 0xC4
    ctx->pc = 0x22d6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x22d6c8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22d6c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d6cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d6d0: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x22d6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22d6d4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22D6D4u;
    SET_GPR_U32(ctx, 31, 0x22D6DCu);
    ctx->pc = 0x22D6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D6D4u;
            // 0x22d6d8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6DCu; }
        if (ctx->pc != 0x22D6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6DCu; }
        if (ctx->pc != 0x22D6DCu) { return; }
    }
    ctx->pc = 0x22D6DCu;
label_22d6dc:
    // 0x22d6dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d6e0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x22d6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22d6e4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22D6E4u;
    SET_GPR_U32(ctx, 31, 0x22D6ECu);
    ctx->pc = 0x22D6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D6E4u;
            // 0x22d6e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6ECu; }
        if (ctx->pc != 0x22D6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6ECu; }
        if (ctx->pc != 0x22D6ECu) { return; }
    }
    ctx->pc = 0x22D6ECu;
label_22d6ec:
    // 0x22d6ec: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x22d6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22d6f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d6f4: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x22d6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x22d6f8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x22D6F8u;
    SET_GPR_U32(ctx, 31, 0x22D700u);
    ctx->pc = 0x22D6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D6F8u;
            // 0x22d6fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D700u; }
        if (ctx->pc != 0x22D700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D700u; }
        if (ctx->pc != 0x22D700u) { return; }
    }
    ctx->pc = 0x22D700u;
label_22d700:
    // 0x22d700: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d704: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x22d704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22d708: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22D708u;
    SET_GPR_U32(ctx, 31, 0x22D710u);
    ctx->pc = 0x22D70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D708u;
            // 0x22d70c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D710u; }
        if (ctx->pc != 0x22D710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D710u; }
        if (ctx->pc != 0x22D710u) { return; }
    }
    ctx->pc = 0x22D710u;
label_22d710:
    // 0x22d710: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x22d710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22d714: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d718: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x22d718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x22d71c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22d71cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d720: 0x24650028  addiu       $a1, $v1, 0x28
    ctx->pc = 0x22d720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x22d724: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x22D724u;
    SET_GPR_U32(ctx, 31, 0x22D72Cu);
    ctx->pc = 0x22D728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D724u;
            // 0x22d728: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D72Cu; }
        if (ctx->pc != 0x22D72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D72Cu; }
        if (ctx->pc != 0x22D72Cu) { return; }
    }
    ctx->pc = 0x22D72Cu;
label_22d72c:
    // 0x22d72c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x22D72Cu;
    SET_GPR_U32(ctx, 31, 0x22D734u);
    ctx->pc = 0x22D730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D72Cu;
            // 0x22d730: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D734u; }
        if (ctx->pc != 0x22D734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D734u; }
        if (ctx->pc != 0x22D734u) { return; }
    }
    ctx->pc = 0x22D734u;
label_22d734:
    // 0x22d734: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d738: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x22D738u;
    SET_GPR_U32(ctx, 31, 0x22D740u);
    ctx->pc = 0x22D73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D738u;
            // 0x22d73c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D740u; }
        if (ctx->pc != 0x22D740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D740u; }
        if (ctx->pc != 0x22D740u) { return; }
    }
    ctx->pc = 0x22D740u;
label_22d740:
    // 0x22d740: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d744: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x22D744u;
    SET_GPR_U32(ctx, 31, 0x22D74Cu);
    ctx->pc = 0x22D748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D744u;
            // 0x22d748: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D74Cu; }
        if (ctx->pc != 0x22D74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D74Cu; }
        if (ctx->pc != 0x22D74Cu) { return; }
    }
    ctx->pc = 0x22D74Cu;
label_22d74c:
    // 0x22d74c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d750: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x22D750u;
    SET_GPR_U32(ctx, 31, 0x22D758u);
    ctx->pc = 0x22D754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D750u;
            // 0x22d754: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D758u; }
        if (ctx->pc != 0x22D758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D758u; }
        if (ctx->pc != 0x22D758u) { return; }
    }
    ctx->pc = 0x22D758u;
label_22d758:
    // 0x22d758: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d75c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x22D75Cu;
    SET_GPR_U32(ctx, 31, 0x22D764u);
    ctx->pc = 0x22D760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D75Cu;
            // 0x22d760: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D764u; }
        if (ctx->pc != 0x22D764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D764u; }
        if (ctx->pc != 0x22D764u) { return; }
    }
    ctx->pc = 0x22D764u;
label_22d764:
    // 0x22d764: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x22d764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x22d768: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x22D768u;
    SET_GPR_U32(ctx, 31, 0x22D770u);
    ctx->pc = 0x22D76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D768u;
            // 0x22d76c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D770u; }
        if (ctx->pc != 0x22D770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D770u; }
        if (ctx->pc != 0x22D770u) { return; }
    }
    ctx->pc = 0x22D770u;
label_22d770:
    // 0x22d770: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22d770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d774: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x22D774u;
    {
        const bool branch_taken_0x22d774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D774u;
            // 0x22d778: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d774) {
            ctx->pc = 0x22D810u;
            goto label_22d810;
        }
    }
    ctx->pc = 0x22D77Cu;
label_22d77c:
    // 0x22d77c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x22d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x22d780: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x22d780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22d784: 0x92620025  lbu         $v0, 0x25($s3)
    ctx->pc = 0x22d784u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
    // 0x22d788: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22D788u;
    {
        const bool branch_taken_0x22d788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d788) {
            ctx->pc = 0x22D808u;
            goto label_22d808;
        }
    }
    ctx->pc = 0x22D790u;
    // 0x22d790: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22D790u;
    SET_GPR_U32(ctx, 31, 0x22D798u);
    ctx->pc = 0x22D794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D790u;
            // 0x22d794: 0xc66c000c  lwc1        $f12, 0xC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D798u; }
        if (ctx->pc != 0x22D798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D798u; }
        if (ctx->pc != 0x22D798u) { return; }
    }
    ctx->pc = 0x22D798u;
label_22d798:
    // 0x22d798: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x22d798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x22d79c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22d79cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d7a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d7a4: 0x2407006e  addiu       $a3, $zero, 0x6E
    ctx->pc = 0x22d7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x22d7a8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22D7A8u;
    SET_GPR_U32(ctx, 31, 0x22D7B0u);
    ctx->pc = 0x22D7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D7A8u;
            // 0x22d7ac: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D7B0u; }
        if (ctx->pc != 0x22D7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D7B0u; }
        if (ctx->pc != 0x22D7B0u) { return; }
    }
    ctx->pc = 0x22D7B0u;
label_22d7b0:
    // 0x22d7b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d7b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22d7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d7b8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22D7B8u;
    SET_GPR_U32(ctx, 31, 0x22D7C0u);
    ctx->pc = 0x22D7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D7B8u;
            // 0x22d7bc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D7C0u; }
        if (ctx->pc != 0x22D7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D7C0u; }
        if (ctx->pc != 0x22D7C0u) { return; }
    }
    ctx->pc = 0x22D7C0u;
label_22d7c0:
    // 0x22d7c0: 0xc66c0018  lwc1        $f12, 0x18($s3)
    ctx->pc = 0x22d7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22d7c4: 0xc66d001c  lwc1        $f13, 0x1C($s3)
    ctx->pc = 0x22d7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22d7c8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x22d7c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22d7cc: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x22D7CCu;
    SET_GPR_U32(ctx, 31, 0x22D7D4u);
    ctx->pc = 0x22D7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D7CCu;
            // 0x22d7d0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D7D4u; }
        if (ctx->pc != 0x22D7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D7D4u; }
        if (ctx->pc != 0x22D7D4u) { return; }
    }
    ctx->pc = 0x22D7D4u;
label_22d7d4:
    // 0x22d7d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d7d8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x22d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22d7dc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22D7DCu;
    SET_GPR_U32(ctx, 31, 0x22D7E4u);
    ctx->pc = 0x22D7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D7DCu;
            // 0x22d7e0: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D7E4u; }
        if (ctx->pc != 0x22D7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D7E4u; }
        if (ctx->pc != 0x22D7E4u) { return; }
    }
    ctx->pc = 0x22D7E4u;
label_22d7e4:
    // 0x22d7e4: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x22d7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d7e8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x22d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x22d7ec: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x22d7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d7f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d7f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22d7f8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x22d7f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22d7fc: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x22d7fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x22d800: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x22D800u;
    SET_GPR_U32(ctx, 31, 0x22D808u);
    ctx->pc = 0x22D804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D800u;
            // 0x22d804: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D808u; }
        if (ctx->pc != 0x22D808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D808u; }
        if (ctx->pc != 0x22D808u) { return; }
    }
    ctx->pc = 0x22D808u;
label_22d808:
    // 0x22d808: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x22d808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x22d80c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22d80cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22d810:
    // 0x22d810: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x22d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22d814: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x22d814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22d818: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x22D818u;
    {
        const bool branch_taken_0x22d818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d818) {
            ctx->pc = 0x22D77Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d77c;
        }
    }
    ctx->pc = 0x22D820u;
    // 0x22d820: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x22D820u;
    SET_GPR_U32(ctx, 31, 0x22D828u);
    ctx->pc = 0x22D824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D820u;
            // 0x22d824: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D828u; }
        if (ctx->pc != 0x22D828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D828u; }
        if (ctx->pc != 0x22D828u) { return; }
    }
    ctx->pc = 0x22D828u;
label_22d828:
    // 0x22d828: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22d828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d82c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22d82cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d830: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d83c: 0x3e00008  jr          $ra
    ctx->pc = 0x22D83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D83Cu;
            // 0x22d840: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D844u;
}
