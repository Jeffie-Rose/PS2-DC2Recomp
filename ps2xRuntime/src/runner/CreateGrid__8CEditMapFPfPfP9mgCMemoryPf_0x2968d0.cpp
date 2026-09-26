#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateGrid__8CEditMapFPfPfP9mgCMemoryPf
// Address: 0x2968d0 - 0x296b7c
void CreateGrid__8CEditMapFPfPfP9mgCMemoryPf_0x2968d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateGrid__8CEditMapFPfPfP9mgCMemoryPf_0x2968d0");
#endif

    switch (ctx->pc) {
        case 0x296948u: goto label_296948;
        case 0x296974u: goto label_296974;
        case 0x296988u: goto label_296988;
        case 0x2969a0u: goto label_2969a0;
        case 0x2969acu: goto label_2969ac;
        case 0x2969bcu: goto label_2969bc;
        case 0x2969e0u: goto label_2969e0;
        case 0x296a18u: goto label_296a18;
        case 0x296a2cu: goto label_296a2c;
        case 0x296a40u: goto label_296a40;
        case 0x296a6cu: goto label_296a6c;
        case 0x296aa8u: goto label_296aa8;
        case 0x296ab0u: goto label_296ab0;
        case 0x296b20u: goto label_296b20;
        default: break;
    }

    ctx->pc = 0x2968d0u;

    // 0x2968d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2968d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2968d4: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2968d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2968d8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2968d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2968dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2968dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2968e0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2968e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2968e4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2968e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2968e8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2968e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2968ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2968ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2968f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2968f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2968f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2968f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2968f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2968f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2968fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2968fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296900: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x296900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x296904: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x296904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296908: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x296908u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29690c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x29690cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296910: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x296910u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x296914: 0xc4d40000  lwc1        $f20, 0x0($a2)
    ctx->pc = 0x296914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x296918: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x296918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29691c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x29691cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296920: 0xc4d50008  lwc1        $f21, 0x8($a2)
    ctx->pc = 0x296920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x296924: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x296924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296928: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x296928u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x29692c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x29692cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x296930: 0x46030303  div.s       $f12, $f0, $f3
    ctx->pc = 0x296930u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x296934: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x296934u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x296938: 0x0  nop
    ctx->pc = 0x296938u;
    // NOP
    // 0x29693c: 0x0  nop
    ctx->pc = 0x29693cu;
    // NOP
    // 0x296940: 0xc0a248c  jal         func_289230
    ctx->pc = 0x296940u;
    SET_GPR_U32(ctx, 31, 0x296948u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296948u; }
        if (ctx->pc != 0x296948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296948u; }
        if (ctx->pc != 0x296948u) { return; }
    }
    ctx->pc = 0x296948u;
label_296948:
    // 0x296948: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x296948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29694c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29694cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296950: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x296950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x296954: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x296954u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x296958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29695c: 0x0  nop
    ctx->pc = 0x29695cu;
    // NOP
    // 0x296960: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x296960u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x296964: 0x0  nop
    ctx->pc = 0x296964u;
    // NOP
    // 0x296968: 0x0  nop
    ctx->pc = 0x296968u;
    // NOP
    // 0x29696c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x29696Cu;
    SET_GPR_U32(ctx, 31, 0x296974u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296974u; }
        if (ctx->pc != 0x296974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296974u; }
        if (ctx->pc != 0x296974u) { return; }
    }
    ctx->pc = 0x296974u;
label_296974:
    // 0x296974: 0x8e240f50  lw          $a0, 0xF50($s1)
    ctx->pc = 0x296974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3920)));
    // 0x296978: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x296978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29697c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29697cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296980: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x296980u;
    {
        const bool branch_taken_0x296980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296980u;
            // 0x296984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296980) {
            ctx->pc = 0x296B40u;
            goto label_296b40;
        }
    }
    ctx->pc = 0x296988u;
label_296988:
    // 0x296988: 0x8c630f54  lw          $v1, 0xF54($v1)
    ctx->pc = 0x296988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3924)));
    // 0x29698c: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x29698Cu;
    {
        const bool branch_taken_0x29698c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29698c) {
            ctx->pc = 0x296B38u;
            goto label_296b38;
        }
    }
    ctx->pc = 0x296994u;
    // 0x296994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296998: 0xc04e748  jal         func_139D20
    ctx->pc = 0x296998u;
    SET_GPR_U32(ctx, 31, 0x2969A0u);
    ctx->pc = 0x29699Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296998u;
            // 0x29699c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2969A0u; }
        if (ctx->pc != 0x2969A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2969A0u; }
        if (ctx->pc != 0x2969A0u) { return; }
    }
    ctx->pc = 0x2969A0u;
label_2969a0:
    // 0x2969a0: 0x24040130  addiu       $a0, $zero, 0x130
    ctx->pc = 0x2969a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x2969a4: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2969A4u;
    SET_GPR_U32(ctx, 31, 0x2969ACu);
    ctx->pc = 0x2969A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2969A4u;
            // 0x2969a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2969ACu; }
        if (ctx->pc != 0x2969ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2969ACu; }
        if (ctx->pc != 0x2969ACu) { return; }
    }
    ctx->pc = 0x2969ACu;
label_2969ac:
    // 0x2969ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2969ACu;
    {
        const bool branch_taken_0x2969ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2969B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2969ACu;
            // 0x2969b0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969ac) {
            ctx->pc = 0x2969BCu;
            goto label_2969bc;
        }
    }
    ctx->pc = 0x2969B4u;
    // 0x2969b4: 0xc0a5e24  jal         func_297890
    ctx->pc = 0x2969B4u;
    SET_GPR_U32(ctx, 31, 0x2969BCu);
    ctx->pc = 0x2969B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2969B4u;
            // 0x2969b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297890u;
    if (runtime->hasFunction(0x297890u)) {
        auto targetFn = runtime->lookupFunction(0x297890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2969BCu; }
        if (ctx->pc != 0x2969BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CEditGridFv_0x297890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2969BCu; }
        if (ctx->pc != 0x2969BCu) { return; }
    }
    ctx->pc = 0x2969BCu;
label_2969bc:
    // 0x2969bc: 0x14a080  sll         $s4, $s4, 2
    ctx->pc = 0x2969bcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2969c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2969c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2969c4: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x2969c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2969c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2969c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2969cc: 0xac550f54  sw          $s5, 0xF54($v0)
    ctx->pc = 0x2969ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3924), GPR_U32(ctx, 21));
    // 0x2969d0: 0x24500f54  addiu       $s0, $v0, 0xF54
    ctx->pc = 0x2969d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3924));
    // 0x2969d4: 0x8c440f54  lw          $a0, 0xF54($v0)
    ctx->pc = 0x2969d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3924)));
    // 0x2969d8: 0xc0a5ddc  jal         func_297770
    ctx->pc = 0x2969D8u;
    SET_GPR_U32(ctx, 31, 0x2969E0u);
    ctx->pc = 0x2969DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2969D8u;
            // 0x2969dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297770u;
    if (runtime->hasFunction(0x297770u)) {
        auto targetFn = runtime->lookupFunction(0x297770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2969E0u; }
        if (ctx->pc != 0x2969E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Create__9CEditGridFiiP9mgCMemory_0x297770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2969E0u; }
        if (ctx->pc != 0x2969E0u) { return; }
    }
    ctx->pc = 0x2969E0u;
label_2969e0:
    // 0x2969e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2969e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2969e4: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2969e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2969e8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2969e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x2969ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2969ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2969f0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2969f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2969f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2969f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2969f8: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x2969f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2969fc: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2969fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296a00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x296a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296a04: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x296a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x296a08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x296a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296a0c: 0xe4550028  swc1        $f21, 0x28($v0)
    ctx->pc = 0x296a0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x296a10: 0xc0a5e18  jal         func_297860
    ctx->pc = 0x296A10u;
    SET_GPR_U32(ctx, 31, 0x296A18u);
    ctx->pc = 0x296A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296A10u;
            // 0x296a14: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297860u;
    if (runtime->hasFunction(0x297860u)) {
        auto targetFn = runtime->lookupFunction(0x297860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296A18u; }
        if (ctx->pc != 0x296A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__9CEditGridFv_0x297860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296A18u; }
        if (ctx->pc != 0x296A18u) { return; }
    }
    ctx->pc = 0x296A18u;
label_296a18:
    // 0x296a18: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x296a18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x296a1c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x296A1Cu;
    {
        const bool branch_taken_0x296a1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296A1Cu;
            // 0x296a20: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a1c) {
            ctx->pc = 0x296AA0u;
            goto label_296aa0;
        }
    }
    ctx->pc = 0x296A24u;
    // 0x296a24: 0x2665fff8  addiu       $a1, $s3, -0x8
    ctx->pc = 0x296a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    // 0x296a28: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x296a28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_296a2c:
    // 0x296a2c: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x296A2Cu;
    {
        const bool branch_taken_0x296a2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296A2Cu;
            // 0x296a30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a2c) {
            ctx->pc = 0x296A8Cu;
            goto label_296a8c;
        }
    }
    ctx->pc = 0x296A34u;
    // 0x296a34: 0x2a610009  slti        $at, $s3, 0x9
    ctx->pc = 0x296a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x296a38: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x296A38u;
    {
        const bool branch_taken_0x296a38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x296a38) {
            ctx->pc = 0x296A5Cu;
            goto label_296a5c;
        }
    }
    ctx->pc = 0x296A40u;
label_296a40:
    // 0x296a40: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x296a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x296a44: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x296a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x296a48: 0x0  nop
    ctx->pc = 0x296a48u;
    // NOP
    // 0x296a4c: 0x0  nop
    ctx->pc = 0x296a4cu;
    // NOP
    // 0x296a50: 0x0  nop
    ctx->pc = 0x296a50u;
    // NOP
    // 0x296a54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x296A54u;
    {
        const bool branch_taken_0x296a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296a54) {
            ctx->pc = 0x296A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296a40;
        }
    }
    ctx->pc = 0x296A5Cu;
label_296a5c:
    // 0x296a5c: 0x0  nop
    ctx->pc = 0x296a5cu;
    // NOP
    // 0x296a60: 0x93082a  slt         $at, $a0, $s3
    ctx->pc = 0x296a60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x296a64: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x296A64u;
    {
        const bool branch_taken_0x296a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x296a64) {
            ctx->pc = 0x296A8Cu;
            goto label_296a8c;
        }
    }
    ctx->pc = 0x296A6Cu;
label_296a6c:
    // 0x296a6c: 0x0  nop
    ctx->pc = 0x296a6cu;
    // NOP
    // 0x296a70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x296a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296a74: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x296a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x296a78: 0x0  nop
    ctx->pc = 0x296a78u;
    // NOP
    // 0x296a7c: 0x0  nop
    ctx->pc = 0x296a7cu;
    // NOP
    // 0x296a80: 0x0  nop
    ctx->pc = 0x296a80u;
    // NOP
    // 0x296a84: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x296A84u;
    {
        const bool branch_taken_0x296a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296a84) {
            ctx->pc = 0x296A6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296a6c;
        }
    }
    ctx->pc = 0x296A8Cu;
label_296a8c:
    // 0x296a8c: 0x0  nop
    ctx->pc = 0x296a8cu;
    // NOP
    // 0x296a90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296a94: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x296a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x296a98: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x296A98u;
    {
        const bool branch_taken_0x296a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296A98u;
            // 0x296a9c: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a98) {
            ctx->pc = 0x296A2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296a2c;
        }
    }
    ctx->pc = 0x296AA0u;
label_296aa0:
    // 0x296aa0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x296aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296aa4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x296aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296aa8:
    // 0x296aa8: 0xc04c050  jal         func_130140
    ctx->pc = 0x296AA8u;
    SET_GPR_U32(ctx, 31, 0x296AB0u);
    ctx->pc = 0x296AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296AA8u;
            // 0x296aac: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296AB0u; }
        if (ctx->pc != 0x296AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296AB0u; }
        if (ctx->pc != 0x296AB0u) { return; }
    }
    ctx->pc = 0x296AB0u;
label_296ab0:
    // 0x296ab0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x296ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296ab4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x296AB4u;
    {
        const bool branch_taken_0x296ab4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x296AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296AB4u;
            // 0x296ab8: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ab4) {
            ctx->pc = 0x296AD0u;
            goto label_296ad0;
        }
    }
    ctx->pc = 0x296ABCu;
    // 0x296abc: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x296abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x296ac0: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x296ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x296ac4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x296ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x296ac8: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x296ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x296acc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x296accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_296ad0:
    // 0x296ad0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x296ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x296ad4: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296AD4u;
    {
        const bool branch_taken_0x296ad4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x296AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296AD4u;
            // 0x296ad8: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ad4) {
            ctx->pc = 0x296AE4u;
            goto label_296ae4;
        }
    }
    ctx->pc = 0x296ADCu;
    // 0x296adc: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x296adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x296ae0: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x296ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_296ae4:
    // 0x296ae4: 0x0  nop
    ctx->pc = 0x296ae4u;
    // NOP
    // 0x296ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296aec: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x296AECu;
    {
        const bool branch_taken_0x296aec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x296AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296AECu;
            // 0x296af0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296aec) {
            ctx->pc = 0x296B08u;
            goto label_296b08;
        }
    }
    ctx->pc = 0x296AF4u;
    // 0x296af4: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x296af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x296af8: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x296af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x296afc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x296afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x296b00: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x296b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x296b04: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x296b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_296b08:
    // 0x296b08: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x296b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x296b0c: 0x8c420f54  lw          $v0, 0xF54($v0)
    ctx->pc = 0x296b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3924)));
    // 0x296b10: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x296b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x296b14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x296b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x296b18: 0xc041c60  jal         func_107180
    ctx->pc = 0x296B18u;
    SET_GPR_U32(ctx, 31, 0x296B20u);
    ctx->pc = 0x296B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296B18u;
            // 0x296b1c: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296B20u; }
        if (ctx->pc != 0x296B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296B20u; }
        if (ctx->pc != 0x296B20u) { return; }
    }
    ctx->pc = 0x296B20u;
label_296b20:
    // 0x296b20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x296b24: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x296b24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x296b28: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x296B28u;
    {
        const bool branch_taken_0x296b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296B28u;
            // 0x296b2c: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b28) {
            ctx->pc = 0x296AA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296aa8;
        }
    }
    ctx->pc = 0x296B30u;
    // 0x296b30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x296B30u;
    {
        const bool branch_taken_0x296b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296B30u;
            // 0x296b34: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b30) {
            ctx->pc = 0x296B50u;
            goto label_296b50;
        }
    }
    ctx->pc = 0x296B38u;
label_296b38:
    // 0x296b38: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x296b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x296b3c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x296b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_296b40:
    // 0x296b40: 0x284182a  slt         $v1, $s4, $a0
    ctx->pc = 0x296b40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x296b44: 0x1460ff90  bnez        $v1, . + 4 + (-0x70 << 2)
    ctx->pc = 0x296B44u;
    {
        const bool branch_taken_0x296b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296B44u;
            // 0x296b48: 0x2251821  addu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b44) {
            ctx->pc = 0x296988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296988;
        }
    }
    ctx->pc = 0x296B4Cu;
    // 0x296b4c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x296b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_296b50:
    // 0x296b50: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x296b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x296b54: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x296b54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x296b58: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x296b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x296b5c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x296b5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x296b60: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x296b60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296b64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x296b64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296b68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x296b68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296b6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x296b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296b70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x296b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296b74: 0x3e00008  jr          $ra
    ctx->pc = 0x296B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296B74u;
            // 0x296b78: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296B7Cu;
}
