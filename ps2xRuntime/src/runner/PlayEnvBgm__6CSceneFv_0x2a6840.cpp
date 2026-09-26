#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlayEnvBgm__6CSceneFv
// Address: 0x2a6840 - 0x2a68f0
void PlayEnvBgm__6CSceneFv_0x2a6840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlayEnvBgm__6CSceneFv_0x2a6840");
#endif

    switch (ctx->pc) {
        case 0x2a6864u: goto label_2a6864;
        case 0x2a688cu: goto label_2a688c;
        case 0x2a689cu: goto label_2a689c;
        case 0x2a68dcu: goto label_2a68dc;
        default: break;
    }

    ctx->pc = 0x2a6840u;

    // 0x2a6840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a6840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a6844: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a6844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6848: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a6848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a684c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a684cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a6850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a6850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a6854: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6858: 0x8c259068  lw          $a1, -0x6F98($at)
    ctx->pc = 0x2a6858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938728)));
    // 0x2a685c: 0xc0a9b0c  jal         func_2A6C30
    ctx->pc = 0x2A685Cu;
    SET_GPR_U32(ctx, 31, 0x2A6864u);
    ctx->pc = 0x2A6860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A685Cu;
            // 0x2a6860: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6C30u;
    if (runtime->hasFunction(0x2A6C30u)) {
        auto targetFn = runtime->lookupFunction(0x2A6C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6864u; }
        if (ctx->pc != 0x2A6864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSndDataID__6CSceneFi_0x2a6c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6864u; }
        if (ctx->pc != 0x2A6864u) { return; }
    }
    ctx->pc = 0x2A6864u;
label_2a6864:
    // 0x2a6864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a6864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6868: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A6868u;
    {
        const bool branch_taken_0x2a6868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6868) {
            ctx->pc = 0x2A68DCu;
            goto label_2a68dc;
        }
    }
    ctx->pc = 0x2A6870u;
    // 0x2a6870: 0x8605000a  lh          $a1, 0xA($s0)
    ctx->pc = 0x2a6870u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2a6874: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6874u;
    {
        const bool branch_taken_0x2a6874 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2A6878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6874u;
            // 0x2a6878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6874) {
            ctx->pc = 0x2A6894u;
            goto label_2a6894;
        }
    }
    ctx->pc = 0x2A687Cu;
    // 0x2a687c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6880: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a6880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a6884: 0xc0a99a4  jal         func_2A6690
    ctx->pc = 0x2A6884u;
    SET_GPR_U32(ctx, 31, 0x2A688Cu);
    ctx->pc = 0x2A6888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6884u;
            // 0x2a6888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6690u;
    if (runtime->hasFunction(0x2A6690u)) {
        auto targetFn = runtime->lookupFunction(0x2A6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A688Cu; }
        if (ctx->pc != 0x2A688Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayEnvBGM__6CSceneFif_0x2a6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A688Cu; }
        if (ctx->pc != 0x2A688Cu) { return; }
    }
    ctx->pc = 0x2A688Cu;
label_2a688c:
    // 0x2a688c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2A688Cu;
    {
        const bool branch_taken_0x2a688c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A688Cu;
            // 0x2a6890: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a688c) {
            ctx->pc = 0x2A68E0u;
            goto label_2a68e0;
        }
    }
    ctx->pc = 0x2A6894u;
label_2a6894:
    // 0x2a6894: 0xc0a9a08  jal         func_2A6820
    ctx->pc = 0x2A6894u;
    SET_GPR_U32(ctx, 31, 0x2A689Cu);
    ctx->pc = 0x2A6898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6894u;
            // 0x2a6898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6820u;
    if (runtime->hasFunction(0x2A6820u)) {
        auto targetFn = runtime->lookupFunction(0x2A6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A689Cu; }
        if (ctx->pc != 0x2A689Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoChangeEnvBGM__6CSceneFi_0x2a6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A689Cu; }
        if (ctx->pc != 0x2A689Cu) { return; }
    }
    ctx->pc = 0x2A689Cu;
label_2a689c:
    // 0x2a689c: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x2a689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x2a68a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a68a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a68a4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2a68a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2a68a8: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x2a68a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x2a68ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a68acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a68b0: 0xac23a488  sw          $v1, -0x5B78($at)
    ctx->pc = 0x2a68b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943880), GPR_U32(ctx, 3));
    // 0x2a68b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a68b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a68b8: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x2a68b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a68bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a68bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a68c0: 0x0  nop
    ctx->pc = 0x2a68c0u;
    // NOP
    // 0x2a68c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a68c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a68c8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2a68c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2a68cc: 0x0  nop
    ctx->pc = 0x2a68ccu;
    // NOP
    // 0x2a68d0: 0x0  nop
    ctx->pc = 0x2a68d0u;
    // NOP
    // 0x2a68d4: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x2A68D4u;
    SET_GPR_U32(ctx, 31, 0x2A68DCu);
    ctx->pc = 0x2A6720u;
    if (runtime->hasFunction(0x2A6720u)) {
        auto targetFn = runtime->lookupFunction(0x2A6720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A68DCu; }
        if (ctx->pc != 0x2A68DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEnvBGMVol__6CSceneFf_0x2a6720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A68DCu; }
        if (ctx->pc != 0x2A68DCu) { return; }
    }
    ctx->pc = 0x2A68DCu;
label_2a68dc:
    // 0x2a68dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a68dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a68e0:
    // 0x2a68e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a68e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a68e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a68e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a68e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A68E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A68ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A68E8u;
            // 0x2a68ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A68F0u;
}
