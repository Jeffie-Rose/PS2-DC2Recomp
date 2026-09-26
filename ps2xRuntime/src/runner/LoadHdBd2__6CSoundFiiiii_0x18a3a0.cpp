#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadHdBd2__6CSoundFiiiii
// Address: 0x18a3a0 - 0x18a998
void LoadHdBd2__6CSoundFiiiii_0x18a3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadHdBd2__6CSoundFiiiii_0x18a3a0");
#endif

    switch (ctx->pc) {
        case 0x18a4d8u: goto label_18a4d8;
        case 0x18a4ecu: goto label_18a4ec;
        case 0x18a500u: goto label_18a500;
        case 0x18a518u: goto label_18a518;
        case 0x18a53cu: goto label_18a53c;
        case 0x18a550u: goto label_18a550;
        case 0x18a55cu: goto label_18a55c;
        case 0x18a564u: goto label_18a564;
        case 0x18a574u: goto label_18a574;
        case 0x18a5d8u: goto label_18a5d8;
        case 0x18a5e4u: goto label_18a5e4;
        case 0x18a5ecu: goto label_18a5ec;
        case 0x18a5f8u: goto label_18a5f8;
        case 0x18a658u: goto label_18a658;
        case 0x18a704u: goto label_18a704;
        case 0x18a710u: goto label_18a710;
        case 0x18a718u: goto label_18a718;
        case 0x18a748u: goto label_18a748;
        case 0x18a7b8u: goto label_18a7b8;
        case 0x18a7ccu: goto label_18a7cc;
        case 0x18a828u: goto label_18a828;
        case 0x18a860u: goto label_18a860;
        case 0x18a88cu: goto label_18a88c;
        default: break;
    }

    ctx->pc = 0x18a3a0u;

    // 0x18a3a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18a3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18a3a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x18a3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x18a3a8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18a3ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18a3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18a3b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18a3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18a3b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18a3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18a3b8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x18a3b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a3bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18a3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18a3c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18a3c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a3c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a3c8: 0x2682fff9  addiu       $v0, $s4, -0x7
    ctx->pc = 0x18a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967289));
    // 0x18a3cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a3d0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x18a3d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a3d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a3d8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x18a3d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a3dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A3DCu;
    {
        const bool branch_taken_0x18a3dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18A3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3DCu;
            // 0x18a3e0: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3dc) {
            ctx->pc = 0x18A3F8u;
            goto label_18a3f8;
        }
    }
    ctx->pc = 0x18A3E4u;
    // 0x18a3e4: 0x21a40  sll         $v1, $v0, 9
    ctx->pc = 0x18a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x18a3e8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a3ec: 0x24421140  addiu       $v0, $v0, 0x1140
    ctx->pc = 0x18a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4416));
    // 0x18a3f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a3f4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x18a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_18a3f8:
    // 0x18a3f8: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x18a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x18a3fc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a400: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x18a400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x18a404: 0x24422394  addiu       $v0, $v0, 0x2394
    ctx->pc = 0x18a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9108));
    // 0x18a408: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a40c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x18a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x18a410: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x18a410u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18a414: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x18a414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a418: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x18a418u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18a41c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A41Cu;
    {
        const bool branch_taken_0x18a41c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A41Cu;
            // 0x18a420: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a41c) {
            ctx->pc = 0x18A440u;
            goto label_18a440;
        }
    }
    ctx->pc = 0x18A424u;
    // 0x18a424: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a428: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18a428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18a42c: 0x24422424  addiu       $v0, $v0, 0x2424
    ctx->pc = 0x18a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9252));
    // 0x18a430: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a434: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18a434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a438: 0xac222350  sw          $v0, 0x2350($at)
    ctx->pc = 0x18a438u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9040), GPR_U32(ctx, 2));
    // 0x18a43c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a440:
    // 0x18a440: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A440u;
    {
        const bool branch_taken_0x18a440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x18A444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A440u;
            // 0x18a444: 0x3c03003d  lui         $v1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a440) {
            ctx->pc = 0x18A464u;
            goto label_18a464;
        }
    }
    ctx->pc = 0x18A448u;
    // 0x18a448: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x18a448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x18a44c: 0x24632424  addiu       $v1, $v1, 0x2424
    ctx->pc = 0x18a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9252));
    // 0x18a450: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18a450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18a454: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18a454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18a458: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18a458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a45c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x18a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18a460: 0xac222350  sw          $v0, 0x2350($at)
    ctx->pc = 0x18a460u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9040), GPR_U32(ctx, 2));
label_18a464:
    // 0x18a464: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x18A464u;
    {
        const bool branch_taken_0x18a464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A464u;
            // 0x18a468: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a464) {
            ctx->pc = 0x18A490u;
            goto label_18a490;
        }
    }
    ctx->pc = 0x18A46Cu;
    // 0x18a46c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x18a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x18a470: 0x24422424  addiu       $v0, $v0, 0x2424
    ctx->pc = 0x18a470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9252));
    // 0x18a474: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x18a474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a478: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18a478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a47c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a480: 0x2442242c  addiu       $v0, $v0, 0x242C
    ctx->pc = 0x18a480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9260));
    // 0x18a484: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a488: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18a488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18a48c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_18a490:
    // 0x18a490: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x18a490u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18a494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a498: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18A498u;
    {
        const bool branch_taken_0x18a498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a498) {
            ctx->pc = 0x18A4C8u;
            goto label_18a4c8;
        }
    }
    ctx->pc = 0x18A4A0u;
    // 0x18a4a0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a4a4: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x18a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x18a4a8: 0x24422424  addiu       $v0, $v0, 0x2424
    ctx->pc = 0x18a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9252));
    // 0x18a4ac: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x18a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a4b0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x18a4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18a4b4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a4b8: 0x2442242c  addiu       $v0, $v0, 0x242C
    ctx->pc = 0x18a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9260));
    // 0x18a4bc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a4c0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x18a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18a4c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_18a4c8:
    // 0x18a4c8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18a4cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18a4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4d0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18A4D0u;
    SET_GPR_U32(ctx, 31, 0x18A4D8u);
    ctx->pc = 0x18A4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4D0u;
            // 0x18a4d4: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A4D8u; }
        if (ctx->pc != 0x18A4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A4D8u; }
        if (ctx->pc != 0x18A4D8u) { return; }
    }
    ctx->pc = 0x18A4D8u;
label_18a4d8:
    // 0x18a4d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18a4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18a4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18a4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4e4: 0xc0622e4  jal         func_188B90
    ctx->pc = 0x18A4E4u;
    SET_GPR_U32(ctx, 31, 0x18A4ECu);
    ctx->pc = 0x18A4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4E4u;
            // 0x18a4e8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188B90u;
    if (runtime->hasFunction(0x188B90u)) {
        auto targetFn = runtime->lookupFunction(0x188B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A4ECu; }
        if (ctx->pc != 0x18A4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TransHdBd__Fiiii_0x188b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A4ECu; }
        if (ctx->pc != 0x18A4ECu) { return; }
    }
    ctx->pc = 0x18A4ECu;
label_18a4ec:
    // 0x18a4ec: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18a4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18a4f0: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x18a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x18a4f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4f8: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18A4F8u;
    SET_GPR_U32(ctx, 31, 0x18A500u);
    ctx->pc = 0x18A4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4F8u;
            // 0x18a4fc: 0xac202340  sw          $zero, 0x2340($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A500u; }
        if (ctx->pc != 0x18A500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A500u; }
        if (ctx->pc != 0x18A500u) { return; }
    }
    ctx->pc = 0x18A500u;
label_18a500:
    // 0x18a500: 0x3c12003d  lui         $s2, 0x3D
    ctx->pc = 0x18a500u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)61 << 16));
    // 0x18a504: 0x34029050  ori         $v0, $zero, 0x9050
    ctx->pc = 0x18a504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36944);
    // 0x18a508: 0x26522340  addiu       $s2, $s2, 0x2340
    ctx->pc = 0x18a508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9024));
    // 0x18a50c: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x18a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x18a510: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18A510u;
    SET_GPR_U32(ctx, 31, 0x18A518u);
    ctx->pc = 0x18A514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A510u;
            // 0x18a514: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A518u; }
        if (ctx->pc != 0x18A518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A518u; }
        if (ctx->pc != 0x18A518u) { return; }
    }
    ctx->pc = 0x18A518u;
label_18a518:
    // 0x18a518: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a51c: 0x24422398  addiu       $v0, $v0, 0x2398
    ctx->pc = 0x18a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9112));
    // 0x18a520: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x18a520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a524: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18a524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a528: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18A528u;
    {
        const bool branch_taken_0x18a528 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18A52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A528u;
            // 0x18a52c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a528) {
            ctx->pc = 0x18A554u;
            goto label_18a554;
        }
    }
    ctx->pc = 0x18A530u;
    // 0x18a530: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x18a530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x18a534: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18A534u;
    SET_GPR_U32(ctx, 31, 0x18A53Cu);
    ctx->pc = 0x18A538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A534u;
            // 0x18a538: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A53Cu; }
        if (ctx->pc != 0x18A53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A53Cu; }
        if (ctx->pc != 0x18A53Cu) { return; }
    }
    ctx->pc = 0x18A53Cu;
label_18a53c:
    // 0x18a53c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a540: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18a540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a544: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x18a544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x18a548: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18A548u;
    SET_GPR_U32(ctx, 31, 0x18A550u);
    ctx->pc = 0x18A54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A548u;
            // 0x18a54c: 0x24441051  addiu       $a0, $v0, 0x1051 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4177));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A550u; }
        if (ctx->pc != 0x18A550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A550u; }
        if (ctx->pc != 0x18A550u) { return; }
    }
    ctx->pc = 0x18A550u;
label_18a550:
    // 0x18a550: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18a550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a554:
    // 0x18a554: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18A554u;
    {
        const bool branch_taken_0x18a554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A554u;
            // 0x18a558: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a554) {
            ctx->pc = 0x18A580u;
            goto label_18a580;
        }
    }
    ctx->pc = 0x18A55Cu;
label_18a55c:
    // 0x18a55c: 0xc045c0e  jal         func_117038
    ctx->pc = 0x18A55Cu;
    SET_GPR_U32(ctx, 31, 0x18A564u);
    ctx->pc = 0x117038u;
    if (runtime->hasFunction(0x117038u)) {
        auto targetFn = runtime->lookupFunction(0x117038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A564u; }
        if (ctx->pc != 0x18A564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x117038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A564u; }
        if (ctx->pc != 0x18A564u) { return; }
    }
    ctx->pc = 0x18A564u;
label_18a564:
    // 0x18a564: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x18a564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x18a568: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x18a568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x18a56c: 0xc045c6c  jal         func_1171B0
    ctx->pc = 0x18A56Cu;
    SET_GPR_U32(ctx, 31, 0x18A574u);
    ctx->pc = 0x18A570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A56Cu;
            // 0x18a570: 0x24520050  addiu       $s2, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171B0u;
    if (runtime->hasFunction(0x1171B0u)) {
        auto targetFn = runtime->lookupFunction(0x1171B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A574u; }
        if (ctx->pc != 0x18A574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeSysMemory_0x1171b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A574u; }
        if (ctx->pc != 0x18A574u) { return; }
    }
    ctx->pc = 0x18A574u;
label_18a574:
    // 0x18a574: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x18a574u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x18a578: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x18a578u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x18a57c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18a57cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18a580:
    // 0x18a580: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a584: 0x24422390  addiu       $v0, $v0, 0x2390
    ctx->pc = 0x18a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9104));
    // 0x18a588: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x18a588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a58c: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x18a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x18a590: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x18a590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18a594: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x18A594u;
    {
        const bool branch_taken_0x18a594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A594u;
            // 0x18a598: 0x3c03003d  lui         $v1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a594) {
            ctx->pc = 0x18A55Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a55c;
        }
    }
    ctx->pc = 0x18A59Cu;
    // 0x18a59c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a5a0: 0x24632420  addiu       $v1, $v1, 0x2420
    ctx->pc = 0x18a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9248));
    // 0x18a5a4: 0x24422484  addiu       $v0, $v0, 0x2484
    ctx->pc = 0x18a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9348));
    // 0x18a5a8: 0x70b821  addu        $s7, $v1, $s0
    ctx->pc = 0x18a5a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18a5ac: 0x50b021  addu        $s6, $v0, $s0
    ctx->pc = 0x18a5acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a5b0: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x18a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x18a5b4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x18a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x18a5b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A5B8u;
    {
        const bool branch_taken_0x18a5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5B8u;
            // 0x18a5bc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5b8) {
            ctx->pc = 0x18A5DCu;
            goto label_18a5dc;
        }
    }
    ctx->pc = 0x18A5C0u;
    // 0x18a5c0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a5c4: 0x24422458  addiu       $v0, $v0, 0x2458
    ctx->pc = 0x18a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9304));
    // 0x18a5c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a5cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a5d0: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18A5D0u;
    SET_GPR_U32(ctx, 31, 0x18A5D8u);
    ctx->pc = 0x18A5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5D0u;
            // 0x18a5d4: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A5D8u; }
        if (ctx->pc != 0x18A5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A5D8u; }
        if (ctx->pc != 0x18A5D8u) { return; }
    }
    ctx->pc = 0x18A5D8u;
label_18a5d8:
    // 0x18a5d8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x18a5d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a5dc:
    // 0x18a5dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18A5DCu;
    {
        const bool branch_taken_0x18a5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5DCu;
            // 0x18a5e0: 0x24150004  addiu       $s5, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5dc) {
            ctx->pc = 0x18A600u;
            goto label_18a600;
        }
    }
    ctx->pc = 0x18A5E4u;
label_18a5e4:
    // 0x18a5e4: 0xc045c0e  jal         func_117038
    ctx->pc = 0x18A5E4u;
    SET_GPR_U32(ctx, 31, 0x18A5ECu);
    ctx->pc = 0x117038u;
    if (runtime->hasFunction(0x117038u)) {
        auto targetFn = runtime->lookupFunction(0x117038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A5ECu; }
        if (ctx->pc != 0x18A5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x117038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A5ECu; }
        if (ctx->pc != 0x18A5ECu) { return; }
    }
    ctx->pc = 0x18A5ECu;
label_18a5ec:
    // 0x18a5ec: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x18a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x18a5f0: 0xc045c6c  jal         func_1171B0
    ctx->pc = 0x18A5F0u;
    SET_GPR_U32(ctx, 31, 0x18A5F8u);
    ctx->pc = 0x18A5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5F0u;
            // 0x18a5f4: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171B0u;
    if (runtime->hasFunction(0x1171B0u)) {
        auto targetFn = runtime->lookupFunction(0x1171B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A5F8u; }
        if (ctx->pc != 0x18A5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeSysMemory_0x1171b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A5F8u; }
        if (ctx->pc != 0x18A5F8u) { return; }
    }
    ctx->pc = 0x18A5F8u;
label_18a5f8:
    // 0x18a5f8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x18a5f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x18a5fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18a5fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18a600:
    // 0x18a600: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x18a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x18a604: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x18a604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18a608: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x18A608u;
    {
        const bool branch_taken_0x18a608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a608) {
            ctx->pc = 0x18A5E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a5e4;
        }
    }
    ctx->pc = 0x18A610u;
    // 0x18a610: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x18a610u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x18a614: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a618: 0x4400065  bltz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x18A618u;
    {
        const bool branch_taken_0x18a618 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18A61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A618u;
            // 0x18a61c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a618) {
            ctx->pc = 0x18A7B0u;
            goto label_18a7b0;
        }
    }
    ctx->pc = 0x18A620u;
    // 0x18a620: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x18a620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x18a624: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A624u;
    {
        const bool branch_taken_0x18a624 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18a624) {
            ctx->pc = 0x18A640u;
            goto label_18a640;
        }
    }
    ctx->pc = 0x18A62Cu;
    // 0x18a62c: 0x21a40  sll         $v1, $v0, 9
    ctx->pc = 0x18a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x18a630: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a634: 0x24421140  addiu       $v0, $v0, 0x1140
    ctx->pc = 0x18a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4416));
    // 0x18a638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a63c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x18a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_18a640:
    // 0x18a640: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18a640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18a644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18a644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a64c: 0x26560008  addiu       $s6, $s2, 0x8
    ctx->pc = 0x18a64cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x18a650: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18A650u;
    {
        const bool branch_taken_0x18a650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A650u;
            // 0x18a654: 0x24632390  addiu       $v1, $v1, 0x2390 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a650) {
            ctx->pc = 0x18A664u;
            goto label_18a664;
        }
    }
    ctx->pc = 0x18A658u;
label_18a658:
    // 0x18a658: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18a658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18a65c: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x18a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x18a660: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x18a660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_18a664:
    // 0x18a664: 0x0  nop
    ctx->pc = 0x18a664u;
    // NOP
    // 0x18a668: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x18a668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18a66c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x18a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a670: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18a674: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18a674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18a678: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18a67c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a680: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x18a680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18a684: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x18a684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x18a688: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x18a688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18a68c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x18A68Cu;
    {
        const bool branch_taken_0x18a68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A68Cu;
            // 0x18a690: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a68c) {
            ctx->pc = 0x18A658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a658;
        }
    }
    ctx->pc = 0x18A694u;
    // 0x18a694: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x18a694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a698: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18a698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18a69c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a6a0: 0x24632420  addiu       $v1, $v1, 0x2420
    ctx->pc = 0x18a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9248));
    // 0x18a6a4: 0x24422484  addiu       $v0, $v0, 0x2484
    ctx->pc = 0x18a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9348));
    // 0x18a6a8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18a6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a6ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a6b0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a6b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a6b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18a6bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a6c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x18a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x18a6c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a6c8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a6cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a6d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a6d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a6d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18a6dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a6e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a6e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A6E4u;
    {
        const bool branch_taken_0x18a6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6E4u;
            // 0x18a6e8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6e4) {
            ctx->pc = 0x18A708u;
            goto label_18a708;
        }
    }
    ctx->pc = 0x18A6ECu;
    // 0x18a6ec: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a6f0: 0x24422458  addiu       $v0, $v0, 0x2458
    ctx->pc = 0x18a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9304));
    // 0x18a6f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a6f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a6fc: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18A6FCu;
    SET_GPR_U32(ctx, 31, 0x18A704u);
    ctx->pc = 0x18A700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6FCu;
            // 0x18a700: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A704u; }
        if (ctx->pc != 0x18A704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A704u; }
        if (ctx->pc != 0x18A704u) { return; }
    }
    ctx->pc = 0x18A704u;
label_18a704:
    // 0x18a704: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x18a704u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a708:
    // 0x18a708: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18A708u;
    {
        const bool branch_taken_0x18a708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A708u;
            // 0x18a70c: 0x24150004  addiu       $s5, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a708) {
            ctx->pc = 0x18A750u;
            goto label_18a750;
        }
    }
    ctx->pc = 0x18A710u;
label_18a710:
    // 0x18a710: 0xc045c0e  jal         func_117038
    ctx->pc = 0x18A710u;
    SET_GPR_U32(ctx, 31, 0x18A718u);
    ctx->pc = 0x117038u;
    if (runtime->hasFunction(0x117038u)) {
        auto targetFn = runtime->lookupFunction(0x117038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A718u; }
        if (ctx->pc != 0x18A718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x117038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A718u; }
        if (ctx->pc != 0x18A718u) { return; }
    }
    ctx->pc = 0x18A718u;
label_18a718:
    // 0x18a718: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x18a718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x18a71c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a720: 0x24422390  addiu       $v0, $v0, 0x2390
    ctx->pc = 0x18a720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9104));
    // 0x18a724: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18a724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a728: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a72c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a730: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a734: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18a734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18a738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a73c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x18a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x18a740: 0xc045c6c  jal         func_1171B0
    ctx->pc = 0x18A740u;
    SET_GPR_U32(ctx, 31, 0x18A748u);
    ctx->pc = 0x18A744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A740u;
            // 0x18a744: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171B0u;
    if (runtime->hasFunction(0x1171B0u)) {
        auto targetFn = runtime->lookupFunction(0x1171B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A748u; }
        if (ctx->pc != 0x18A748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeSysMemory_0x1171b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A748u; }
        if (ctx->pc != 0x18A748u) { return; }
    }
    ctx->pc = 0x18A748u;
label_18a748:
    // 0x18a748: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x18a748u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x18a74c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18a74cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18a750:
    // 0x18a750: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x18a750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x18a754: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a758: 0x24422390  addiu       $v0, $v0, 0x2390
    ctx->pc = 0x18a758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9104));
    // 0x18a75c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a760: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a764: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a768: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a76c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18a770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a774: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x18a774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x18a778: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x18a778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18a77c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x18A77Cu;
    {
        const bool branch_taken_0x18a77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a77c) {
            ctx->pc = 0x18A710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a710;
        }
    }
    ctx->pc = 0x18A784u;
    // 0x18a784: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18a784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a788: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a78c: 0x24422484  addiu       $v0, $v0, 0x2484
    ctx->pc = 0x18a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9348));
    // 0x18a790: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18a790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a794: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a798: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a79c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a7a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18a7a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a7a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18a7ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18a7acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a7b0:
    // 0x18a7b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18A7B0u;
    {
        const bool branch_taken_0x18a7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A7B0u;
            // 0x18a7b4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7b0) {
            ctx->pc = 0x18A800u;
            goto label_18a800;
        }
    }
    ctx->pc = 0x18A7B8u;
label_18a7b8:
    // 0x18a7b8: 0x2561021  addu        $v0, $s2, $s6
    ctx->pc = 0x18a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x18a7bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a7c0: 0x8c55000c  lw          $s5, 0xC($v0)
    ctx->pc = 0x18a7c0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18a7c4: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18A7C4u;
    SET_GPR_U32(ctx, 31, 0x18A7CCu);
    ctx->pc = 0x18A7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A7C4u;
            // 0x18a7c8: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A7CCu; }
        if (ctx->pc != 0x18A7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A7CCu; }
        if (ctx->pc != 0x18A7CCu) { return; }
    }
    ctx->pc = 0x18A7CCu;
label_18a7cc:
    // 0x18a7cc: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x18a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x18a7d0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18a7d4: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x18a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x18a7d8: 0x24632390  addiu       $v1, $v1, 0x2390
    ctx->pc = 0x18a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9104));
    // 0x18a7dc: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x18a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x18a7e0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a7e4: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x18a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x18a7e8: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x18a7e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x18a7ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18a7f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18a7f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18a7f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a7f8: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x18a7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
    // 0x18a7fc: 0xac62009c  sw          $v0, 0x9C($v1)
    ctx->pc = 0x18a7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
label_18a800:
    // 0x18a800: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x18a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x18a804: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x18a804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18a808: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18A808u;
    {
        const bool branch_taken_0x18a808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A808u;
            // 0x18a80c: 0x2655004c  addiu       $s5, $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a808) {
            ctx->pc = 0x18A7B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a7b8;
        }
    }
    ctx->pc = 0x18A810u;
    // 0x18a810: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a814: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x18a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
    // 0x18a818: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a81c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a820: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18A820u;
    SET_GPR_U32(ctx, 31, 0x18A828u);
    ctx->pc = 0x18A824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A820u;
            // 0x18a824: 0x268400a0  addiu       $a0, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A828u; }
        if (ctx->pc != 0x18A828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A828u; }
        if (ctx->pc != 0x18A828u) { return; }
    }
    ctx->pc = 0x18A828u;
label_18a828:
    // 0x18a828: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x18a828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a82c: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x18A82Cu;
    {
        const bool branch_taken_0x18a82c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x18a82c) {
            ctx->pc = 0x18A860u;
            goto label_18a860;
        }
    }
    ctx->pc = 0x18A834u;
    // 0x18a834: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x18a834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a838: 0x24a400a0  addiu       $a0, $a1, 0xA0
    ctx->pc = 0x18a838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x18a83c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x18a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18a840: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a844: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a848: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18a848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18a84c: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x18a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
    // 0x18a850: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18a850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18a854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a858: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18A858u;
    SET_GPR_U32(ctx, 31, 0x18A860u);
    ctx->pc = 0x18A85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A858u;
            // 0x18a85c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A860u; }
        if (ctx->pc != 0x18A860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A860u; }
        if (ctx->pc != 0x18A860u) { return; }
    }
    ctx->pc = 0x18A860u;
label_18a860:
    // 0x18a860: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18a860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18a864: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18a864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18a868: 0x8c252344  lw          $a1, 0x2344($at)
    ctx->pc = 0x18a868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9028)));
    // 0x18a86c: 0x246323e0  addiu       $v1, $v1, 0x23E0
    ctx->pc = 0x18a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9184));
    // 0x18a870: 0x704021  addu        $t0, $v1, $s0
    ctx->pc = 0x18a870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18a874: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x18a874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x18a878: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18a878u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a87c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18a87cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a880: 0x24842390  addiu       $a0, $a0, 0x2390
    ctx->pc = 0x18a880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9104));
    // 0x18a884: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18A884u;
    {
        const bool branch_taken_0x18a884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A884u;
            // 0x18a888: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a884) {
            ctx->pc = 0x18A8BCu;
            goto label_18a8bc;
        }
    }
    ctx->pc = 0x18A88Cu;
label_18a88c:
    // 0x18a88c: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18a890: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x18a890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x18a894: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x18a894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x18a898: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x18a898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x18a89c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x18a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18a8a0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18a8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18a8a4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x18a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a8a8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18a8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18a8ac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18a8acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18a8b0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x18a8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a8b4: 0xaca30094  sw          $v1, 0x94($a1)
    ctx->pc = 0x18a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 3));
    // 0x18a8b8: 0xaca3009c  sw          $v1, 0x9C($a1)
    ctx->pc = 0x18a8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 3));
label_18a8bc:
    // 0x18a8bc: 0x0  nop
    ctx->pc = 0x18a8bcu;
    // NOP
    // 0x18a8c0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x18a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x18a8c4: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x18a8c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18a8c8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x18A8C8u;
    {
        const bool branch_taken_0x18a8c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A8C8u;
            // 0x18a8cc: 0x2472821  addu        $a1, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8c8) {
            ctx->pc = 0x18A88Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a88c;
        }
    }
    ctx->pc = 0x18A8D0u;
    // 0x18a8d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18a8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a8d4: 0x4800022  bltz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18A8D4u;
    {
        const bool branch_taken_0x18a8d4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18A8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A8D4u;
            // 0x18a8d8: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8d4) {
            ctx->pc = 0x18A960u;
            goto label_18a960;
        }
    }
    ctx->pc = 0x18A8DCu;
    // 0x18a8dc: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x18a8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18a8e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a8e4: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x18a8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x18a8e8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a8ec: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x18a8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x18a8f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a8f4: 0x24e7242c  addiu       $a3, $a3, 0x242C
    ctx->pc = 0x18a8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9260));
    // 0x18a8f8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x18a8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18a8fc: 0x24a523e0  addiu       $a1, $a1, 0x23E0
    ctx->pc = 0x18a8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9184));
    // 0x18a900: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18a900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18a904: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18a904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18a908: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x18a908u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x18a90c: 0xf02021  addu        $a0, $a3, $s0
    ctx->pc = 0x18a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x18a910: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x18a910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18a914: 0x24632420  addiu       $v1, $v1, 0x2420
    ctx->pc = 0x18a914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9248));
    // 0x18a918: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x18a918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a91c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a920: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a924: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a924u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a928: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a92c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18a930: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x18a930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x18a934: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x18a934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x18a938: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x18a938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a93c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a940: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a944: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a948: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a94c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18a950: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18a950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a954: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18a954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18a958: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18a958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18a95c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_18a960:
    // 0x18a960: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x18a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x18a964: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18a964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18a968: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x18a968u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x18a96c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x18a96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18a970: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18a970u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18a974: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18a974u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a978: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18a978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a97c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18a97cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a980: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18a980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a98c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a990: 0x3e00008  jr          $ra
    ctx->pc = 0x18A990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A990u;
            // 0x18a994: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A998u;
}
