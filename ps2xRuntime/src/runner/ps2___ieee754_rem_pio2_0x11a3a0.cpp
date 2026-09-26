#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ieee754_rem_pio2
// Address: 0x11a3a0 - 0x11a8bc
void ps2___ieee754_rem_pio2_0x11a3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_rem_pio2_0x11a3a0");
#endif

    switch (ctx->pc) {
        case 0x11a434u: goto label_11a434;
        case 0x11a470u: goto label_11a470;
        case 0x11a484u: goto label_11a484;
        case 0x11a494u: goto label_11a494;
        case 0x11a4a0u: goto label_11a4a0;
        case 0x11a4bcu: goto label_11a4bc;
        case 0x11a4f8u: goto label_11a4f8;
        case 0x11a50cu: goto label_11a50c;
        case 0x11a51cu: goto label_11a51c;
        case 0x11a528u: goto label_11a528;
        case 0x11a54cu: goto label_11a54c;
        case 0x11a560u: goto label_11a560;
        case 0x11a570u: goto label_11a570;
        case 0x11a578u: goto label_11a578;
        case 0x11a584u: goto label_11a584;
        case 0x11a598u: goto label_11a598;
        case 0x11a5a4u: goto label_11a5a4;
        case 0x11a5b8u: goto label_11a5b8;
        case 0x11a5f0u: goto label_11a5f0;
        case 0x11a628u: goto label_11a628;
        case 0x11a638u: goto label_11a638;
        case 0x11a64cu: goto label_11a64c;
        case 0x11a65cu: goto label_11a65c;
        case 0x11a668u: goto label_11a668;
        case 0x11a674u: goto label_11a674;
        case 0x11a684u: goto label_11a684;
        case 0x11a6b8u: goto label_11a6b8;
        case 0x11a6c8u: goto label_11a6c8;
        case 0x11a6dcu: goto label_11a6dc;
        case 0x11a6ecu: goto label_11a6ec;
        case 0x11a6f8u: goto label_11a6f8;
        case 0x11a704u: goto label_11a704;
        case 0x11a718u: goto label_11a718;
        case 0x11a72cu: goto label_11a72c;
        case 0x11a738u: goto label_11a738;
        case 0x11a754u: goto label_11a754;
        case 0x11a77cu: goto label_11a77c;
        case 0x11a7c0u: goto label_11a7c0;
        case 0x11a7ccu: goto label_11a7cc;
        case 0x11a7d4u: goto label_11a7d4;
        case 0x11a7e8u: goto label_11a7e8;
        case 0x11a7f8u: goto label_11a7f8;
        case 0x11a810u: goto label_11a810;
        case 0x11a82cu: goto label_11a82c;
        case 0x11a850u: goto label_11a850;
        case 0x11a868u: goto label_11a868;
        case 0x11a87cu: goto label_11a87c;
        default: break;
    }

    ctx->pc = 0x11a3a0u;

    // 0x11a3a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x11a3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x11a3a4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x11a3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x11a3a8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x11a3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x11a3ac: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x11a3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x11a3b0: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x11a3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x11a3b4: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x11a3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x11a3b8: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x11a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x11a3bc: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x11a3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x11a3c0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x11a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x11a3c4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x11a3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x11a3c8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x11a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x11a3cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11a3ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3d0: 0x2f03f  dsra32      $fp, $v0, 0
    ctx->pc = 0x11a3d0u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11a3d4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11a3d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11a3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11a3dc: 0x3c023fe9  lui         $v0, 0x3FE9
    ctx->pc = 0x11a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
    // 0x11a3e0: 0x3c38024  and         $s0, $fp, $v1
    ctx->pc = 0x11a3e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & GPR_U64(ctx, 3));
    // 0x11a3e4: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x11a3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x11a3e8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11a3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a3ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A3ECu;
    {
        const bool branch_taken_0x11a3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A3ECu;
            // 0x11a3f0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3ec) {
            ctx->pc = 0x11A408u;
            goto label_11a408;
        }
    }
    ctx->pc = 0x11A3F4u;
    // 0x11a3f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11a3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3f8: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x11a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
    // 0x11a3fc: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x11a3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x11a400: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x11A400u;
    {
        const bool branch_taken_0x11a400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A400u;
            // 0x11a404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a400) {
            ctx->pc = 0x11A88Cu;
            goto label_11a88c;
        }
    }
    ctx->pc = 0x11A408u;
label_11a408:
    // 0x11a408: 0x3c024002  lui         $v0, 0x4002
    ctx->pc = 0x11a408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16386 << 16));
    // 0x11a40c: 0x3442d97b  ori         $v0, $v0, 0xD97B
    ctx->pc = 0x11a40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55675);
    // 0x11a410: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11a410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a414: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x11A414u;
    {
        const bool branch_taken_0x11a414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A414u;
            // 0x11a418: 0x3c024139  lui         $v0, 0x4139 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16697 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a414) {
            ctx->pc = 0x11A534u;
            goto label_11a534;
        }
    }
    ctx->pc = 0x11A41Cu;
    // 0x11a41c: 0x1bc00023  blez        $fp, . + 4 + (0x23 << 2)
    ctx->pc = 0x11A41Cu;
    {
        const bool branch_taken_0x11a41c = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x11a41c) {
            ctx->pc = 0x11A4ACu;
            goto label_11a4ac;
        }
    }
    ctx->pc = 0x11A424u;
    // 0x11a424: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a428: 0xdc251230  ld          $a1, 0x1230($at)
    ctx->pc = 0x11a428u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4656)));
    // 0x11a42c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A42Cu;
    SET_GPR_U32(ctx, 31, 0x11A434u);
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A434u; }
        if (ctx->pc != 0x11A434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A434u; }
        if (ctx->pc != 0x11A434u) { return; }
    }
    ctx->pc = 0x11A434u;
label_11a434:
    // 0x11a434: 0x3c033ff9  lui         $v1, 0x3FF9
    ctx->pc = 0x11a434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16377 << 16));
    // 0x11a438: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x11a438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x11a43c: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A43Cu;
    {
        const bool branch_taken_0x11a43c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x11A440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A43Cu;
            // 0x11a440: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a43c) {
            ctx->pc = 0x11A458u;
            goto label_11a458;
        }
    }
    ctx->pc = 0x11A444u;
    // 0x11a444: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a448: 0xdc301238  ld          $s0, 0x1238($at)
    ctx->pc = 0x11a448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 1), 4664)));
    // 0x11a44c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a450: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11A450u;
    {
        const bool branch_taken_0x11a450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A450u;
            // 0x11a454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a450) {
            ctx->pc = 0x11A47Cu;
            goto label_11a47c;
        }
    }
    ctx->pc = 0x11A458u;
label_11a458:
    // 0x11a458: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a45c: 0xdc251240  ld          $a1, 0x1240($at)
    ctx->pc = 0x11a45cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4672)));
    // 0x11a460: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a464: 0xdc301248  ld          $s0, 0x1248($at)
    ctx->pc = 0x11a464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 1), 4680)));
    // 0x11a468: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A468u;
    SET_GPR_U32(ctx, 31, 0x11A470u);
    ctx->pc = 0x11A46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A468u;
            // 0x11a46c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A470u; }
        if (ctx->pc != 0x11A470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A470u; }
        if (ctx->pc != 0x11A470u) { return; }
    }
    ctx->pc = 0x11A470u;
label_11a470:
    // 0x11a470: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a474: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a47c:
    // 0x11a47c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A47Cu;
    SET_GPR_U32(ctx, 31, 0x11A484u);
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A484u; }
        if (ctx->pc != 0x11A484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A484u; }
        if (ctx->pc != 0x11A484u) { return; }
    }
    ctx->pc = 0x11A484u;
label_11a484:
    // 0x11a484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a488: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a48c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A48Cu;
    SET_GPR_U32(ctx, 31, 0x11A494u);
    ctx->pc = 0x11A490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A48Cu;
            // 0x11a490: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A494u; }
        if (ctx->pc != 0x11A494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A494u; }
        if (ctx->pc != 0x11A494u) { return; }
    }
    ctx->pc = 0x11A494u;
label_11a494:
    // 0x11a494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a498: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A498u;
    SET_GPR_U32(ctx, 31, 0x11A4A0u);
    ctx->pc = 0x11A49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A498u;
            // 0x11a49c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A4A0u; }
        if (ctx->pc != 0x11A4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A4A0u; }
        if (ctx->pc != 0x11A4A0u) { return; }
    }
    ctx->pc = 0x11A4A0u;
label_11a4a0:
    // 0x11a4a0: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x11a4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x11a4a4: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x11A4A4u;
    {
        const bool branch_taken_0x11a4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A4A4u;
            // 0x11a4a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4a4) {
            ctx->pc = 0x11A88Cu;
            goto label_11a88c;
        }
    }
    ctx->pc = 0x11A4ACu;
label_11a4ac:
    // 0x11a4ac: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a4b0: 0xdc251250  ld          $a1, 0x1250($at)
    ctx->pc = 0x11a4b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4688)));
    // 0x11a4b4: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11A4B4u;
    SET_GPR_U32(ctx, 31, 0x11A4BCu);
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A4BCu; }
        if (ctx->pc != 0x11A4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A4BCu; }
        if (ctx->pc != 0x11A4BCu) { return; }
    }
    ctx->pc = 0x11A4BCu;
label_11a4bc:
    // 0x11a4bc: 0x3c033ff9  lui         $v1, 0x3FF9
    ctx->pc = 0x11a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16377 << 16));
    // 0x11a4c0: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x11a4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x11a4c4: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A4C4u;
    {
        const bool branch_taken_0x11a4c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x11A4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A4C4u;
            // 0x11a4c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4c4) {
            ctx->pc = 0x11A4E0u;
            goto label_11a4e0;
        }
    }
    ctx->pc = 0x11A4CCu;
    // 0x11a4cc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a4d0: 0xdc301258  ld          $s0, 0x1258($at)
    ctx->pc = 0x11a4d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 1), 4696)));
    // 0x11a4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11A4D8u;
    {
        const bool branch_taken_0x11a4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A4D8u;
            // 0x11a4dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4d8) {
            ctx->pc = 0x11A504u;
            goto label_11a504;
        }
    }
    ctx->pc = 0x11A4E0u;
label_11a4e0:
    // 0x11a4e0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a4e4: 0xdc251260  ld          $a1, 0x1260($at)
    ctx->pc = 0x11a4e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4704)));
    // 0x11a4e8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a4ec: 0xdc301268  ld          $s0, 0x1268($at)
    ctx->pc = 0x11a4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 1), 4712)));
    // 0x11a4f0: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11A4F0u;
    SET_GPR_U32(ctx, 31, 0x11A4F8u);
    ctx->pc = 0x11A4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A4F0u;
            // 0x11a4f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A4F8u; }
        if (ctx->pc != 0x11A4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A4F8u; }
        if (ctx->pc != 0x11A4F8u) { return; }
    }
    ctx->pc = 0x11A4F8u;
label_11a4f8:
    // 0x11a4f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a504:
    // 0x11a504: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11A504u;
    SET_GPR_U32(ctx, 31, 0x11A50Cu);
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A50Cu; }
        if (ctx->pc != 0x11A50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A50Cu; }
        if (ctx->pc != 0x11A50Cu) { return; }
    }
    ctx->pc = 0x11A50Cu;
label_11a50c:
    // 0x11a50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a514: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A514u;
    SET_GPR_U32(ctx, 31, 0x11A51Cu);
    ctx->pc = 0x11A518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A514u;
            // 0x11a518: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A51Cu; }
        if (ctx->pc != 0x11A51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A51Cu; }
        if (ctx->pc != 0x11A51Cu) { return; }
    }
    ctx->pc = 0x11A51Cu;
label_11a51c:
    // 0x11a51c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a520: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11A520u;
    SET_GPR_U32(ctx, 31, 0x11A528u);
    ctx->pc = 0x11A524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A520u;
            // 0x11a524: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A528u; }
        if (ctx->pc != 0x11A528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A528u; }
        if (ctx->pc != 0x11A528u) { return; }
    }
    ctx->pc = 0x11A528u;
label_11a528:
    // 0x11a528: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x11a528u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x11a52c: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x11A52Cu;
    {
        const bool branch_taken_0x11a52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A52Cu;
            // 0x11a530: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a52c) {
            ctx->pc = 0x11A88Cu;
            goto label_11a88c;
        }
    }
    ctx->pc = 0x11A534u;
label_11a534:
    // 0x11a534: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x11a534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x11a538: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11a538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a53c: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x11A53Cu;
    {
        const bool branch_taken_0x11a53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A53Cu;
            // 0x11a540: 0x3c027fef  lui         $v0, 0x7FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a53c) {
            ctx->pc = 0x11A764u;
            goto label_11a764;
        }
    }
    ctx->pc = 0x11A544u;
    // 0x11a544: 0xc0476cc  jal         func_11DB30
    ctx->pc = 0x11A544u;
    SET_GPR_U32(ctx, 31, 0x11A54Cu);
    ctx->pc = 0x11DB30u;
    if (runtime->hasFunction(0x11DB30u)) {
        auto targetFn = runtime->lookupFunction(0x11DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A54Cu; }
        if (ctx->pc != 0x11A54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fabs_0x11db30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A54Cu; }
        if (ctx->pc != 0x11A54Cu) { return; }
    }
    ctx->pc = 0x11A54Cu;
label_11a54c:
    // 0x11a54c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a550: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a554: 0xdc251270  ld          $a1, 0x1270($at)
    ctx->pc = 0x11a554u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4720)));
    // 0x11a558: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A558u;
    SET_GPR_U32(ctx, 31, 0x11A560u);
    ctx->pc = 0x11A55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A558u;
            // 0x11a55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A560u; }
        if (ctx->pc != 0x11A560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A560u; }
        if (ctx->pc != 0x11A560u) { return; }
    }
    ctx->pc = 0x11A560u;
label_11a560:
    // 0x11a560: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x11a560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x11a564: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11a564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11a568: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11A568u;
    SET_GPR_U32(ctx, 31, 0x11A570u);
    ctx->pc = 0x11A56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A568u;
            // 0x11a56c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A570u; }
        if (ctx->pc != 0x11A570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A570u; }
        if (ctx->pc != 0x11A570u) { return; }
    }
    ctx->pc = 0x11A570u;
label_11a570:
    // 0x11a570: 0xc0a218a  jal         func_288628
    ctx->pc = 0x11A570u;
    SET_GPR_U32(ctx, 31, 0x11A578u);
    ctx->pc = 0x11A574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A570u;
            // 0x11a574: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A578u; }
        if (ctx->pc != 0x11A578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A578u; }
        if (ctx->pc != 0x11A578u) { return; }
    }
    ctx->pc = 0x11A578u;
label_11a578:
    // 0x11a578: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11a578u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a57c: 0xc0a215c  jal         func_288570
    ctx->pc = 0x11A57Cu;
    SET_GPR_U32(ctx, 31, 0x11A584u);
    ctx->pc = 0x11A580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A57Cu;
            // 0x11a580: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A584u; }
        if (ctx->pc != 0x11A584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A584u; }
        if (ctx->pc != 0x11A584u) { return; }
    }
    ctx->pc = 0x11A584u;
label_11a584:
    // 0x11a584: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11a584u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a588: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a58c: 0xdc251278  ld          $a1, 0x1278($at)
    ctx->pc = 0x11a58cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4728)));
    // 0x11a590: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A590u;
    SET_GPR_U32(ctx, 31, 0x11A598u);
    ctx->pc = 0x11A594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A590u;
            // 0x11a594: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A598u; }
        if (ctx->pc != 0x11A598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A598u; }
        if (ctx->pc != 0x11A598u) { return; }
    }
    ctx->pc = 0x11A598u;
label_11a598:
    // 0x11a598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a59c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A59Cu;
    SET_GPR_U32(ctx, 31, 0x11A5A4u);
    ctx->pc = 0x11A5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A59Cu;
            // 0x11a5a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A5A4u; }
        if (ctx->pc != 0x11A5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A5A4u; }
        if (ctx->pc != 0x11A5A4u) { return; }
    }
    ctx->pc = 0x11A5A4u;
label_11a5a4:
    // 0x11a5a4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a5a8: 0xdc251280  ld          $a1, 0x1280($at)
    ctx->pc = 0x11a5a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4736)));
    // 0x11a5ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11a5acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5b0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A5B0u;
    SET_GPR_U32(ctx, 31, 0x11A5B8u);
    ctx->pc = 0x11A5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A5B0u;
            // 0x11a5b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A5B8u; }
        if (ctx->pc != 0x11A5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A5B8u; }
        if (ctx->pc != 0x11A5B8u) { return; }
    }
    ctx->pc = 0x11A5B8u;
label_11a5b8:
    // 0x11a5b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11a5b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5bc: 0x2ac20020  slti        $v0, $s6, 0x20
    ctx->pc = 0x11a5bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x11a5c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A5C0u;
    {
        const bool branch_taken_0x11a5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A5C0u;
            // 0x11a5c4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5c0) {
            ctx->pc = 0x11A5E4u;
            goto label_11a5e4;
        }
    }
    ctx->pc = 0x11A5C8u;
    // 0x11a5c8: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x11a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x11a5cc: 0x24421160  addiu       $v0, $v0, 0x1160
    ctx->pc = 0x11a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4448));
    // 0x11a5d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11a5d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a5d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a5dc: 0x1604004c  bne         $s0, $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x11A5DCu;
    {
        const bool branch_taken_0x11a5dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x11A5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A5DCu;
            // 0x11a5e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5dc) {
            ctx->pc = 0x11A710u;
            goto label_11a710;
        }
    }
    ctx->pc = 0x11A5E4u;
label_11a5e4:
    // 0x11a5e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5e8: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A5E8u;
    SET_GPR_U32(ctx, 31, 0x11A5F0u);
    ctx->pc = 0x11A5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A5E8u;
            // 0x11a5ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A5F0u; }
        if (ctx->pc != 0x11A5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A5F0u; }
        if (ctx->pc != 0x11A5F0u) { return; }
    }
    ctx->pc = 0x11A5F0u;
label_11a5f0:
    // 0x11a5f0: 0x10bd03  sra         $s7, $s0, 20
    ctx->pc = 0x11a5f0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 16), 20));
    // 0x11a5f4: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x11a5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x11a5f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11a5f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5fc: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x11a5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x11a600: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x11a600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x11a604: 0x2e38023  subu        $s0, $s7, $v1
    ctx->pc = 0x11a604u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x11a608: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11a608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11a60c: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x11A60Cu;
    {
        const bool branch_taken_0x11a60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a60c) {
            ctx->pc = 0x11A610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A60Cu;
            // 0x11a610: 0xde950000  ld          $s5, 0x0($s4) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A720u;
            goto label_11a720;
        }
    }
    ctx->pc = 0x11A614u;
    // 0x11a614: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a618: 0xdc251288  ld          $a1, 0x1288($at)
    ctx->pc = 0x11a618u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4744)));
    // 0x11a61c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a620: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A620u;
    SET_GPR_U32(ctx, 31, 0x11A628u);
    ctx->pc = 0x11A624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A620u;
            // 0x11a624: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A628u; }
        if (ctx->pc != 0x11A628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A628u; }
        if (ctx->pc != 0x11A628u) { return; }
    }
    ctx->pc = 0x11A628u;
label_11a628:
    // 0x11a628: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11a628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a62c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a630: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A630u;
    SET_GPR_U32(ctx, 31, 0x11A638u);
    ctx->pc = 0x11A634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A630u;
            // 0x11a634: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A638u; }
        if (ctx->pc != 0x11A638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A638u; }
        if (ctx->pc != 0x11A638u) { return; }
    }
    ctx->pc = 0x11A638u;
label_11a638:
    // 0x11a638: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a63c: 0xdc251290  ld          $a1, 0x1290($at)
    ctx->pc = 0x11a63cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4752)));
    // 0x11a640: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11a640u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a644: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A644u;
    SET_GPR_U32(ctx, 31, 0x11A64Cu);
    ctx->pc = 0x11A648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A644u;
            // 0x11a648: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A64Cu; }
        if (ctx->pc != 0x11A64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A64Cu; }
        if (ctx->pc != 0x11A64Cu) { return; }
    }
    ctx->pc = 0x11A64Cu;
label_11a64c:
    // 0x11a64c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a654: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A654u;
    SET_GPR_U32(ctx, 31, 0x11A65Cu);
    ctx->pc = 0x11A658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A654u;
            // 0x11a658: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A65Cu; }
        if (ctx->pc != 0x11A65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A65Cu; }
        if (ctx->pc != 0x11A65Cu) { return; }
    }
    ctx->pc = 0x11A65Cu;
label_11a65c:
    // 0x11a65c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11a65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a660: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A660u;
    SET_GPR_U32(ctx, 31, 0x11A668u);
    ctx->pc = 0x11A664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A660u;
            // 0x11a664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A668u; }
        if (ctx->pc != 0x11A668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A668u; }
        if (ctx->pc != 0x11A668u) { return; }
    }
    ctx->pc = 0x11A668u;
label_11a668:
    // 0x11a668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a66c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A66Cu;
    SET_GPR_U32(ctx, 31, 0x11A674u);
    ctx->pc = 0x11A670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A66Cu;
            // 0x11a670: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A674u; }
        if (ctx->pc != 0x11A674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A674u; }
        if (ctx->pc != 0x11A674u) { return; }
    }
    ctx->pc = 0x11A674u;
label_11a674:
    // 0x11a674: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11a674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a678: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a67c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A67Cu;
    SET_GPR_U32(ctx, 31, 0x11A684u);
    ctx->pc = 0x11A680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A67Cu;
            // 0x11a680: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A684u; }
        if (ctx->pc != 0x11A684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A684u; }
        if (ctx->pc != 0x11A684u) { return; }
    }
    ctx->pc = 0x11A684u;
label_11a684:
    // 0x11a684: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x11a684u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x11a688: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11a688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a68c: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x11a68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x11a690: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x11a690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x11a694: 0x2e38023  subu        $s0, $s7, $v1
    ctx->pc = 0x11a694u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x11a698: 0x2a020032  slti        $v0, $s0, 0x32
    ctx->pc = 0x11a698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x11a69c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x11A69Cu;
    {
        const bool branch_taken_0x11a69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a69c) {
            ctx->pc = 0x11A6A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A69Cu;
            // 0x11a6a0: 0xde950000  ld          $s5, 0x0($s4) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A720u;
            goto label_11a720;
        }
    }
    ctx->pc = 0x11A6A4u;
    // 0x11a6a4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a6a8: 0xdc251298  ld          $a1, 0x1298($at)
    ctx->pc = 0x11a6a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4760)));
    // 0x11a6ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6b0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A6B0u;
    SET_GPR_U32(ctx, 31, 0x11A6B8u);
    ctx->pc = 0x11A6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6B0u;
            // 0x11a6b4: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6B8u; }
        if (ctx->pc != 0x11A6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6B8u; }
        if (ctx->pc != 0x11A6B8u) { return; }
    }
    ctx->pc = 0x11A6B8u;
label_11a6b8:
    // 0x11a6b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11a6b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6c0: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A6C0u;
    SET_GPR_U32(ctx, 31, 0x11A6C8u);
    ctx->pc = 0x11A6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6C0u;
            // 0x11a6c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6C8u; }
        if (ctx->pc != 0x11A6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6C8u; }
        if (ctx->pc != 0x11A6C8u) { return; }
    }
    ctx->pc = 0x11A6C8u;
label_11a6c8:
    // 0x11a6c8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a6cc: 0xdc2512a0  ld          $a1, 0x12A0($at)
    ctx->pc = 0x11a6ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4768)));
    // 0x11a6d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11a6d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6d4: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A6D4u;
    SET_GPR_U32(ctx, 31, 0x11A6DCu);
    ctx->pc = 0x11A6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6D4u;
            // 0x11a6d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6DCu; }
        if (ctx->pc != 0x11A6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6DCu; }
        if (ctx->pc != 0x11A6DCu) { return; }
    }
    ctx->pc = 0x11A6DCu;
label_11a6dc:
    // 0x11a6dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6e4: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A6E4u;
    SET_GPR_U32(ctx, 31, 0x11A6ECu);
    ctx->pc = 0x11A6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6E4u;
            // 0x11a6e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6ECu; }
        if (ctx->pc != 0x11A6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6ECu; }
        if (ctx->pc != 0x11A6ECu) { return; }
    }
    ctx->pc = 0x11A6ECu;
label_11a6ec:
    // 0x11a6ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11a6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6f0: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A6F0u;
    SET_GPR_U32(ctx, 31, 0x11A6F8u);
    ctx->pc = 0x11A6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6F0u;
            // 0x11a6f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6F8u; }
        if (ctx->pc != 0x11A6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6F8u; }
        if (ctx->pc != 0x11A6F8u) { return; }
    }
    ctx->pc = 0x11A6F8u;
label_11a6f8:
    // 0x11a6f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6fc: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A6FCu;
    SET_GPR_U32(ctx, 31, 0x11A704u);
    ctx->pc = 0x11A700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6FCu;
            // 0x11a700: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A704u; }
        if (ctx->pc != 0x11A704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A704u; }
        if (ctx->pc != 0x11A704u) { return; }
    }
    ctx->pc = 0x11A704u;
label_11a704:
    // 0x11a704: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11a704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a708: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a70c: 0x0  nop
    ctx->pc = 0x11a70cu;
    // NOP
label_11a710:
    // 0x11a710: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A710u;
    SET_GPR_U32(ctx, 31, 0x11A718u);
    ctx->pc = 0x11A714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A710u;
            // 0x11a714: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A718u; }
        if (ctx->pc != 0x11A718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A718u; }
        if (ctx->pc != 0x11A718u) { return; }
    }
    ctx->pc = 0x11A718u;
label_11a718:
    // 0x11a718: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x11a718u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x11a71c: 0xde950000  ld          $s5, 0x0($s4)
    ctx->pc = 0x11a71cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_11a720:
    // 0x11a720: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a724: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A724u;
    SET_GPR_U32(ctx, 31, 0x11A72Cu);
    ctx->pc = 0x11A728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A724u;
            // 0x11a728: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A72Cu; }
        if (ctx->pc != 0x11A72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A72Cu; }
        if (ctx->pc != 0x11A72Cu) { return; }
    }
    ctx->pc = 0x11A72Cu;
label_11a72c:
    // 0x11a72c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a730: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A730u;
    SET_GPR_U32(ctx, 31, 0x11A738u);
    ctx->pc = 0x11A734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A730u;
            // 0x11a734: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A738u; }
        if (ctx->pc != 0x11A738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A738u; }
        if (ctx->pc != 0x11A738u) { return; }
    }
    ctx->pc = 0x11A738u;
label_11a738:
    // 0x11a738: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a73c: 0x7c10052  bgez        $fp, . + 4 + (0x52 << 2)
    ctx->pc = 0x11A73Cu;
    {
        const bool branch_taken_0x11a73c = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x11A740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A73Cu;
            // 0x11a740: 0xfe910008  sd          $s1, 0x8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a73c) {
            ctx->pc = 0x11A888u;
            goto label_11a888;
        }
    }
    ctx->pc = 0x11A744u;
    // 0x11a744: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11a744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a748: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x11a748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a74c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A74Cu;
    SET_GPR_U32(ctx, 31, 0x11A754u);
    ctx->pc = 0x11A750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A74Cu;
            // 0x11a750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A754u; }
        if (ctx->pc != 0x11A754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A754u; }
        if (ctx->pc != 0x11A754u) { return; }
    }
    ctx->pc = 0x11A754u;
label_11a754:
    // 0x11a754: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x11a754u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x11a758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a75c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x11A75Cu;
    {
        const bool branch_taken_0x11a75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A75Cu;
            // 0x11a760: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a75c) {
            ctx->pc = 0x11A874u;
            goto label_11a874;
        }
    }
    ctx->pc = 0x11A764u;
label_11a764:
    // 0x11a764: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11a764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11a768: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11a768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a76c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A76Cu;
    {
        const bool branch_taken_0x11a76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A76Cu;
            // 0x11a770: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a76c) {
            ctx->pc = 0x11A790u;
            goto label_11a790;
        }
    }
    ctx->pc = 0x11A774u;
    // 0x11a774: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A774u;
    SET_GPR_U32(ctx, 31, 0x11A77Cu);
    ctx->pc = 0x11A778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A774u;
            // 0x11a778: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A77Cu; }
        if (ctx->pc != 0x11A77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A77Cu; }
        if (ctx->pc != 0x11A77Cu) { return; }
    }
    ctx->pc = 0x11A77Cu;
label_11a77c:
    // 0x11a77c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11a77cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a780: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x11a780u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x11a784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11a784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a788: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x11A788u;
    {
        const bool branch_taken_0x11a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A788u;
            // 0x11a78c: 0xfe830008  sd          $v1, 0x8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a788) {
            ctx->pc = 0x11A88Cu;
            goto label_11a88c;
        }
    }
    ctx->pc = 0x11A790u;
label_11a790:
    // 0x11a790: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11a790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11a794: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11a794u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11a798: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11a798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11a79c: 0x102503  sra         $a0, $s0, 20
    ctx->pc = 0x11a79cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 20));
    // 0x11a7a0: 0x2493fbea  addiu       $s3, $a0, -0x416
    ctx->pc = 0x11a7a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966250));
    // 0x11a7a4: 0x131d00  sll         $v1, $s3, 20
    ctx->pc = 0x11a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
    // 0x11a7a8: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x11a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11a7ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11a7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11a7b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11a7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11a7b4: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x11a7b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11a7b8: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x11a7b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11a7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a7c0:
    // 0x11a7c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7c4: 0xc0a218a  jal         func_288628
    ctx->pc = 0x11A7C4u;
    SET_GPR_U32(ctx, 31, 0x11A7CCu);
    ctx->pc = 0x11A7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7C4u;
            // 0x11a7c8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7CCu; }
        if (ctx->pc != 0x11A7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7CCu; }
        if (ctx->pc != 0x11A7CCu) { return; }
    }
    ctx->pc = 0x11A7CCu;
label_11a7cc:
    // 0x11a7cc: 0xc0a215c  jal         func_288570
    ctx->pc = 0x11A7CCu;
    SET_GPR_U32(ctx, 31, 0x11A7D4u);
    ctx->pc = 0x11A7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7CCu;
            // 0x11a7d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7D4u; }
        if (ctx->pc != 0x11A7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7D4u; }
        if (ctx->pc != 0x11A7D4u) { return; }
    }
    ctx->pc = 0x11A7D4u;
label_11a7d4:
    // 0x11a7d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7d8: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x11a7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x11a7dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7e0: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A7E0u;
    SET_GPR_U32(ctx, 31, 0x11A7E8u);
    ctx->pc = 0x11A7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7E0u;
            // 0x11a7e4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7E8u; }
        if (ctx->pc != 0x11A7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7E8u; }
        if (ctx->pc != 0x11A7E8u) { return; }
    }
    ctx->pc = 0x11A7E8u;
label_11a7e8:
    // 0x11a7e8: 0x340582e0  ori         $a1, $zero, 0x82E0
    ctx->pc = 0x11a7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x11a7ec: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x11a7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x11a7f0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A7F0u;
    SET_GPR_U32(ctx, 31, 0x11A7F8u);
    ctx->pc = 0x11A7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7F0u;
            // 0x11a7f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7F8u; }
        if (ctx->pc != 0x11A7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7F8u; }
        if (ctx->pc != 0x11A7F8u) { return; }
    }
    ctx->pc = 0x11A7F8u;
label_11a7f8:
    // 0x11a7f8: 0x601fff1  bgez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x11A7F8u;
    {
        const bool branch_taken_0x11a7f8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11A7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7F8u;
            // 0x11a7fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7f8) {
            ctx->pc = 0x11A7C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a7c0;
        }
    }
    ctx->pc = 0x11A800u;
    // 0x11a800: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a804: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11A804u;
    {
        const bool branch_taken_0x11a804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A804u;
            // 0x11a808: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a804) {
            ctx->pc = 0x11A814u;
            goto label_11a814;
        }
    }
    ctx->pc = 0x11A80Cu;
    // 0x11a80c: 0x0  nop
    ctx->pc = 0x11a80cu;
    // NOP
label_11a810:
    // 0x11a810: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x11a810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a814:
    // 0x11a814: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x11a814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x11a818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a81c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x11a820: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11a820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11a824: 0xc0a2148  jal         func_288520
    ctx->pc = 0x11A824u;
    SET_GPR_U32(ctx, 31, 0x11A82Cu);
    ctx->pc = 0x11A828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A824u;
            // 0x11a828: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A82Cu; }
        if (ctx->pc != 0x11A82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A82Cu; }
        if (ctx->pc != 0x11A82Cu) { return; }
    }
    ctx->pc = 0x11A82Cu;
label_11a82c:
    // 0x11a82c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11A82Cu;
    {
        const bool branch_taken_0x11a82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A82Cu;
            // 0x11a830: 0x3c090036  lui         $t1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a82c) {
            ctx->pc = 0x11A810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a810;
        }
    }
    ctx->pc = 0x11A834u;
    // 0x11a834: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x11a834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a838: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11a838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a83c: 0x25291058  addiu       $t1, $t1, 0x1058
    ctx->pc = 0x11a83cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4184));
    // 0x11a840: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11a840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a844: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11a844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a848: 0xc046e92  jal         func_11BA48
    ctx->pc = 0x11A848u;
    SET_GPR_U32(ctx, 31, 0x11A850u);
    ctx->pc = 0x11A84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A848u;
            // 0x11a84c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BA48u;
    if (runtime->hasFunction(0x11BA48u)) {
        auto targetFn = runtime->lookupFunction(0x11BA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A850u; }
        if (ctx->pc != 0x11A850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_rem_pio2_0x11ba48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A850u; }
        if (ctx->pc != 0x11A850u) { return; }
    }
    ctx->pc = 0x11A850u;
label_11a850:
    // 0x11a850: 0x7c1000d  bgez        $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x11A850u;
    {
        const bool branch_taken_0x11a850 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x11A854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A850u;
            // 0x11a854: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a850) {
            ctx->pc = 0x11A888u;
            goto label_11a888;
        }
    }
    ctx->pc = 0x11A858u;
    // 0x11a858: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11a858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a85c: 0xde850000  ld          $a1, 0x0($s4)
    ctx->pc = 0x11a85cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11a860: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A860u;
    SET_GPR_U32(ctx, 31, 0x11A868u);
    ctx->pc = 0x11A864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A860u;
            // 0x11a864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A868u; }
        if (ctx->pc != 0x11A868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A868u; }
        if (ctx->pc != 0x11A868u) { return; }
    }
    ctx->pc = 0x11A868u;
label_11a868:
    // 0x11a868: 0xde850008  ld          $a1, 0x8($s4)
    ctx->pc = 0x11a868u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x11a86c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a870: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x11a870u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_11a874:
    // 0x11a874: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A874u;
    SET_GPR_U32(ctx, 31, 0x11A87Cu);
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A87Cu; }
        if (ctx->pc != 0x11A87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A87Cu; }
        if (ctx->pc != 0x11A87Cu) { return; }
    }
    ctx->pc = 0x11A87Cu;
label_11a87c:
    // 0x11a87c: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x11a87cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x11a880: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11A880u;
    {
        const bool branch_taken_0x11a880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A880u;
            // 0x11a884: 0x161023  negu        $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a880) {
            ctx->pc = 0x11A88Cu;
            goto label_11a88c;
        }
    }
    ctx->pc = 0x11A888u;
label_11a888:
    // 0x11a888: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x11a888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11a88c:
    // 0x11a88c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x11a88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11a890: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x11a890u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11a894: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x11a894u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11a898: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x11a898u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11a89c: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x11a89cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11a8a0: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x11a8a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a8a4: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x11a8a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a8a8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x11a8a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a8ac: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x11a8acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a8b0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11a8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x11A8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A8B4u;
            // 0x11a8b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A8BCu;
}
