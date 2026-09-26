#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAppearFish__FiPfP10FISH_PLACEi
// Address: 0x3036b0 - 0x303884
void GetAppearFish__FiPfP10FISH_PLACEi_0x3036b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAppearFish__FiPfP10FISH_PLACEi_0x3036b0");
#endif

    switch (ctx->pc) {
        case 0x303704u: goto label_303704;
        case 0x303790u: goto label_303790;
        case 0x3037b8u: goto label_3037b8;
        case 0x3037ccu: goto label_3037cc;
        case 0x3037e8u: goto label_3037e8;
        case 0x303820u: goto label_303820;
        case 0x303860u: goto label_303860;
        default: break;
    }

    ctx->pc = 0x3036b0u;

label_3036b0:
    // 0x3036b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3036b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3036b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3036b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3036b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3036b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3036bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3036bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3036c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3036c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3036c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3036c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3036c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3036c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3036cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3036ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3036d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3036d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3036d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3036d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3036d8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3036d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3036dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3036dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3036e0: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x3036e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3036e4: 0x8f90a0f4  lw          $s0, -0x5F0C($gp)
    ctx->pc = 0x3036e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x3036e8: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x3036E8u;
    {
        const bool branch_taken_0x3036e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3036ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3036E8u;
            // 0x3036ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036e8) {
            ctx->pc = 0x3037B0u;
            goto label_3037b0;
        }
    }
    ctx->pc = 0x3036F0u;
    // 0x3036f0: 0x2a410009  slti        $at, $s2, 0x9
    ctx->pc = 0x3036f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3036f4: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x3036F4u;
    {
        const bool branch_taken_0x3036f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3036F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3036F4u;
            // 0x3036f8: 0x2645fff8  addiu       $a1, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036f4) {
            ctx->pc = 0x303778u;
            goto label_303778;
        }
    }
    ctx->pc = 0x3036FCu;
    // 0x3036fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3036fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303700: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x303700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_303704:
    // 0x303704: 0x2663821  addu        $a3, $s3, $a2
    ctx->pc = 0x303704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x303708: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x303708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x30370c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x30370cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x303710: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x303710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x303714: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x303714u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x303718: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x303718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x30371c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x30371cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x303720: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x303720u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x303724: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x303724u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x303728: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x303728u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x30372c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x30372cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x303730: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x303730u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x303734: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x303734u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x303738: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x303738u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
    // 0x30373c: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x30373cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x303740: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x303740u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x303744: 0xace30030  sw          $v1, 0x30($a3)
    ctx->pc = 0x303744u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 3));
    // 0x303748: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x303748u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x30374c: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x30374cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x303750: 0xace3003c  sw          $v1, 0x3C($a3)
    ctx->pc = 0x303750u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 3));
    // 0x303754: 0xace00044  sw          $zero, 0x44($a3)
    ctx->pc = 0x303754u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 0));
    // 0x303758: 0xace00040  sw          $zero, 0x40($a3)
    ctx->pc = 0x303758u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 0));
    // 0x30375c: 0xace30048  sw          $v1, 0x48($a3)
    ctx->pc = 0x30375cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 3));
    // 0x303760: 0xace00050  sw          $zero, 0x50($a3)
    ctx->pc = 0x303760u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 0));
    // 0x303764: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x303764u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x303768: 0xace30054  sw          $v1, 0x54($a3)
    ctx->pc = 0x303768u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 3));
    // 0x30376c: 0xace0005c  sw          $zero, 0x5C($a3)
    ctx->pc = 0x30376cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 0));
    // 0x303770: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x303770u;
    {
        const bool branch_taken_0x303770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303770u;
            // 0x303774: 0xace00058  sw          $zero, 0x58($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303770) {
            ctx->pc = 0x303704u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303704;
        }
    }
    ctx->pc = 0x303778u;
label_303778:
    // 0x303778: 0x92082a  slt         $at, $a0, $s2
    ctx->pc = 0x303778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x30377c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x30377Cu;
    {
        const bool branch_taken_0x30377c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x303780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30377Cu;
            // 0x303780: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30377c) {
            ctx->pc = 0x3037B0u;
            goto label_3037b0;
        }
    }
    ctx->pc = 0x303784u;
    // 0x303784: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x303784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x303788: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x303788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30378c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30378cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_303790:
    // 0x303790: 0x2653021  addu        $a2, $s3, $a1
    ctx->pc = 0x303790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x303794: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x303794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x303798: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x303798u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x30379c: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x30379cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3037a0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x3037a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x3037a4: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x3037a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3037a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3037A8u;
    {
        const bool branch_taken_0x3037a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3037ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3037A8u;
            // 0x3037ac: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3037a8) {
            ctx->pc = 0x303790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303790;
        }
    }
    ctx->pc = 0x3037B0u;
label_3037b0:
    // 0x3037b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3037B0u;
    {
        const bool branch_taken_0x3037b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3037B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3037B0u;
            // 0x3037b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3037b0) {
            ctx->pc = 0x303800u;
            goto label_303800;
        }
    }
    ctx->pc = 0x3037B8u;
label_3037b8:
    // 0x3037b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3037b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3037bc: 0x16a2000d  bne         $s5, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3037BCu;
    {
        const bool branch_taken_0x3037bc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3037C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3037BCu;
            // 0x3037c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3037bc) {
            ctx->pc = 0x3037F4u;
            goto label_3037f4;
        }
    }
    ctx->pc = 0x3037C4u;
    // 0x3037c4: 0xc0c0ea8  jal         func_303AA0
    ctx->pc = 0x3037C4u;
    SET_GPR_U32(ctx, 31, 0x3037CCu);
    ctx->pc = 0x3037C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3037C4u;
            // 0x3037c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303AA0u;
    if (runtime->hasFunction(0x303AA0u)) {
        auto targetFn = runtime->lookupFunction(0x303AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3037CCu; }
        if (ctx->pc != 0x3037CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFishPlace__14FISH_PLACE_MAPFPf_0x303aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3037CCu; }
        if (ctx->pc != 0x3037CCu) { return; }
    }
    ctx->pc = 0x3037CCu;
label_3037cc:
    // 0x3037cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3037CCu;
    {
        const bool branch_taken_0x3037cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3037cc) {
            ctx->pc = 0x3037F4u;
            goto label_3037f4;
        }
    }
    ctx->pc = 0x3037D4u;
    // 0x3037d4: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x3037d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3037d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3037d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3037dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3037dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3037e0: 0xc0c0e24  jal         func_303890
    ctx->pc = 0x3037E0u;
    SET_GPR_U32(ctx, 31, 0x3037E8u);
    ctx->pc = 0x3037E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3037E0u;
            // 0x3037e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303890u;
    if (runtime->hasFunction(0x303890u)) {
        auto targetFn = runtime->lookupFunction(0x303890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3037E8u; }
        if (ctx->pc != 0x3037E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFishPlace__14FISH_PLACE_MAPFP10FISH_PLACEii_0x303890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3037E8u; }
        if (ctx->pc != 0x3037E8u) { return; }
    }
    ctx->pc = 0x3037E8u;
label_3037e8:
    // 0x3037e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3037e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3037ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3037ECu;
    {
        const bool branch_taken_0x3037ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3037ec) {
            ctx->pc = 0x303810u;
            goto label_303810;
        }
    }
    ctx->pc = 0x3037F4u;
label_3037f4:
    // 0x3037f4: 0x0  nop
    ctx->pc = 0x3037f4u;
    // NOP
    // 0x3037f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3037f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3037fc: 0x26100088  addiu       $s0, $s0, 0x88
    ctx->pc = 0x3037fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
label_303800:
    // 0x303800: 0x8f82a0f0  lw          $v0, -0x5F10($gp)
    ctx->pc = 0x303800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942960)));
    // 0x303804: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x303804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x303808: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x303808u;
    {
        const bool branch_taken_0x303808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303808) {
            ctx->pc = 0x3037B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3037b8;
        }
    }
    ctx->pc = 0x303810u;
label_303810:
    // 0x303810: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x303810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x303814: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x303814u;
    {
        const bool branch_taken_0x303814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x303818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303814u;
            // 0x303818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303814) {
            ctx->pc = 0x303840u;
            goto label_303840;
        }
    }
    ctx->pc = 0x30381Cu;
    // 0x30381c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30381cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303820:
    // 0x303820: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x303820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x303824: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x303824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303828: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x303828u;
    {
        const bool branch_taken_0x303828 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x303828) {
            ctx->pc = 0x303840u;
            goto label_303840;
        }
    }
    ctx->pc = 0x303830u;
    // 0x303830: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x303834: 0x52182a  slt         $v1, $v0, $s2
    ctx->pc = 0x303834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x303838: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x303838u;
    {
        const bool branch_taken_0x303838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30383Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303838u;
            // 0x30383c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303838) {
            ctx->pc = 0x303820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303820;
        }
    }
    ctx->pc = 0x303840u;
label_303840:
    // 0x303840: 0x6a00007  bltz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x303840u;
    {
        const bool branch_taken_0x303840 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x303840) {
            ctx->pc = 0x303860u;
            goto label_303860;
        }
    }
    ctx->pc = 0x303848u;
    // 0x303848: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303848u;
    {
        const bool branch_taken_0x303848 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x30384Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303848u;
            // 0x30384c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303848) {
            ctx->pc = 0x303860u;
            goto label_303860;
        }
    }
    ctx->pc = 0x303850u;
    // 0x303850: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x303850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303854: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x303854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303858: 0xc0c0dac  jal         func_3036B0
    ctx->pc = 0x303858u;
    SET_GPR_U32(ctx, 31, 0x303860u);
    ctx->pc = 0x30385Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303858u;
            // 0x30385c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3036B0u;
    goto label_3036b0;
    ctx->pc = 0x303860u;
label_303860:
    // 0x303860: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x303860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x303864: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x303864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x303868: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x303868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30386c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30386cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x303870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x303870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30387c: 0x3e00008  jr          $ra
    ctx->pc = 0x30387Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30387Cu;
            // 0x303880: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303884u;
}
