#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEditSystem__FiP6CScenePfi
// Address: 0x2dd3f0 - 0x2dd810
void DrawEditSystem__FiP6CScenePfi_0x2dd3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEditSystem__FiP6CScenePfi_0x2dd3f0");
#endif

    switch (ctx->pc) {
        case 0x2dd448u: goto label_2dd448;
        case 0x2dd450u: goto label_2dd450;
        case 0x2dd460u: goto label_2dd460;
        case 0x2dd46cu: goto label_2dd46c;
        case 0x2dd478u: goto label_2dd478;
        case 0x2dd484u: goto label_2dd484;
        case 0x2dd490u: goto label_2dd490;
        case 0x2dd4b4u: goto label_2dd4b4;
        case 0x2dd4c4u: goto label_2dd4c4;
        case 0x2dd4d0u: goto label_2dd4d0;
        case 0x2dd4e8u: goto label_2dd4e8;
        case 0x2dd4f8u: goto label_2dd4f8;
        case 0x2dd50cu: goto label_2dd50c;
        case 0x2dd51cu: goto label_2dd51c;
        case 0x2dd530u: goto label_2dd530;
        case 0x2dd538u: goto label_2dd538;
        case 0x2dd548u: goto label_2dd548;
        case 0x2dd55cu: goto label_2dd55c;
        case 0x2dd568u: goto label_2dd568;
        case 0x2dd580u: goto label_2dd580;
        case 0x2dd590u: goto label_2dd590;
        case 0x2dd5a4u: goto label_2dd5a4;
        case 0x2dd5b4u: goto label_2dd5b4;
        case 0x2dd5c8u: goto label_2dd5c8;
        case 0x2dd5d0u: goto label_2dd5d0;
        case 0x2dd5dcu: goto label_2dd5dc;
        case 0x2dd5f4u: goto label_2dd5f4;
        case 0x2dd608u: goto label_2dd608;
        case 0x2dd614u: goto label_2dd614;
        case 0x2dd64cu: goto label_2dd64c;
        case 0x2dd65cu: goto label_2dd65c;
        case 0x2dd684u: goto label_2dd684;
        case 0x2dd6a0u: goto label_2dd6a0;
        case 0x2dd6b8u: goto label_2dd6b8;
        case 0x2dd6ccu: goto label_2dd6cc;
        case 0x2dd714u: goto label_2dd714;
        case 0x2dd720u: goto label_2dd720;
        case 0x2dd734u: goto label_2dd734;
        case 0x2dd748u: goto label_2dd748;
        case 0x2dd758u: goto label_2dd758;
        case 0x2dd770u: goto label_2dd770;
        case 0x2dd780u: goto label_2dd780;
        case 0x2dd794u: goto label_2dd794;
        case 0x2dd7a4u: goto label_2dd7a4;
        case 0x2dd7b8u: goto label_2dd7b8;
        case 0x2dd7dcu: goto label_2dd7dc;
        default: break;
    }

    ctx->pc = 0x2dd3f0u;

    // 0x2dd3f0: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x2dd3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x2dd3f4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2dd3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2dd3f8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2dd3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2dd3fc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2dd3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2dd400: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2dd400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2dd404: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2dd404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2dd408: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2dd408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2dd40c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2dd40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2dd410: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2dd410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2dd414: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2dd414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2dd418: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2dd418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd41c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dd41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dd420: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2dd420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd424: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2dd424u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2dd428: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2dd428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2dd42c: 0x8f839e68  lw          $v1, -0x6198($gp)
    ctx->pc = 0x2dd42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942312)));
    // 0x2dd430: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2dd430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd434: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2dd434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd438: 0x106000e8  beqz        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2DD438u;
    {
        const bool branch_taken_0x2dd438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD438u;
            // 0x2dd43c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd438) {
            ctx->pc = 0x2DD7DCu;
            goto label_2dd7dc;
        }
    }
    ctx->pc = 0x2DD440u;
    // 0x2dd440: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2DD440u;
    SET_GPR_U32(ctx, 31, 0x2DD448u);
    ctx->pc = 0x2DD444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD440u;
            // 0x2dd444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD448u; }
        if (ctx->pc != 0x2DD448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD448u; }
        if (ctx->pc != 0x2DD448u) { return; }
    }
    ctx->pc = 0x2DD448u;
label_2dd448:
    // 0x2dd448: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2DD448u;
    SET_GPR_U32(ctx, 31, 0x2DD450u);
    ctx->pc = 0x2DD44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD448u;
            // 0x2dd44c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD450u; }
        if (ctx->pc != 0x2DD450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD450u; }
        if (ctx->pc != 0x2DD450u) { return; }
    }
    ctx->pc = 0x2DD450u;
label_2dd450:
    // 0x2dd450: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd458: 0xc04d104  jal         func_134410
    ctx->pc = 0x2DD458u;
    SET_GPR_U32(ctx, 31, 0x2DD460u);
    ctx->pc = 0x2DD45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD458u;
            // 0x2dd45c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD460u; }
        if (ctx->pc != 0x2DD460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD460u; }
        if (ctx->pc != 0x2DD460u) { return; }
    }
    ctx->pc = 0x2DD460u;
label_2dd460:
    // 0x2dd460: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd464: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x2DD464u;
    SET_GPR_U32(ctx, 31, 0x2DD46Cu);
    ctx->pc = 0x2DD468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD464u;
            // 0x2dd468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD46Cu; }
        if (ctx->pc != 0x2DD46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD46Cu; }
        if (ctx->pc != 0x2DD46Cu) { return; }
    }
    ctx->pc = 0x2DD46Cu;
label_2dd46c:
    // 0x2dd46c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd470: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x2DD470u;
    SET_GPR_U32(ctx, 31, 0x2DD478u);
    ctx->pc = 0x2DD474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD470u;
            // 0x2dd474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD478u; }
        if (ctx->pc != 0x2DD478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD478u; }
        if (ctx->pc != 0x2DD478u) { return; }
    }
    ctx->pc = 0x2DD478u;
label_2dd478:
    // 0x2dd478: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd47c: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x2DD47Cu;
    SET_GPR_U32(ctx, 31, 0x2DD484u);
    ctx->pc = 0x2DD480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD47Cu;
            // 0x2dd480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD484u; }
        if (ctx->pc != 0x2DD484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD484u; }
        if (ctx->pc != 0x2DD484u) { return; }
    }
    ctx->pc = 0x2DD484u;
label_2dd484:
    // 0x2dd484: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd488: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2DD488u;
    SET_GPR_U32(ctx, 31, 0x2DD490u);
    ctx->pc = 0x2DD48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD488u;
            // 0x2dd48c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD490u; }
        if (ctx->pc != 0x2DD490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD490u; }
        if (ctx->pc != 0x2DD490u) { return; }
    }
    ctx->pc = 0x2DD490u;
label_2dd490:
    // 0x2dd490: 0x8f829e8c  lw          $v0, -0x6174($gp)
    ctx->pc = 0x2dd490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942348)));
    // 0x2dd494: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD494u;
    {
        const bool branch_taken_0x2dd494 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2DD498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD494u;
            // 0x2dd498: 0x24130168  addiu       $s3, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd494) {
            ctx->pc = 0x2DD4A0u;
            goto label_2dd4a0;
        }
    }
    ctx->pc = 0x2DD49Cu;
    // 0x2dd49c: 0x2673ffec  addiu       $s3, $s3, -0x14
    ctx->pc = 0x2dd49cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967276));
label_2dd4a0:
    // 0x2dd4a0: 0x16000027  bnez        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DD4A0u;
    {
        const bool branch_taken_0x2dd4a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD4A0u;
            // 0x2dd4a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd4a0) {
            ctx->pc = 0x2DD540u;
            goto label_2dd540;
        }
    }
    ctx->pc = 0x2DD4A8u;
    // 0x2dd4a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd4ac: 0xc0b7668  jal         func_2DD9A0
    ctx->pc = 0x2DD4ACu;
    SET_GPR_U32(ctx, 31, 0x2DD4B4u);
    ctx->pc = 0x2DD4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD4ACu;
            // 0x2dd4b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD9A0u;
    if (runtime->hasFunction(0x2DD9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DD9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4B4u; }
        if (ctx->pc != 0x2DD4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckWalkToEdit__FP6CScenePf_0x2dd9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4B4u; }
        if (ctx->pc != 0x2DD4B4u) { return; }
    }
    ctx->pc = 0x2DD4B4u;
label_2dd4b4:
    // 0x2dd4b4: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x2DD4B4u;
    {
        const bool branch_taken_0x2dd4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD4B4u;
            // 0x2dd4b8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd4b4) {
            ctx->pc = 0x2DD7DCu;
            goto label_2dd7dc;
        }
    }
    ctx->pc = 0x2DD4BCu;
    // 0x2dd4bc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2DD4BCu;
    SET_GPR_U32(ctx, 31, 0x2DD4C4u);
    ctx->pc = 0x2DD4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD4BCu;
            // 0x2dd4c0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4C4u; }
        if (ctx->pc != 0x2DD4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4C4u; }
        if (ctx->pc != 0x2DD4C4u) { return; }
    }
    ctx->pc = 0x2DD4C4u;
label_2dd4c4:
    // 0x2dd4c4: 0x8f859e68  lw          $a1, -0x6198($gp)
    ctx->pc = 0x2dd4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942312)));
    // 0x2dd4c8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2DD4C8u;
    SET_GPR_U32(ctx, 31, 0x2DD4D0u);
    ctx->pc = 0x2DD4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD4C8u;
            // 0x2dd4cc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4D0u; }
        if (ctx->pc != 0x2DD4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4D0u; }
        if (ctx->pc != 0x2DD4D0u) { return; }
    }
    ctx->pc = 0x2DD4D0u;
label_2dd4d0:
    // 0x2dd4d0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2dd4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2dd4d4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd4d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2dd4d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd4dc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2dd4dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd4e0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2DD4E0u;
    SET_GPR_U32(ctx, 31, 0x2DD4E8u);
    ctx->pc = 0x2DD4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD4E0u;
            // 0x2dd4e4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4E8u; }
        if (ctx->pc != 0x2DD4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4E8u; }
        if (ctx->pc != 0x2DD4E8u) { return; }
    }
    ctx->pc = 0x2DD4E8u;
label_2dd4e8:
    // 0x2dd4e8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd4ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd4f0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2DD4F0u;
    SET_GPR_U32(ctx, 31, 0x2DD4F8u);
    ctx->pc = 0x2DD4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD4F0u;
            // 0x2dd4f4: 0x2406005a  addiu       $a2, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4F8u; }
        if (ctx->pc != 0x2DD4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4F8u; }
        if (ctx->pc != 0x2DD4F8u) { return; }
    }
    ctx->pc = 0x2DD4F8u;
label_2dd4f8:
    // 0x2dd4f8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd4fc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2dd4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2dd500: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2dd500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd504: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2DD504u;
    SET_GPR_U32(ctx, 31, 0x2DD50Cu);
    ctx->pc = 0x2DD508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD504u;
            // 0x2dd508: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD50Cu; }
        if (ctx->pc != 0x2DD50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD50Cu; }
        if (ctx->pc != 0x2DD50Cu) { return; }
    }
    ctx->pc = 0x2DD50Cu;
label_2dd50c:
    // 0x2dd50c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd510: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2dd510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2dd514: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2DD514u;
    SET_GPR_U32(ctx, 31, 0x2DD51Cu);
    ctx->pc = 0x2DD518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD514u;
            // 0x2dd518: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD51Cu; }
        if (ctx->pc != 0x2DD51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD51Cu; }
        if (ctx->pc != 0x2DD51Cu) { return; }
    }
    ctx->pc = 0x2DD51Cu;
label_2dd51c:
    // 0x2dd51c: 0x26660026  addiu       $a2, $s3, 0x26
    ctx->pc = 0x2dd51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 38));
    // 0x2dd520: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd524: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2dd524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2dd528: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2DD528u;
    SET_GPR_U32(ctx, 31, 0x2DD530u);
    ctx->pc = 0x2DD52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD528u;
            // 0x2dd52c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD530u; }
        if (ctx->pc != 0x2DD530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD530u; }
        if (ctx->pc != 0x2DD530u) { return; }
    }
    ctx->pc = 0x2DD530u;
label_2dd530:
    // 0x2dd530: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2DD530u;
    SET_GPR_U32(ctx, 31, 0x2DD538u);
    ctx->pc = 0x2DD534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD530u;
            // 0x2dd534: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD538u; }
        if (ctx->pc != 0x2DD538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD538u; }
        if (ctx->pc != 0x2DD538u) { return; }
    }
    ctx->pc = 0x2DD538u;
label_2dd538:
    // 0x2dd538: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2DD538u;
    {
        const bool branch_taken_0x2dd538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD538u;
            // 0x2dd53c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd538) {
            ctx->pc = 0x2DD7E0u;
            goto label_2dd7e0;
        }
    }
    ctx->pc = 0x2DD540u;
label_2dd540:
    // 0x2dd540: 0xc0b76dc  jal         func_2DDB70
    ctx->pc = 0x2DD540u;
    SET_GPR_U32(ctx, 31, 0x2DD548u);
    ctx->pc = 0x2DD544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD540u;
            // 0x2dd544: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DDB70u;
    if (runtime->hasFunction(0x2DDB70u)) {
        auto targetFn = runtime->lookupFunction(0x2DDB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD548u; }
        if (ctx->pc != 0x2DD548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEditToWalk__FP6CScenePf_0x2ddb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD548u; }
        if (ctx->pc != 0x2DD548u) { return; }
    }
    ctx->pc = 0x2DD548u;
label_2dd548:
    // 0x2dd548: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2DD548u;
    {
        const bool branch_taken_0x2dd548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD548u;
            // 0x2dd54c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd548) {
            ctx->pc = 0x2DD5D4u;
            goto label_2dd5d4;
        }
    }
    ctx->pc = 0x2DD550u;
    // 0x2dd550: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd554: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2DD554u;
    SET_GPR_U32(ctx, 31, 0x2DD55Cu);
    ctx->pc = 0x2DD558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD554u;
            // 0x2dd558: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD55Cu; }
        if (ctx->pc != 0x2DD55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD55Cu; }
        if (ctx->pc != 0x2DD55Cu) { return; }
    }
    ctx->pc = 0x2DD55Cu;
label_2dd55c:
    // 0x2dd55c: 0x8f859e68  lw          $a1, -0x6198($gp)
    ctx->pc = 0x2dd55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942312)));
    // 0x2dd560: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2DD560u;
    SET_GPR_U32(ctx, 31, 0x2DD568u);
    ctx->pc = 0x2DD564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD560u;
            // 0x2dd564: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD568u; }
        if (ctx->pc != 0x2DD568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD568u; }
        if (ctx->pc != 0x2DD568u) { return; }
    }
    ctx->pc = 0x2DD568u;
label_2dd568:
    // 0x2dd568: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2dd568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2dd56c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd570: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2dd570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd574: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2dd574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd578: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2DD578u;
    SET_GPR_U32(ctx, 31, 0x2DD580u);
    ctx->pc = 0x2DD57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD578u;
            // 0x2dd57c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD580u; }
        if (ctx->pc != 0x2DD580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD580u; }
        if (ctx->pc != 0x2DD580u) { return; }
    }
    ctx->pc = 0x2DD580u;
label_2dd580:
    // 0x2dd580: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd584: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2dd584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2dd588: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2DD588u;
    SET_GPR_U32(ctx, 31, 0x2DD590u);
    ctx->pc = 0x2DD58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD588u;
            // 0x2dd58c: 0x2406005a  addiu       $a2, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD590u; }
        if (ctx->pc != 0x2DD590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD590u; }
        if (ctx->pc != 0x2DD590u) { return; }
    }
    ctx->pc = 0x2DD590u;
label_2dd590:
    // 0x2dd590: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd594: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2dd594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2dd598: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2dd598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd59c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2DD59Cu;
    SET_GPR_U32(ctx, 31, 0x2DD5A4u);
    ctx->pc = 0x2DD5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD59Cu;
            // 0x2dd5a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5A4u; }
        if (ctx->pc != 0x2DD5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5A4u; }
        if (ctx->pc != 0x2DD5A4u) { return; }
    }
    ctx->pc = 0x2DD5A4u;
label_2dd5a4:
    // 0x2dd5a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd5a8: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2dd5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2dd5ac: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2DD5ACu;
    SET_GPR_U32(ctx, 31, 0x2DD5B4u);
    ctx->pc = 0x2DD5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD5ACu;
            // 0x2dd5b0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5B4u; }
        if (ctx->pc != 0x2DD5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5B4u; }
        if (ctx->pc != 0x2DD5B4u) { return; }
    }
    ctx->pc = 0x2DD5B4u;
label_2dd5b4:
    // 0x2dd5b4: 0x26660026  addiu       $a2, $s3, 0x26
    ctx->pc = 0x2dd5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 38));
    // 0x2dd5b8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd5bc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2dd5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2dd5c0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2DD5C0u;
    SET_GPR_U32(ctx, 31, 0x2DD5C8u);
    ctx->pc = 0x2DD5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD5C0u;
            // 0x2dd5c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5C8u; }
        if (ctx->pc != 0x2DD5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5C8u; }
        if (ctx->pc != 0x2DD5C8u) { return; }
    }
    ctx->pc = 0x2DD5C8u;
label_2dd5c8:
    // 0x2dd5c8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2DD5C8u;
    SET_GPR_U32(ctx, 31, 0x2DD5D0u);
    ctx->pc = 0x2DD5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD5C8u;
            // 0x2dd5cc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5D0u; }
        if (ctx->pc != 0x2DD5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5D0u; }
        if (ctx->pc != 0x2DD5D0u) { return; }
    }
    ctx->pc = 0x2DD5D0u;
label_2dd5d0:
    // 0x2dd5d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dd5d4:
    // 0x2dd5d4: 0xc0a0f80  jal         func_283E00
    ctx->pc = 0x2DD5D4u;
    SET_GPR_U32(ctx, 31, 0x2DD5DCu);
    ctx->pc = 0x283E00u;
    if (runtime->hasFunction(0x283E00u)) {
        auto targetFn = runtime->lookupFunction(0x283E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5DCu; }
        if (ctx->pc != 0x2DD5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__6CSceneFv_0x283e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5DCu; }
        if (ctx->pc != 0x2DD5DCu) { return; }
    }
    ctx->pc = 0x2DD5DCu;
label_2dd5dc:
    // 0x2dd5dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd5e0: 0x1443007e  bne         $v0, $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x2DD5E0u;
    {
        const bool branch_taken_0x2dd5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dd5e0) {
            ctx->pc = 0x2DD7DCu;
            goto label_2dd7dc;
        }
    }
    ctx->pc = 0x2DD5E8u;
    // 0x2dd5e8: 0x8e452e5c  lw          $a1, 0x2E5C($s2)
    ctx->pc = 0x2dd5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11868)));
    // 0x2dd5ec: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2DD5ECu;
    SET_GPR_U32(ctx, 31, 0x2DD5F4u);
    ctx->pc = 0x2DD5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD5ECu;
            // 0x2dd5f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5F4u; }
        if (ctx->pc != 0x2DD5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5F4u; }
        if (ctx->pc != 0x2DD5F4u) { return; }
    }
    ctx->pc = 0x2DD5F4u;
label_2dd5f4:
    // 0x2dd5f4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2dd5f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5f8: 0x13c00078  beqz        $fp, . + 4 + (0x78 << 2)
    ctx->pc = 0x2DD5F8u;
    {
        const bool branch_taken_0x2dd5f8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD5F8u;
            // 0x2dd5fc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd5f8) {
            ctx->pc = 0x2DD7DCu;
            goto label_2dd7dc;
        }
    }
    ctx->pc = 0x2DD600u;
    // 0x2dd600: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2DD600u;
    SET_GPR_U32(ctx, 31, 0x2DD608u);
    ctx->pc = 0x2DD604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD600u;
            // 0x2dd604: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD608u; }
        if (ctx->pc != 0x2DD608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD608u; }
        if (ctx->pc != 0x2DD608u) { return; }
    }
    ctx->pc = 0x2DD608u;
label_2dd608:
    // 0x2dd608: 0x8f859e68  lw          $a1, -0x6198($gp)
    ctx->pc = 0x2dd608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942312)));
    // 0x2dd60c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2DD60Cu;
    SET_GPR_U32(ctx, 31, 0x2DD614u);
    ctx->pc = 0x2DD610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD60Cu;
            // 0x2dd610: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD614u; }
        if (ctx->pc != 0x2DD614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD614u; }
        if (ctx->pc != 0x2DD614u) { return; }
    }
    ctx->pc = 0x2DD614u;
label_2dd614:
    // 0x2dd614: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2dd614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2dd618: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x2dd618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2dd61c: 0x24427160  addiu       $v0, $v0, 0x7160
    ctx->pc = 0x2dd61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29024));
    // 0x2dd620: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2dd620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd624: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x2dd624u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd628: 0x2410012c  addiu       $s0, $zero, 0x12C
    ctx->pc = 0x2dd628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2dd62c: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x2dd62cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2dd630: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x2dd630u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2dd634: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x2dd634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2dd638: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x2dd638u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x2dd63c: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x2dd63cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x2dd640: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x2dd640u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x2dd644: 0xc0bbd20  jal         func_2EF480
    ctx->pc = 0x2DD644u;
    SET_GPR_U32(ctx, 31, 0x2DD64Cu);
    ctx->pc = 0x2DD648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD644u;
            // 0x2dd648: 0x7ce20030  sq          $v0, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF480u;
    if (runtime->hasFunction(0x2EF480u)) {
        auto targetFn = runtime->lookupFunction(0x2EF480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD64Cu; }
        if (ctx->pc != 0x2DD64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BalanceCheck__8CEditMapFv_0x2ef480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD64Cu; }
        if (ctx->pc != 0x2DD64Cu) { return; }
    }
    ctx->pc = 0x2DD64Cu;
label_2dd64c:
    // 0x2dd64c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2dd64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2dd650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd654: 0xc0b74a4  jal         func_2DD290
    ctx->pc = 0x2DD654u;
    SET_GPR_U32(ctx, 31, 0x2DD65Cu);
    ctx->pc = 0x2DD658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD654u;
            // 0x2dd658: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD290u;
    if (runtime->hasFunction(0x2DD290u)) {
        auto targetFn = runtime->lookupFunction(0x2DD290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD65Cu; }
        if (ctx->pc != 0x2DD65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBalanceHeight__FP6CScenePf_0x2dd290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD65Cu; }
        if (ctx->pc != 0x2DD65Cu) { return; }
    }
    ctx->pc = 0x2DD65Cu;
label_2dd65c:
    // 0x2dd65c: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2dd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x2dd660: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x2dd660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2dd664: 0x246388f0  addiu       $v1, $v1, -0x7710
    ctx->pc = 0x2dd664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936816));
    // 0x2dd668: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2dd668u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd66c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2dd66cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dd670: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2dd670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd674: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2dd674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd678: 0x241412c0  addiu       $s4, $zero, 0x12C0
    ctx->pc = 0x2dd678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4800));
    // 0x2dd67c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2dd67cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd680: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2dd680u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2dd684:
    // 0x2dd684: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2dd684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2dd688: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd68c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2dd68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2dd690: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2dd690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2dd694: 0x245201e0  addiu       $s2, $v0, 0x1E0
    ctx->pc = 0x2dd694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x2dd698: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x2DD698u;
    SET_GPR_U32(ctx, 31, 0x2DD6A0u);
    ctx->pc = 0x2DD69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD698u;
            // 0x2dd69c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD6A0u; }
        if (ctx->pc != 0x2DD6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD6A0u; }
        if (ctx->pc != 0x2DD6A0u) { return; }
    }
    ctx->pc = 0x2DD6A0u;
label_2dd6a0:
    // 0x2dd6a0: 0x16e0000b  bnez        $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x2DD6A0u;
    {
        const bool branch_taken_0x2dd6a0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd6a0) {
            ctx->pc = 0x2DD6D0u;
            goto label_2dd6d0;
        }
    }
    ctx->pc = 0x2DD6A8u;
    // 0x2dd6a8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2dd6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6b0: 0xc0b745c  jal         func_2DD170
    ctx->pc = 0x2DD6B0u;
    SET_GPR_U32(ctx, 31, 0x2DD6B8u);
    ctx->pc = 0x2DD6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD6B0u;
            // 0x2dd6b4: 0x27a60230  addiu       $a2, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD170u;
    if (runtime->hasFunction(0x2DD170u)) {
        auto targetFn = runtime->lookupFunction(0x2DD170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD6B8u; }
        if (ctx->pc != 0x2DD6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFocusBalanceParts__FP8CEditMapiPf_0x2dd170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD6B8u; }
        if (ctx->pc != 0x2DD6B8u) { return; }
    }
    ctx->pc = 0x2DD6B8u;
label_2dd6b8:
    // 0x2dd6b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DD6B8u;
    {
        const bool branch_taken_0x2dd6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd6b8) {
            ctx->pc = 0x2DD6D0u;
            goto label_2dd6d0;
        }
    }
    ctx->pc = 0x2DD6C0u;
    // 0x2dd6c0: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2dd6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2dd6c4: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x2DD6C4u;
    SET_GPR_U32(ctx, 31, 0x2DD6CCu);
    ctx->pc = 0x2DD6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD6C4u;
            // 0x2dd6c8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD6CCu; }
        if (ctx->pc != 0x2DD6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD6CCu; }
        if (ctx->pc != 0x2DD6CCu) { return; }
    }
    ctx->pc = 0x2DD6CCu;
label_2dd6cc:
    // 0x2dd6cc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2dd6ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd6d0:
    // 0x2dd6d0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2dd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x2dd6d4: 0x24428cf0  addiu       $v0, $v0, -0x7310
    ctx->pc = 0x2dd6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937840));
    // 0x2dd6d8: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x2dd6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2dd6dc: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2dd6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2dd6e0: 0xc4420220  lwc1        $f2, 0x220($v0)
    ctx->pc = 0x2dd6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd6e4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2dd6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dd6e8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2dd6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2dd6ec: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2dd6ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2dd6f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dd6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd6f4: 0x0  nop
    ctx->pc = 0x2dd6f4u;
    // NOP
    // 0x2dd6f8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2dd6f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2dd6fc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2dd6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2dd700: 0x46011d00  add.s       $f20, $f3, $f1
    ctx->pc = 0x2dd700u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2dd704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dd704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd708: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x2dd708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2dd70c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2DD70Cu;
    SET_GPR_U32(ctx, 31, 0x2DD714u);
    ctx->pc = 0x2DD710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD70Cu;
            // 0x2dd710: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD714u; }
        if (ctx->pc != 0x2DD714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD714u; }
        if (ctx->pc != 0x2DD714u) { return; }
    }
    ctx->pc = 0x2DD714u;
label_2dd714:
    // 0x2dd714: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dd714u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2dd718: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2DD718u;
    SET_GPR_U32(ctx, 31, 0x2DD720u);
    ctx->pc = 0x2DD71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD718u;
            // 0x2dd71c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD720u; }
        if (ctx->pc != 0x2DD720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD720u; }
        if (ctx->pc != 0x2DD720u) { return; }
    }
    ctx->pc = 0x2DD720u;
label_2dd720:
    // 0x2dd720: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dd720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd724: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd728: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x2dd728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2dd72c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2DD72Cu;
    SET_GPR_U32(ctx, 31, 0x2DD734u);
    ctx->pc = 0x2DD730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD72Cu;
            // 0x2dd730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD734u; }
        if (ctx->pc != 0x2DD734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD734u; }
        if (ctx->pc != 0x2DD734u) { return; }
    }
    ctx->pc = 0x2DD734u;
label_2dd734:
    // 0x2dd734: 0x26c61720  addiu       $a2, $s6, 0x1720
    ctx->pc = 0x2dd734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 5920));
    // 0x2dd738: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd73c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2dd73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd740: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x2DD740u;
    SET_GPR_U32(ctx, 31, 0x2DD748u);
    ctx->pc = 0x2DD744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD740u;
            // 0x2dd744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD748u; }
        if (ctx->pc != 0x2DD748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD748u; }
        if (ctx->pc != 0x2DD748u) { return; }
    }
    ctx->pc = 0x2DD748u;
label_2dd748:
    // 0x2dd748: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd74c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2dd74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2dd750: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2DD750u;
    SET_GPR_U32(ctx, 31, 0x2DD758u);
    ctx->pc = 0x2DD754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD750u;
            // 0x2dd754: 0x2406007c  addiu       $a2, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD758u; }
        if (ctx->pc != 0x2DD758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD758u; }
        if (ctx->pc != 0x2DD758u) { return; }
    }
    ctx->pc = 0x2DD758u;
label_2dd758:
    // 0x2dd758: 0x2602002e  addiu       $v0, $s0, 0x2E
    ctx->pc = 0x2dd758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 46));
    // 0x2dd75c: 0x26c61ee0  addiu       $a2, $s6, 0x1EE0
    ctx->pc = 0x2dd75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 7904));
    // 0x2dd760: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x2dd760u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dd764: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd768: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x2DD768u;
    SET_GPR_U32(ctx, 31, 0x2DD770u);
    ctx->pc = 0x2DD76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD768u;
            // 0x2dd76c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD770u; }
        if (ctx->pc != 0x2DD770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD770u; }
        if (ctx->pc != 0x2DD770u) { return; }
    }
    ctx->pc = 0x2DD770u;
label_2dd770:
    // 0x2dd770: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd774: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2dd774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd778: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2DD778u;
    SET_GPR_U32(ctx, 31, 0x2DD780u);
    ctx->pc = 0x2DD77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD778u;
            // 0x2dd77c: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD780u; }
        if (ctx->pc != 0x2DD780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD780u; }
        if (ctx->pc != 0x2DD780u) { return; }
    }
    ctx->pc = 0x2DD780u;
label_2dd780:
    // 0x2dd780: 0x26050011  addiu       $a1, $s0, 0x11
    ctx->pc = 0x2dd780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x2dd784: 0x2646017c  addiu       $a2, $s2, 0x17C
    ctx->pc = 0x2dd784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 380));
    // 0x2dd788: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd78c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2DD78Cu;
    SET_GPR_U32(ctx, 31, 0x2DD794u);
    ctx->pc = 0x2DD790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD78Cu;
            // 0x2dd790: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD794u; }
        if (ctx->pc != 0x2DD794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD794u; }
        if (ctx->pc != 0x2DD794u) { return; }
    }
    ctx->pc = 0x2DD794u;
label_2dd794:
    // 0x2dd794: 0x26a5000c  addiu       $a1, $s5, 0xC
    ctx->pc = 0x2dd794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x2dd798: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd79c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2DD79Cu;
    SET_GPR_U32(ctx, 31, 0x2DD7A4u);
    ctx->pc = 0x2DD7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD79Cu;
            // 0x2dd7a0: 0x2406005a  addiu       $a2, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD7A4u; }
        if (ctx->pc != 0x2DD7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD7A4u; }
        if (ctx->pc != 0x2DD7A4u) { return; }
    }
    ctx->pc = 0x2DD7A4u;
label_2dd7a4:
    // 0x2dd7a4: 0x2646018c  addiu       $a2, $s2, 0x18C
    ctx->pc = 0x2dd7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 396));
    // 0x2dd7a8: 0x2605001d  addiu       $a1, $s0, 0x1D
    ctx->pc = 0x2dd7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 29));
    // 0x2dd7ac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dd7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd7b0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2DD7B0u;
    SET_GPR_U32(ctx, 31, 0x2DD7B8u);
    ctx->pc = 0x2DD7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD7B0u;
            // 0x2dd7b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD7B8u; }
        if (ctx->pc != 0x2DD7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD7B8u; }
        if (ctx->pc != 0x2DD7B8u) { return; }
    }
    ctx->pc = 0x2DD7B8u;
label_2dd7b8:
    // 0x2dd7b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dd7b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dd7bc: 0x26940300  addiu       $s4, $s4, 0x300
    ctx->pc = 0x2dd7bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 768));
    // 0x2dd7c0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2dd7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2dd7c4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2dd7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2dd7c8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2dd7c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2dd7cc: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x2DD7CCu;
    {
        const bool branch_taken_0x2dd7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD7CCu;
            // 0x2dd7d0: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd7cc) {
            ctx->pc = 0x2DD684u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dd684;
        }
    }
    ctx->pc = 0x2DD7D4u;
    // 0x2dd7d4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2DD7D4u;
    SET_GPR_U32(ctx, 31, 0x2DD7DCu);
    ctx->pc = 0x2DD7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD7D4u;
            // 0x2dd7d8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD7DCu; }
        if (ctx->pc != 0x2DD7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD7DCu; }
        if (ctx->pc != 0x2DD7DCu) { return; }
    }
    ctx->pc = 0x2DD7DCu;
label_2dd7dc:
    // 0x2dd7dc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2dd7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2dd7e0:
    // 0x2dd7e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2dd7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dd7e4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2dd7e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dd7e8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2dd7e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dd7ec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2dd7ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dd7f0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2dd7f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dd7f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2dd7f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd7f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2dd7f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd7fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2dd7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd800: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2dd800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd804: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dd804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd808: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD808u;
            // 0x2dd80c: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD810u;
}
