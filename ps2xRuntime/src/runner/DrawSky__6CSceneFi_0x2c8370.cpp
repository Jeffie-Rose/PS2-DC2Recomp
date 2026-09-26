#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSky__6CSceneFi
// Address: 0x2c8370 - 0x2c8514
void DrawSky__6CSceneFi_0x2c8370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSky__6CSceneFi_0x2c8370");
#endif

    switch (ctx->pc) {
        case 0x2c8394u: goto label_2c8394;
        case 0x2c83a8u: goto label_2c83a8;
        case 0x2c83b8u: goto label_2c83b8;
        case 0x2c83ccu: goto label_2c83cc;
        case 0x2c83d8u: goto label_2c83d8;
        case 0x2c83ecu: goto label_2c83ec;
        case 0x2c83f4u: goto label_2c83f4;
        case 0x2c8404u: goto label_2c8404;
        case 0x2c8434u: goto label_2c8434;
        case 0x2c8440u: goto label_2c8440;
        case 0x2c844cu: goto label_2c844c;
        case 0x2c8458u: goto label_2c8458;
        case 0x2c8464u: goto label_2c8464;
        case 0x2c8470u: goto label_2c8470;
        case 0x2c8490u: goto label_2c8490;
        case 0x2c84b8u: goto label_2c84b8;
        case 0x2c84d4u: goto label_2c84d4;
        case 0x2c84dcu: goto label_2c84dc;
        case 0x2c84fcu: goto label_2c84fc;
        default: break;
    }

    ctx->pc = 0x2c8370u;

    // 0x2c8370: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x2c8370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x2c8374: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c8374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c8378: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c8378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c837c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c837cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c8380: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c8380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8384: 0x4a1000a  bgez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C8384u;
    {
        const bool branch_taken_0x2c8384 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2C8388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8384u;
            // 0x2c8388: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8384) {
            ctx->pc = 0x2C83B0u;
            goto label_2c83b0;
        }
    }
    ctx->pc = 0x2C838Cu;
    // 0x2c838c: 0xc0a0f6c  jal         func_283DB0
    ctx->pc = 0x2C838Cu;
    SET_GPR_U32(ctx, 31, 0x2C8394u);
    ctx->pc = 0x2C8390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C838Cu;
            // 0x2c8390: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283DB0u;
    if (runtime->hasFunction(0x283DB0u)) {
        auto targetFn = runtime->lookupFunction(0x283DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8394u; }
        if (ctx->pc != 0x2C8394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSky__6CSceneFi_0x283db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8394u; }
        if (ctx->pc != 0x2C8394u) { return; }
    }
    ctx->pc = 0x2C8394u;
label_2c8394:
    // 0x2c8394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8398: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8398u;
    {
        const bool branch_taken_0x2c8398 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C839Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8398u;
            // 0x2c839c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8398) {
            ctx->pc = 0x2C83BCu;
            goto label_2c83bc;
        }
    }
    ctx->pc = 0x2C83A0u;
    // 0x2c83a0: 0xc0a0f6c  jal         func_283DB0
    ctx->pc = 0x2C83A0u;
    SET_GPR_U32(ctx, 31, 0x2C83A8u);
    ctx->pc = 0x2C83A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C83A0u;
            // 0x2c83a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283DB0u;
    if (runtime->hasFunction(0x283DB0u)) {
        auto targetFn = runtime->lookupFunction(0x283DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83A8u; }
        if (ctx->pc != 0x2C83A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSky__6CSceneFi_0x283db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83A8u; }
        if (ctx->pc != 0x2C83A8u) { return; }
    }
    ctx->pc = 0x2C83A8u;
label_2c83a8:
    // 0x2c83a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C83A8u;
    {
        const bool branch_taken_0x2c83a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C83A8u;
            // 0x2c83ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83a8) {
            ctx->pc = 0x2C83BCu;
            goto label_2c83bc;
        }
    }
    ctx->pc = 0x2C83B0u;
label_2c83b0:
    // 0x2c83b0: 0xc0a0f6c  jal         func_283DB0
    ctx->pc = 0x2C83B0u;
    SET_GPR_U32(ctx, 31, 0x2C83B8u);
    ctx->pc = 0x283DB0u;
    if (runtime->hasFunction(0x283DB0u)) {
        auto targetFn = runtime->lookupFunction(0x283DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83B8u; }
        if (ctx->pc != 0x2C83B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSky__6CSceneFi_0x283db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83B8u; }
        if (ctx->pc != 0x2C83B8u) { return; }
    }
    ctx->pc = 0x2C83B8u;
label_2c83b8:
    // 0x2c83b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c83b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c83bc:
    // 0x2c83bc: 0x1200004f  beqz        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2C83BCu;
    {
        const bool branch_taken_0x2c83bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C83BCu;
            // 0x2c83c0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83bc) {
            ctx->pc = 0x2C84FCu;
            goto label_2c84fc;
        }
    }
    ctx->pc = 0x2C83C4u;
    // 0x2c83c4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2C83C4u;
    SET_GPR_U32(ctx, 31, 0x2C83CCu);
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83CCu; }
        if (ctx->pc != 0x2C83CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83CCu; }
        if (ctx->pc != 0x2C83CCu) { return; }
    }
    ctx->pc = 0x2C83CCu;
label_2c83cc:
    // 0x2c83cc: 0x8e452e54  lw          $a1, 0x2E54($s2)
    ctx->pc = 0x2c83ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11860)));
    // 0x2c83d0: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x2C83D0u;
    SET_GPR_U32(ctx, 31, 0x2C83D8u);
    ctx->pc = 0x2C83D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C83D0u;
            // 0x2c83d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83D8u; }
        if (ctx->pc != 0x2C83D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83D8u; }
        if (ctx->pc != 0x2C83D8u) { return; }
    }
    ctx->pc = 0x2C83D8u;
label_2c83d8:
    // 0x2c83d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c83d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c83dc: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C83DCu;
    {
        const bool branch_taken_0x2c83dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C83DCu;
            // 0x2c83e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83dc) {
            ctx->pc = 0x2C83F8u;
            goto label_2c83f8;
        }
    }
    ctx->pc = 0x2C83E4u;
    // 0x2c83e4: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x2C83E4u;
    SET_GPR_U32(ctx, 31, 0x2C83ECu);
    ctx->pc = 0x2C83E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C83E4u;
            // 0x2c83e8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83ECu; }
        if (ctx->pc != 0x2C83ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83ECu; }
        if (ctx->pc != 0x2C83ECu) { return; }
    }
    ctx->pc = 0x2C83ECu;
label_2c83ec:
    // 0x2c83ec: 0xc04c584  jal         func_131610
    ctx->pc = 0x2C83ECu;
    SET_GPR_U32(ctx, 31, 0x2C83F4u);
    ctx->pc = 0x2C83F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C83ECu;
            // 0x2c83f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131610u;
    if (runtime->hasFunction(0x131610u)) {
        auto targetFn = runtime->lookupFunction(0x131610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83F4u; }
        if (ctx->pc != 0x2C83F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngleH__9mgCCameraFv_0x131610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83F4u; }
        if (ctx->pc != 0x2C83F4u) { return; }
    }
    ctx->pc = 0x2C83F4u;
label_2c83f4:
    // 0x2c83f4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2c83f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2c83f8:
    // 0x2c83f8: 0x8e452e5c  lw          $a1, 0x2E5C($s2)
    ctx->pc = 0x2c83f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11868)));
    // 0x2c83fc: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2C83FCu;
    SET_GPR_U32(ctx, 31, 0x2C8404u);
    ctx->pc = 0x2C8400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C83FCu;
            // 0x2c8400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8404u; }
        if (ctx->pc != 0x2C8404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8404u; }
        if (ctx->pc != 0x2C8404u) { return; }
    }
    ctx->pc = 0x2C8404u;
label_2c8404:
    // 0x2c8404: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c8404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8408: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2C8408u;
    {
        const bool branch_taken_0x2c8408 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8408) {
            ctx->pc = 0x2C84FCu;
            goto label_2c84fc;
        }
    }
    ctx->pc = 0x2C8410u;
    // 0x2c8410: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x2c8410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x2c8414: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C8414u;
    {
        const bool branch_taken_0x2c8414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8414) {
            ctx->pc = 0x2C84FCu;
            goto label_2c84fc;
        }
    }
    ctx->pc = 0x2C841Cu;
    // 0x2c841c: 0xc62000dc  lwc1        $f0, 0xDC($s1)
    ctx->pc = 0x2c841cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8420: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2c8420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2c8424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c8424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8428: 0x240601d0  addiu       $a2, $zero, 0x1D0
    ctx->pc = 0x2c8428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x2c842c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2C842Cu;
    SET_GPR_U32(ctx, 31, 0x2C8434u);
    ctx->pc = 0x2C8430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C842Cu;
            // 0x2c8430: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8434u; }
        if (ctx->pc != 0x2C8434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8434u; }
        if (ctx->pc != 0x2C8434u) { return; }
    }
    ctx->pc = 0x2C8434u;
label_2c8434:
    // 0x2c8434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8438: 0xc058524  jal         func_161490
    ctx->pc = 0x2C8438u;
    SET_GPR_U32(ctx, 31, 0x2C8440u);
    ctx->pc = 0x2C843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8438u;
            // 0x2c843c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161490u;
    if (runtime->hasFunction(0x161490u)) {
        auto targetFn = runtime->lookupFunction(0x161490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8440u; }
        if (ctx->pc != 0x2C8440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightInfo__4CMapFP16CMapLightingInfo_0x161490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8440u; }
        if (ctx->pc != 0x2C8440u) { return; }
    }
    ctx->pc = 0x2C8440u;
label_2c8440:
    // 0x2c8440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8444: 0xc05839c  jal         func_160E70
    ctx->pc = 0x2C8444u;
    SET_GPR_U32(ctx, 31, 0x2C844Cu);
    ctx->pc = 0x2C8448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8444u;
            // 0x2c8448: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160E70u;
    if (runtime->hasFunction(0x160E70u)) {
        auto targetFn = runtime->lookupFunction(0x160E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C844Cu; }
        if (ctx->pc != 0x2C844Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightingRatio__4CMapFPf_0x160e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C844Cu; }
        if (ctx->pc != 0x2C844Cu) { return; }
    }
    ctx->pc = 0x2C844Cu;
label_2c844c:
    // 0x2c844c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c844cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8450: 0xc058404  jal         func_161010
    ctx->pc = 0x2C8450u;
    SET_GPR_U32(ctx, 31, 0x2C8458u);
    ctx->pc = 0x2C8454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8450u;
            // 0x2c8454: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161010u;
    if (runtime->hasFunction(0x161010u)) {
        auto targetFn = runtime->lookupFunction(0x161010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8458u; }
        if (ctx->pc != 0x2C8458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightingSunRatio__4CMapFPf_0x161010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8458u; }
        if (ctx->pc != 0x2C8458u) { return; }
    }
    ctx->pc = 0x2C8458u;
label_2c8458:
    // 0x2c8458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c8458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c845c: 0xc0b2098  jal         func_2C8260
    ctx->pc = 0x2C845Cu;
    SET_GPR_U32(ctx, 31, 0x2C8464u);
    ctx->pc = 0x2C8460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C845Cu;
            // 0x2c8460: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8260u;
    if (runtime->hasFunction(0x2C8260u)) {
        auto targetFn = runtime->lookupFunction(0x2C8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8464u; }
        if (ctx->pc != 0x2C8464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSunPosition__6CSceneFPf_0x2c8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8464u; }
        if (ctx->pc != 0x2C8464u) { return; }
    }
    ctx->pc = 0x2C8464u;
label_2c8464:
    // 0x2c8464: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c8464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8468: 0xc0b20cc  jal         func_2C8330
    ctx->pc = 0x2C8468u;
    SET_GPR_U32(ctx, 31, 0x2C8470u);
    ctx->pc = 0x2C846Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8468u;
            // 0x2c846c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8330u;
    if (runtime->hasFunction(0x2C8330u)) {
        auto targetFn = runtime->lookupFunction(0x2C8330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8470u; }
        if (ctx->pc != 0x2C8470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMoonPosition__6CSceneFPf_0x2c8330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8470u; }
        if (ctx->pc != 0x2C8470u) { return; }
    }
    ctx->pc = 0x2C8470u;
label_2c8470:
    // 0x2c8470: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2c8470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c8474: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2c8474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2c8478: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c8478u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c847c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c847cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8480: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2c8480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
    // 0x2c8484: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c8484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8488: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2C8488u;
    SET_GPR_U32(ctx, 31, 0x2C8490u);
    ctx->pc = 0x2C848Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8488u;
            // 0x2c848c: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8490u; }
        if (ctx->pc != 0x2C8490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8490u; }
        if (ctx->pc != 0x2C8490u) { return; }
    }
    ctx->pc = 0x2C8490u;
label_2c8490:
    // 0x2c8490: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c8490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8494: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2c8494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2c8498: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2c8498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2c849c: 0xafa3028c  sw          $v1, 0x28C($sp)
    ctx->pc = 0x2c849cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 3));
    // 0x2c84a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c84a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c84a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c84a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c84a8: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2c84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
    // 0x2c84ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c84acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c84b0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2C84B0u;
    SET_GPR_U32(ctx, 31, 0x2C84B8u);
    ctx->pc = 0x2C84B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C84B0u;
            // 0x2c84b4: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C84B8u; }
        if (ctx->pc != 0x2C84B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C84B8u; }
        if (ctx->pc != 0x2C84B8u) { return; }
    }
    ctx->pc = 0x2C84B8u;
label_2c84b8:
    // 0x2c84b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c84bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c84bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c84c0: 0xafa2029c  sw          $v0, 0x29C($sp)
    ctx->pc = 0x2c84c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
    // 0x2c84c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c84c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c84c8: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x2c84c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2c84cc: 0xc060c7c  jal         func_1831F0
    ctx->pc = 0x2C84CCu;
    SET_GPR_U32(ctx, 31, 0x2C84D4u);
    ctx->pc = 0x2C84D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C84CCu;
            // 0x2c84d0: 0x27a70290  addiu       $a3, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1831F0u;
    if (runtime->hasFunction(0x1831F0u)) {
        auto targetFn = runtime->lookupFunction(0x1831F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C84D4u; }
        if (ctx->pc != 0x2C84D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSkyBack__7CMapSkyFPfPfPf_0x1831f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C84D4u; }
        if (ctx->pc != 0x2C84D4u) { return; }
    }
    ctx->pc = 0x2C84D4u;
label_2c84d4:
    // 0x2c84d4: 0xc05835c  jal         func_160D70
    ctx->pc = 0x2C84D4u;
    SET_GPR_U32(ctx, 31, 0x2C84DCu);
    ctx->pc = 0x2C84D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C84D4u;
            // 0x2c84d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160D70u;
    if (runtime->hasFunction(0x160D70u)) {
        auto targetFn = runtime->lookupFunction(0x160D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C84DCu; }
        if (ctx->pc != 0x2C84DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTimeBand__4CMapFv_0x160d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C84DCu; }
        if (ctx->pc != 0x2C84DCu) { return; }
    }
    ctx->pc = 0x2C84DCu;
label_2c84dc:
    // 0x2c84dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c84dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c84e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c84e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c84e4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c84e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c84e8: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2c84e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c84ec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2c84ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c84f0: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2c84f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c84f4: 0xc060cbc  jal         func_1832F0
    ctx->pc = 0x2C84F4u;
    SET_GPR_U32(ctx, 31, 0x2C84FCu);
    ctx->pc = 0x2C84F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C84F4u;
            // 0x2c84f8: 0x27aa0090  addiu       $t2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1832F0u;
    if (runtime->hasFunction(0x1832F0u)) {
        auto targetFn = runtime->lookupFunction(0x1832F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C84FCu; }
        if (ctx->pc != 0x2C84FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSky__7CMapSkyFPfPfPfiPfPf_0x1832f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C84FCu; }
        if (ctx->pc != 0x2C84FCu) { return; }
    }
    ctx->pc = 0x2C84FCu;
label_2c84fc:
    // 0x2c84fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c84fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8500: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c8500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c850c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C850Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C850Cu;
            // 0x2c8510: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8514u;
}
