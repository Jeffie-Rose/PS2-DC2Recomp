#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MPCHARA_MOTION__FP12RS_STACKDATAi
// Address: 0x27b360 - 0x27b510
void ps2__SET_MPCHARA_MOTION__FP12RS_STACKDATAi_0x27b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MPCHARA_MOTION__FP12RS_STACKDATAi_0x27b360");
#endif

    switch (ctx->pc) {
        case 0x27b360u: goto label_27b360;
        case 0x27b364u: goto label_27b364;
        case 0x27b368u: goto label_27b368;
        case 0x27b36cu: goto label_27b36c;
        case 0x27b370u: goto label_27b370;
        case 0x27b374u: goto label_27b374;
        case 0x27b378u: goto label_27b378;
        case 0x27b37cu: goto label_27b37c;
        case 0x27b380u: goto label_27b380;
        case 0x27b384u: goto label_27b384;
        case 0x27b388u: goto label_27b388;
        case 0x27b38cu: goto label_27b38c;
        case 0x27b390u: goto label_27b390;
        case 0x27b394u: goto label_27b394;
        case 0x27b398u: goto label_27b398;
        case 0x27b39cu: goto label_27b39c;
        case 0x27b3a0u: goto label_27b3a0;
        case 0x27b3a4u: goto label_27b3a4;
        case 0x27b3a8u: goto label_27b3a8;
        case 0x27b3acu: goto label_27b3ac;
        case 0x27b3b0u: goto label_27b3b0;
        case 0x27b3b4u: goto label_27b3b4;
        case 0x27b3b8u: goto label_27b3b8;
        case 0x27b3bcu: goto label_27b3bc;
        case 0x27b3c0u: goto label_27b3c0;
        case 0x27b3c4u: goto label_27b3c4;
        case 0x27b3c8u: goto label_27b3c8;
        case 0x27b3ccu: goto label_27b3cc;
        case 0x27b3d0u: goto label_27b3d0;
        case 0x27b3d4u: goto label_27b3d4;
        case 0x27b3d8u: goto label_27b3d8;
        case 0x27b3dcu: goto label_27b3dc;
        case 0x27b3e0u: goto label_27b3e0;
        case 0x27b3e4u: goto label_27b3e4;
        case 0x27b3e8u: goto label_27b3e8;
        case 0x27b3ecu: goto label_27b3ec;
        case 0x27b3f0u: goto label_27b3f0;
        case 0x27b3f4u: goto label_27b3f4;
        case 0x27b3f8u: goto label_27b3f8;
        case 0x27b3fcu: goto label_27b3fc;
        case 0x27b400u: goto label_27b400;
        case 0x27b404u: goto label_27b404;
        case 0x27b408u: goto label_27b408;
        case 0x27b40cu: goto label_27b40c;
        case 0x27b410u: goto label_27b410;
        case 0x27b414u: goto label_27b414;
        case 0x27b418u: goto label_27b418;
        case 0x27b41cu: goto label_27b41c;
        case 0x27b420u: goto label_27b420;
        case 0x27b424u: goto label_27b424;
        case 0x27b428u: goto label_27b428;
        case 0x27b42cu: goto label_27b42c;
        case 0x27b430u: goto label_27b430;
        case 0x27b434u: goto label_27b434;
        case 0x27b438u: goto label_27b438;
        case 0x27b43cu: goto label_27b43c;
        case 0x27b440u: goto label_27b440;
        case 0x27b444u: goto label_27b444;
        case 0x27b448u: goto label_27b448;
        case 0x27b44cu: goto label_27b44c;
        case 0x27b450u: goto label_27b450;
        case 0x27b454u: goto label_27b454;
        case 0x27b458u: goto label_27b458;
        case 0x27b45cu: goto label_27b45c;
        case 0x27b460u: goto label_27b460;
        case 0x27b464u: goto label_27b464;
        case 0x27b468u: goto label_27b468;
        case 0x27b46cu: goto label_27b46c;
        case 0x27b470u: goto label_27b470;
        case 0x27b474u: goto label_27b474;
        case 0x27b478u: goto label_27b478;
        case 0x27b47cu: goto label_27b47c;
        case 0x27b480u: goto label_27b480;
        case 0x27b484u: goto label_27b484;
        case 0x27b488u: goto label_27b488;
        case 0x27b48cu: goto label_27b48c;
        case 0x27b490u: goto label_27b490;
        case 0x27b494u: goto label_27b494;
        case 0x27b498u: goto label_27b498;
        case 0x27b49cu: goto label_27b49c;
        case 0x27b4a0u: goto label_27b4a0;
        case 0x27b4a4u: goto label_27b4a4;
        case 0x27b4a8u: goto label_27b4a8;
        case 0x27b4acu: goto label_27b4ac;
        case 0x27b4b0u: goto label_27b4b0;
        case 0x27b4b4u: goto label_27b4b4;
        case 0x27b4b8u: goto label_27b4b8;
        case 0x27b4bcu: goto label_27b4bc;
        case 0x27b4c0u: goto label_27b4c0;
        case 0x27b4c4u: goto label_27b4c4;
        case 0x27b4c8u: goto label_27b4c8;
        case 0x27b4ccu: goto label_27b4cc;
        case 0x27b4d0u: goto label_27b4d0;
        case 0x27b4d4u: goto label_27b4d4;
        case 0x27b4d8u: goto label_27b4d8;
        case 0x27b4dcu: goto label_27b4dc;
        case 0x27b4e0u: goto label_27b4e0;
        case 0x27b4e4u: goto label_27b4e4;
        case 0x27b4e8u: goto label_27b4e8;
        case 0x27b4ecu: goto label_27b4ec;
        case 0x27b4f0u: goto label_27b4f0;
        case 0x27b4f4u: goto label_27b4f4;
        case 0x27b4f8u: goto label_27b4f8;
        case 0x27b4fcu: goto label_27b4fc;
        case 0x27b500u: goto label_27b500;
        case 0x27b504u: goto label_27b504;
        case 0x27b508u: goto label_27b508;
        case 0x27b50cu: goto label_27b50c;
        default: break;
    }

    ctx->pc = 0x27b360u;

label_27b360:
    // 0x27b360: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x27b360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_27b364:
    // 0x27b364: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x27b364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27b368:
    // 0x27b368: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27b368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_27b36c:
    // 0x27b36c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27b36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27b370:
    // 0x27b370: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27b370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_27b374:
    // 0x27b374: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x27b374u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27b378:
    // 0x27b378: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27b378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27b37c:
    // 0x27b37c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27b37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27b380:
    // 0x27b380: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27b380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27b384:
    // 0x27b384: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27b388:
    // 0x27b388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27b38c:
    // 0x27b38c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27b390:
    // 0x27b390: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27b390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_27b394:
    // 0x27b394: 0xc0a1214  jal         func_284850
label_27b398:
    if (ctx->pc == 0x27B398u) {
        ctx->pc = 0x27B398u;
            // 0x27b398: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x27B39Cu;
        goto label_27b39c;
    }
    ctx->pc = 0x27B394u;
    SET_GPR_U32(ctx, 31, 0x27B39Cu);
    ctx->pc = 0x27B398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B394u;
            // 0x27b398: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B39Cu; }
        if (ctx->pc != 0x27B39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B39Cu; }
        if (ctx->pc != 0x27B39Cu) { return; }
    }
    ctx->pc = 0x27B39Cu;
label_27b39c:
    // 0x27b39c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27b39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b3a0:
    // 0x27b3a0: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
label_27b3a4:
    if (ctx->pc == 0x27B3A4u) {
        ctx->pc = 0x27B3A4u;
            // 0x27b3a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B3A8u;
        goto label_27b3a8;
    }
    ctx->pc = 0x27B3A0u;
    {
        const bool branch_taken_0x27b3a0 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x27B3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B3A0u;
            // 0x27b3a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b3a0) {
            ctx->pc = 0x27B3B0u;
            goto label_27b3b0;
        }
    }
    ctx->pc = 0x27B3A8u;
label_27b3a8:
    // 0x27b3a8: 0x10000050  b           . + 4 + (0x50 << 2)
label_27b3ac:
    if (ctx->pc == 0x27B3ACu) {
        ctx->pc = 0x27B3ACu;
            // 0x27b3ac: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x27B3B0u;
        goto label_27b3b0;
    }
    ctx->pc = 0x27B3A8u;
    {
        const bool branch_taken_0x27b3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B3A8u;
            // 0x27b3ac: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b3a8) {
            ctx->pc = 0x27B4ECu;
            goto label_27b4ec;
        }
    }
    ctx->pc = 0x27B3B0u;
label_27b3b0:
    // 0x27b3b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27b3b4:
    // 0x27b3b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27b3b8:
    // 0x27b3b8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_27b3bc:
    if (ctx->pc == 0x27B3BCu) {
        ctx->pc = 0x27B3BCu;
            // 0x27b3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B3C0u;
        goto label_27b3c0;
    }
    ctx->pc = 0x27B3B8u;
    {
        const bool branch_taken_0x27b3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27B3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B3B8u;
            // 0x27b3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b3b8) {
            ctx->pc = 0x27B420u;
            goto label_27b420;
        }
    }
    ctx->pc = 0x27B3C0u;
label_27b3c0:
    // 0x27b3c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_27b3c4:
    if (ctx->pc == 0x27B3C4u) {
        ctx->pc = 0x27B3C4u;
            // 0x27b3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B3C8u;
        goto label_27b3c8;
    }
    ctx->pc = 0x27B3C0u;
    {
        const bool branch_taken_0x27b3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B3C0u;
            // 0x27b3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b3c0) {
            ctx->pc = 0x27B3D0u;
            goto label_27b3d0;
        }
    }
    ctx->pc = 0x27B3C8u;
label_27b3c8:
    // 0x27b3c8: 0x10000027  b           . + 4 + (0x27 << 2)
label_27b3cc:
    if (ctx->pc == 0x27B3CCu) {
        ctx->pc = 0x27B3D0u;
        goto label_27b3d0;
    }
    ctx->pc = 0x27B3C8u;
    {
        const bool branch_taken_0x27b3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b3c8) {
            ctx->pc = 0x27B468u;
            goto label_27b468;
        }
    }
    ctx->pc = 0x27B3D0u;
label_27b3d0:
    // 0x27b3d0: 0xc097e18  jal         func_25F860
label_27b3d4:
    if (ctx->pc == 0x27B3D4u) {
        ctx->pc = 0x27B3D4u;
            // 0x27b3d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x27B3D8u;
        goto label_27b3d8;
    }
    ctx->pc = 0x27B3D0u;
    SET_GPR_U32(ctx, 31, 0x27B3D8u);
    ctx->pc = 0x27B3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B3D0u;
            // 0x27b3d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B3D8u; }
        if (ctx->pc != 0x27B3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B3D8u; }
        if (ctx->pc != 0x27B3D8u) { return; }
    }
    ctx->pc = 0x27B3D8u;
label_27b3d8:
    // 0x27b3d8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x27b3d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_27b3dc:
    // 0x27b3dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27b3dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b3e0:
    // 0x27b3e0: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_27b3e4:
    if (ctx->pc == 0x27B3E4u) {
        ctx->pc = 0x27B3E4u;
            // 0x27b3e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B3E8u;
        goto label_27b3e8;
    }
    ctx->pc = 0x27B3E0u;
    {
        const bool branch_taken_0x27b3e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B3E0u;
            // 0x27b3e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b3e0) {
            ctx->pc = 0x27B468u;
            goto label_27b468;
        }
    }
    ctx->pc = 0x27B3E8u;
label_27b3e8:
    // 0x27b3e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x27b3e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b3ec:
    // 0x27b3ec: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x27b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_27b3f0:
    // 0x27b3f0: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x27b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_27b3f4:
    // 0x27b3f4: 0xc057530  jal         func_15D4C0
label_27b3f8:
    if (ctx->pc == 0x27B3F8u) {
        ctx->pc = 0x27B3F8u;
            // 0x27b3f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B3FCu;
        goto label_27b3fc;
    }
    ctx->pc = 0x27B3F4u;
    SET_GPR_U32(ctx, 31, 0x27B3FCu);
    ctx->pc = 0x27B3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B3F4u;
            // 0x27b3f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4C0u;
    if (runtime->hasFunction(0x15D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B3FCu; }
        if (ctx->pc != 0x27B3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFi_0x15d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B3FCu; }
        if (ctx->pc != 0x27B3FCu) { return; }
    }
    ctx->pc = 0x27B3FCu;
label_27b3fc:
    // 0x27b3fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27b3fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b400:
    // 0x27b400: 0x16600019  bnez        $s3, . + 4 + (0x19 << 2)
label_27b404:
    if (ctx->pc == 0x27B404u) {
        ctx->pc = 0x27B408u;
        goto label_27b408;
    }
    ctx->pc = 0x27B400u;
    {
        const bool branch_taken_0x27b400 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b400) {
            ctx->pc = 0x27B468u;
            goto label_27b468;
        }
    }
    ctx->pc = 0x27B408u;
label_27b408:
    // 0x27b408: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27b408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27b40c:
    // 0x27b40c: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x27b40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_27b410:
    // 0x27b410: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_27b414:
    if (ctx->pc == 0x27B414u) {
        ctx->pc = 0x27B414u;
            // 0x27b414: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x27B418u;
        goto label_27b418;
    }
    ctx->pc = 0x27B410u;
    {
        const bool branch_taken_0x27b410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B410u;
            // 0x27b414: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b410) {
            ctx->pc = 0x27B3ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27b3ec;
        }
    }
    ctx->pc = 0x27B418u;
label_27b418:
    // 0x27b418: 0x10000013  b           . + 4 + (0x13 << 2)
label_27b41c:
    if (ctx->pc == 0x27B41Cu) {
        ctx->pc = 0x27B420u;
        goto label_27b420;
    }
    ctx->pc = 0x27B418u;
    {
        const bool branch_taken_0x27b418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b418) {
            ctx->pc = 0x27B468u;
            goto label_27b468;
        }
    }
    ctx->pc = 0x27B420u;
label_27b420:
    // 0x27b420: 0xc097e48  jal         func_25F920
label_27b424:
    if (ctx->pc == 0x27B424u) {
        ctx->pc = 0x27B424u;
            // 0x27b424: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x27B428u;
        goto label_27b428;
    }
    ctx->pc = 0x27B420u;
    SET_GPR_U32(ctx, 31, 0x27B428u);
    ctx->pc = 0x27B424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B420u;
            // 0x27b424: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B428u; }
        if (ctx->pc != 0x27B428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B428u; }
        if (ctx->pc != 0x27B428u) { return; }
    }
    ctx->pc = 0x27B428u;
label_27b428:
    // 0x27b428: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x27b428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_27b42c:
    // 0x27b42c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27b42cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b430:
    // 0x27b430: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_27b434:
    if (ctx->pc == 0x27B434u) {
        ctx->pc = 0x27B434u;
            // 0x27b434: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B438u;
        goto label_27b438;
    }
    ctx->pc = 0x27B430u;
    {
        const bool branch_taken_0x27b430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B430u;
            // 0x27b434: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b430) {
            ctx->pc = 0x27B468u;
            goto label_27b468;
        }
    }
    ctx->pc = 0x27B438u;
label_27b438:
    // 0x27b438: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27b438u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b43c:
    // 0x27b43c: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x27b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_27b440:
    // 0x27b440: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x27b440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_27b444:
    // 0x27b444: 0xc057508  jal         func_15D420
label_27b448:
    if (ctx->pc == 0x27B448u) {
        ctx->pc = 0x27B448u;
            // 0x27b448: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B44Cu;
        goto label_27b44c;
    }
    ctx->pc = 0x27B444u;
    SET_GPR_U32(ctx, 31, 0x27B44Cu);
    ctx->pc = 0x27B448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B444u;
            // 0x27b448: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B44Cu; }
        if (ctx->pc != 0x27B44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B44Cu; }
        if (ctx->pc != 0x27B44Cu) { return; }
    }
    ctx->pc = 0x27B44Cu;
label_27b44c:
    // 0x27b44c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27b44cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b450:
    // 0x27b450: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_27b454:
    if (ctx->pc == 0x27B454u) {
        ctx->pc = 0x27B458u;
        goto label_27b458;
    }
    ctx->pc = 0x27B450u;
    {
        const bool branch_taken_0x27b450 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b450) {
            ctx->pc = 0x27B468u;
            goto label_27b468;
        }
    }
    ctx->pc = 0x27B458u;
label_27b458:
    // 0x27b458: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x27b458u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_27b45c:
    // 0x27b45c: 0x2b1102a  slt         $v0, $s5, $s1
    ctx->pc = 0x27b45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_27b460:
    // 0x27b460: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_27b464:
    if (ctx->pc == 0x27B464u) {
        ctx->pc = 0x27B464u;
            // 0x27b464: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x27B468u;
        goto label_27b468;
    }
    ctx->pc = 0x27B460u;
    {
        const bool branch_taken_0x27b460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B460u;
            // 0x27b464: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b460) {
            ctx->pc = 0x27B43Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27b43c;
        }
    }
    ctx->pc = 0x27B468u;
label_27b468:
    // 0x27b468: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_27b46c:
    if (ctx->pc == 0x27B46Cu) {
        ctx->pc = 0x27B46Cu;
            // 0x27b46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B470u;
        goto label_27b470;
    }
    ctx->pc = 0x27B468u;
    {
        const bool branch_taken_0x27b468 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B468u;
            // 0x27b46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b468) {
            ctx->pc = 0x27B478u;
            goto label_27b478;
        }
    }
    ctx->pc = 0x27B470u;
label_27b470:
    // 0x27b470: 0x1000001d  b           . + 4 + (0x1D << 2)
label_27b474:
    if (ctx->pc == 0x27B474u) {
        ctx->pc = 0x27B474u;
            // 0x27b474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B478u;
        goto label_27b478;
    }
    ctx->pc = 0x27B470u;
    {
        const bool branch_taken_0x27b470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B470u;
            // 0x27b474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b470) {
            ctx->pc = 0x27B4E8u;
            goto label_27b4e8;
        }
    }
    ctx->pc = 0x27B478u;
label_27b478:
    // 0x27b478: 0xc097e48  jal         func_25F920
label_27b47c:
    if (ctx->pc == 0x27B47Cu) {
        ctx->pc = 0x27B47Cu;
            // 0x27b47c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x27B480u;
        goto label_27b480;
    }
    ctx->pc = 0x27B478u;
    SET_GPR_U32(ctx, 31, 0x27B480u);
    ctx->pc = 0x27B47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B478u;
            // 0x27b47c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B480u; }
        if (ctx->pc != 0x27B480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B480u; }
        if (ctx->pc != 0x27B480u) { return; }
    }
    ctx->pc = 0x27B480u;
label_27b480:
    // 0x27b480: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27b480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b484:
    // 0x27b484: 0xc059924  jal         func_166490
label_27b488:
    if (ctx->pc == 0x27B488u) {
        ctx->pc = 0x27B488u;
            // 0x27b488: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B48Cu;
        goto label_27b48c;
    }
    ctx->pc = 0x27B484u;
    SET_GPR_U32(ctx, 31, 0x27B48Cu);
    ctx->pc = 0x27B488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B484u;
            // 0x27b488: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B48Cu; }
        if (ctx->pc != 0x27B48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B48Cu; }
        if (ctx->pc != 0x27B48Cu) { return; }
    }
    ctx->pc = 0x27B48Cu;
label_27b48c:
    // 0x27b48c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27b490:
    if (ctx->pc == 0x27B490u) {
        ctx->pc = 0x27B490u;
            // 0x27b490: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B494u;
        goto label_27b494;
    }
    ctx->pc = 0x27B48Cu;
    {
        const bool branch_taken_0x27b48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B48Cu;
            // 0x27b490: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b48c) {
            ctx->pc = 0x27B49Cu;
            goto label_27b49c;
        }
    }
    ctx->pc = 0x27B494u;
label_27b494:
    // 0x27b494: 0x10000014  b           . + 4 + (0x14 << 2)
label_27b498:
    if (ctx->pc == 0x27B498u) {
        ctx->pc = 0x27B498u;
            // 0x27b498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B49Cu;
        goto label_27b49c;
    }
    ctx->pc = 0x27B494u;
    {
        const bool branch_taken_0x27b494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B494u;
            // 0x27b498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b494) {
            ctx->pc = 0x27B4E8u;
            goto label_27b4e8;
        }
    }
    ctx->pc = 0x27B49Cu;
label_27b49c:
    // 0x27b49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b4a0:
    // 0x27b4a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27b4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b4a4:
    // 0x27b4a4: 0xc097e48  jal         func_25F920
label_27b4a8:
    if (ctx->pc == 0x27B4A8u) {
        ctx->pc = 0x27B4A8u;
            // 0x27b4a8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x27B4ACu;
        goto label_27b4ac;
    }
    ctx->pc = 0x27B4A4u;
    SET_GPR_U32(ctx, 31, 0x27B4ACu);
    ctx->pc = 0x27B4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B4A4u;
            // 0x27b4a8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B4ACu; }
        if (ctx->pc != 0x27B4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B4ACu; }
        if (ctx->pc != 0x27B4ACu) { return; }
    }
    ctx->pc = 0x27B4ACu;
label_27b4ac:
    // 0x27b4ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27b4acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b4b0:
    // 0x27b4b0: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x27b4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
label_27b4b4:
    // 0x27b4b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_27b4b8:
    if (ctx->pc == 0x27B4B8u) {
        ctx->pc = 0x27B4B8u;
            // 0x27b4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B4BCu;
        goto label_27b4bc;
    }
    ctx->pc = 0x27B4B4u;
    {
        const bool branch_taken_0x27b4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B4B4u;
            // 0x27b4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b4b4) {
            ctx->pc = 0x27B4C8u;
            goto label_27b4c8;
        }
    }
    ctx->pc = 0x27B4BCu;
label_27b4bc:
    // 0x27b4bc: 0xc097e18  jal         func_25F860
label_27b4c0:
    if (ctx->pc == 0x27B4C0u) {
        ctx->pc = 0x27B4C4u;
        goto label_27b4c4;
    }
    ctx->pc = 0x27B4BCu;
    SET_GPR_U32(ctx, 31, 0x27B4C4u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B4C4u; }
        if (ctx->pc != 0x27B4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B4C4u; }
        if (ctx->pc != 0x27B4C4u) { return; }
    }
    ctx->pc = 0x27B4C4u;
label_27b4c4:
    // 0x27b4c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27b4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b4c8:
    // 0x27b4c8: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x27b4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_27b4cc:
    // 0x27b4cc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_27b4d0:
    if (ctx->pc == 0x27B4D0u) {
        ctx->pc = 0x27B4D0u;
            // 0x27b4d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x27B4D4u;
        goto label_27b4d4;
    }
    ctx->pc = 0x27B4CCu;
    {
        const bool branch_taken_0x27b4cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B4CCu;
            // 0x27b4d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b4cc) {
            ctx->pc = 0x27B4E8u;
            goto label_27b4e8;
        }
    }
    ctx->pc = 0x27B4D4u;
label_27b4d4:
    // 0x27b4d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27b4d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27b4d8:
    // 0x27b4d8: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x27b4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_27b4dc:
    // 0x27b4dc: 0x320f809  jalr        $t9
label_27b4e0:
    if (ctx->pc == 0x27B4E0u) {
        ctx->pc = 0x27B4E0u;
            // 0x27b4e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B4E4u;
        goto label_27b4e4;
    }
    ctx->pc = 0x27B4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27B4E4u);
        ctx->pc = 0x27B4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B4DCu;
            // 0x27b4e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27B4E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27B4E4u; }
            if (ctx->pc != 0x27B4E4u) { return; }
        }
        }
    }
    ctx->pc = 0x27B4E4u;
label_27b4e4:
    // 0x27b4e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b4e8:
    // 0x27b4e8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27b4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_27b4ec:
    // 0x27b4ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27b4ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27b4f0:
    // 0x27b4f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27b4f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27b4f4:
    // 0x27b4f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27b4f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27b4f8:
    // 0x27b4f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27b4f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27b4fc:
    // 0x27b4fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27b4fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27b500:
    // 0x27b500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27b504:
    // 0x27b504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27b508:
    // 0x27b508: 0x3e00008  jr          $ra
label_27b50c:
    if (ctx->pc == 0x27B50Cu) {
        ctx->pc = 0x27B50Cu;
            // 0x27b50c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x27B510u;
        goto label_fallthrough_0x27b508;
    }
    ctx->pc = 0x27B508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B508u;
            // 0x27b50c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x27b508:
    ctx->pc = 0x27B510u;
}
