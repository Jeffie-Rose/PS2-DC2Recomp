#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RefreshParam__13CFishAquariumFv
// Address: 0x19a4f0 - 0x19a7fc
void RefreshParam__13CFishAquariumFv_0x19a4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RefreshParam__13CFishAquariumFv_0x19a4f0");
#endif

    switch (ctx->pc) {
        case 0x19a528u: goto label_19a528;
        case 0x19a53cu: goto label_19a53c;
        case 0x19a544u: goto label_19a544;
        case 0x19a5a8u: goto label_19a5a8;
        case 0x19a5dcu: goto label_19a5dc;
        case 0x19a5f0u: goto label_19a5f0;
        case 0x19a60cu: goto label_19a60c;
        case 0x19a624u: goto label_19a624;
        case 0x19a644u: goto label_19a644;
        case 0x19a6b8u: goto label_19a6b8;
        case 0x19a6c4u: goto label_19a6c4;
        case 0x19a6f0u: goto label_19a6f0;
        case 0x19a6f8u: goto label_19a6f8;
        case 0x19a730u: goto label_19a730;
        case 0x19a780u: goto label_19a780;
        case 0x19a794u: goto label_19a794;
        case 0x19a7c4u: goto label_19a7c4;
        default: break;
    }

    ctx->pc = 0x19a4f0u;

    // 0x19a4f0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x19a4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x19a4f4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x19a4f8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x19a4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x19a4fc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x19a4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x19a500: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x19a500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x19a504: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x19a504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x19a508: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x19a508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x19a50c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19a50cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a510: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19a510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x19a514: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19a514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19a518: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19a51c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19a51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19a520: 0xc064220  jal         func_190880
    ctx->pc = 0x19A520u;
    SET_GPR_U32(ctx, 31, 0x19A528u);
    ctx->pc = 0x19A524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A520u;
            // 0x19a524: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A528u; }
        if (ctx->pc != 0x19A528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A528u; }
        if (ctx->pc != 0x19A528u) { return; }
    }
    ctx->pc = 0x19A528u;
label_19a528:
    // 0x19a528: 0x8c431a00  lw          $v1, 0x1A00($v0)
    ctx->pc = 0x19a528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6656)));
    // 0x19a52c: 0xdea20520  ld          $v0, 0x520($s5)
    ctx->pc = 0x19a52cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 1312)));
    // 0x19a530: 0x62b02f  dsubu       $s6, $v1, $v0
    ctx->pc = 0x19a530u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x19a534: 0xc06421c  jal         func_190870
    ctx->pc = 0x19A534u;
    SET_GPR_U32(ctx, 31, 0x19A53Cu);
    ctx->pc = 0x19A538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A534u;
            // 0x19a538: 0xfea30520  sd          $v1, 0x520($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 1312), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A53Cu; }
        if (ctx->pc != 0x19A53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A53Cu; }
        if (ctx->pc != 0x19A53Cu) { return; }
    }
    ctx->pc = 0x19A53Cu;
label_19a53c:
    // 0x19a53c: 0xc06421c  jal         func_190870
    ctx->pc = 0x19A53Cu;
    SET_GPR_U32(ctx, 31, 0x19A544u);
    ctx->pc = 0x19A540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A53Cu;
            // 0x19a540: 0x8c542f68  lw          $s4, 0x2F68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A544u; }
        if (ctx->pc != 0x19A544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A544u; }
        if (ctx->pc != 0x19A544u) { return; }
    }
    ctx->pc = 0x19A544u;
label_19a544:
    // 0x19a544: 0xc4542f6c  lwc1        $f20, 0x2F6C($v0)
    ctx->pc = 0x19a544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19a548: 0xc6a0052c  lwc1        $f0, 0x52C($s5)
    ctx->pc = 0x19a548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a54c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19a54cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a550: 0x8ea20528  lw          $v0, 0x528($s5)
    ctx->pc = 0x19a550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1320)));
    // 0x19a554: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x19a554u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x19a558: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x19a558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a55c: 0x0  nop
    ctx->pc = 0x19a55cu;
    // NOP
    // 0x19a560: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x19A560u;
    {
        const bool branch_taken_0x19a560 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19A564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A560u;
            // 0x19a564: 0x2821823  subu        $v1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a560) {
            ctx->pc = 0x19A588u;
            goto label_19a588;
        }
    }
    ctx->pc = 0x19A568u;
    // 0x19a568: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x19a568u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19a56c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A56Cu;
    {
        const bool branch_taken_0x19a56c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A56Cu;
            // 0x19a570: 0x3c0241c0  lui         $v0, 0x41C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a56c) {
            ctx->pc = 0x19A588u;
            goto label_19a588;
        }
    }
    ctx->pc = 0x19A574u;
    // 0x19a574: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19a574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19a578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a57c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A57Cu;
    {
        const bool branch_taken_0x19a57c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19A580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A57Cu;
            // 0x19a580: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a57c) {
            ctx->pc = 0x19A588u;
            goto label_19a588;
        }
    }
    ctx->pc = 0x19A584u;
    // 0x19a584: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19a584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a588:
    // 0x19a588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19a588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a58c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x19a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x19a590: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a594: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x19a594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x19a598: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19a598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19a59c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19a59cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19a5a0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19A5A0u;
    SET_GPR_U32(ctx, 31, 0x19A5A8u);
    ctx->pc = 0x19A5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5A0u;
            // 0x19a5a4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5A8u; }
        if (ctx->pc != 0x19A5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5A8u; }
        if (ctx->pc != 0x19A5A8u) { return; }
    }
    ctx->pc = 0x19A5A8u;
label_19a5a8:
    // 0x19a5a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a5ac: 0x0  nop
    ctx->pc = 0x19a5acu;
    // NOP
    // 0x19a5b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19a5b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19a5b4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x19a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x19a5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a5bc: 0x0  nop
    ctx->pc = 0x19a5bcu;
    // NOP
    // 0x19a5c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19a5c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a5c4: 0x0  nop
    ctx->pc = 0x19a5c4u;
    // NOP
    // 0x19a5c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x19A5C8u;
    {
        const bool branch_taken_0x19a5c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19A5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5C8u;
            // 0x19a5cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a5c8) {
            ctx->pc = 0x19A5D8u;
            goto label_19a5d8;
        }
    }
    ctx->pc = 0x19A5D0u;
    // 0x19a5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a5d4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x19a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_19a5d8:
    // 0x19a5d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19a5d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a5dc:
    // 0x19a5dc: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x19a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x19a5e0: 0x16283c  dsll32      $a1, $s6, 0
    ctx->pc = 0x19a5e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) << (32 + 0));
    // 0x19a5e4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x19a5e4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x19a5e8: 0xc06660c  jal         func_199830
    ctx->pc = 0x19A5E8u;
    SET_GPR_U32(ctx, 31, 0x19A5F0u);
    ctx->pc = 0x19A5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5E8u;
            // 0x19a5ec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199830u;
    if (runtime->hasFunction(0x199830u)) {
        auto targetFn = runtime->lookupFunction(0x199830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5F0u; }
        if (ctx->pc != 0x19A5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TimeCheck__13CGameDataUsedFi_0x199830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5F0u; }
        if (ctx->pc != 0x19A5F0u) { return; }
    }
    ctx->pc = 0x19A5F0u;
label_19a5f0:
    // 0x19a5f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19a5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19a5f4: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x19a5f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19a5f8: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19A5F8u;
    {
        const bool branch_taken_0x19a5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5F8u;
            // 0x19a5fc: 0x2631006c  addiu       $s1, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a5f8) {
            ctx->pc = 0x19A5DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19a5dc;
        }
    }
    ctx->pc = 0x19A600u;
    // 0x19a600: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19a600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a604: 0xc066904  jal         func_19A410
    ctx->pc = 0x19A604u;
    SET_GPR_U32(ctx, 31, 0x19A60Cu);
    ctx->pc = 0x19A608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A604u;
            // 0x19a608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A410u;
    if (runtime->hasFunction(0x19A410u)) {
        auto targetFn = runtime->lookupFunction(0x19A410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A60Cu; }
        if (ctx->pc != 0x19A60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumFishNum__13CFishAquariumFi_0x19a410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A60Cu; }
        if (ctx->pc != 0x19A60Cu) { return; }
    }
    ctx->pc = 0x19A60Cu;
label_19a60c:
    // 0x19a60c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x19a60cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19a610: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A610u;
    {
        const bool branch_taken_0x19a610 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A610u;
            // 0x19a614: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a610) {
            ctx->pc = 0x19A61Cu;
            goto label_19a61c;
        }
    }
    ctx->pc = 0x19A618u;
    // 0x19a618: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x19a618u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_19a61c:
    // 0x19a61c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19a61cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a620: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x19a620u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a624:
    // 0x19a624: 0x2be9021  addu        $s2, $s5, $fp
    ctx->pc = 0x19a624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x19a628: 0x8642028e  lh          $v0, 0x28E($s2)
    ctx->pc = 0x19a628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 654)));
    // 0x19a62c: 0x1840004e  blez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x19A62Cu;
    {
        const bool branch_taken_0x19a62c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19A630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A62Cu;
            // 0x19a630: 0x2653028c  addiu       $s3, $s2, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 652));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a62c) {
            ctx->pc = 0x19A768u;
            goto label_19a768;
        }
    }
    ctx->pc = 0x19A634u;
    // 0x19a634: 0x16283c  dsll32      $a1, $s6, 0
    ctx->pc = 0x19a634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) << (32 + 0));
    // 0x19a638: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x19a638u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x19a63c: 0xc06660c  jal         func_199830
    ctx->pc = 0x19A63Cu;
    SET_GPR_U32(ctx, 31, 0x19A644u);
    ctx->pc = 0x19A640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A63Cu;
            // 0x19a640: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199830u;
    if (runtime->hasFunction(0x199830u)) {
        auto targetFn = runtime->lookupFunction(0x199830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A644u; }
        if (ctx->pc != 0x19A644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TimeCheck__13CGameDataUsedFi_0x199830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A644u; }
        if (ctx->pc != 0x19A644u) { return; }
    }
    ctx->pc = 0x19A644u;
label_19a644:
    // 0x19a644: 0x264202dc  addiu       $v0, $s2, 0x2DC
    ctx->pc = 0x19a644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 732));
    // 0x19a648: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x19a648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x19a64c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a64cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a650: 0x8e4302dc  lw          $v1, 0x2DC($s2)
    ctx->pc = 0x19a650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 732)));
    // 0x19a654: 0x264202e0  addiu       $v0, $s2, 0x2E0
    ctx->pc = 0x19a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
    // 0x19a658: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x19a658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x19a65c: 0xc64102e0  lwc1        $f1, 0x2E0($s2)
    ctx->pc = 0x19a65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a660: 0x4601a081  sub.s       $f2, $f20, $f1
    ctx->pc = 0x19a660u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x19a664: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19a664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a668: 0x0  nop
    ctx->pc = 0x19a668u;
    // NOP
    // 0x19a66c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x19A66Cu;
    {
        const bool branch_taken_0x19a66c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19A670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A66Cu;
            // 0x19a670: 0x2831823  subu        $v1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a66c) {
            ctx->pc = 0x19A694u;
            goto label_19a694;
        }
    }
    ctx->pc = 0x19A674u;
    // 0x19a674: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x19a674u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19a678: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A678u;
    {
        const bool branch_taken_0x19a678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A678u;
            // 0x19a67c: 0x3c0241c0  lui         $v0, 0x41C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a678) {
            ctx->pc = 0x19A694u;
            goto label_19a694;
        }
    }
    ctx->pc = 0x19A680u;
    // 0x19a680: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19a680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19a684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a688: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A688u;
    {
        const bool branch_taken_0x19a688 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19A68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A688u;
            // 0x19a68c: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a688) {
            ctx->pc = 0x19A694u;
            goto label_19a694;
        }
    }
    ctx->pc = 0x19A690u;
    // 0x19a690: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19a690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a694:
    // 0x19a694: 0x0  nop
    ctx->pc = 0x19a694u;
    // NOP
    // 0x19a698: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x19a698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x19a69c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19a69cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a6a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a6a4: 0x0  nop
    ctx->pc = 0x19a6a4u;
    // NOP
    // 0x19a6a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19a6a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19a6ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19a6acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19a6b0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19A6B0u;
    SET_GPR_U32(ctx, 31, 0x19A6B8u);
    ctx->pc = 0x19A6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A6B0u;
            // 0x19a6b4: 0x46001300  add.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A6B8u; }
        if (ctx->pc != 0x19A6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A6B8u; }
        if (ctx->pc != 0x19A6B8u) { return; }
    }
    ctx->pc = 0x19A6B8u;
label_19a6b8:
    // 0x19a6b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19a6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a6bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19A6BCu;
    {
        const bool branch_taken_0x19a6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A6BCu;
            // 0x19a6c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6bc) {
            ctx->pc = 0x19A700u;
            goto label_19a700;
        }
    }
    ctx->pc = 0x19A6C4u;
label_19a6c4:
    // 0x19a6c4: 0x0  nop
    ctx->pc = 0x19a6c4u;
    // NOP
    // 0x19a6c8: 0x8e4202bc  lw          $v0, 0x2BC($s2)
    ctx->pc = 0x19a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x19a6cc: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x19a6ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x19a6d0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x19A6D0u;
    {
        const bool branch_taken_0x19a6d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a6d0) {
            ctx->pc = 0x19A6F8u;
            goto label_19a6f8;
        }
    }
    ctx->pc = 0x19A6D8u;
    // 0x19a6d8: 0x964202ca  lhu         $v0, 0x2CA($s2)
    ctx->pc = 0x19a6d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 714)));
    // 0x19a6dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19a6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a6e0: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x19a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x19a6e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a6e8: 0xc065d30  jal         func_1974C0
    ctx->pc = 0x19A6E8u;
    SET_GPR_U32(ctx, 31, 0x19A6F0u);
    ctx->pc = 0x19A6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A6E8u;
            // 0x19a6ec: 0xa64202ca  sh          $v0, 0x2CA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 714), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1974C0u;
    if (runtime->hasFunction(0x1974C0u)) {
        auto targetFn = runtime->lookupFunction(0x1974C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A6F0u; }
        if (ctx->pc != 0x19A6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFishHp__13CGameDataUsedFi_0x1974c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A6F0u; }
        if (ctx->pc != 0x19A6F0u) { return; }
    }
    ctx->pc = 0x19A6F0u;
label_19a6f0:
    // 0x19a6f0: 0xc066538  jal         func_1994E0
    ctx->pc = 0x19A6F0u;
    SET_GPR_U32(ctx, 31, 0x19A6F8u);
    ctx->pc = 0x19A6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A6F0u;
            // 0x19a6f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1994E0u;
    if (runtime->hasFunction(0x1994E0u)) {
        auto targetFn = runtime->lookupFunction(0x1994E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A6F8u; }
        if (ctx->pc != 0x19A6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckParamLimmit__13CGameDataUsedFv_0x1994e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A6F8u; }
        if (ctx->pc != 0x19A6F8u) { return; }
    }
    ctx->pc = 0x19A6F8u;
label_19a6f8:
    // 0x19a6f8: 0x2631fffa  addiu       $s1, $s1, -0x6
    ctx->pc = 0x19a6f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967290));
    // 0x19a6fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a700:
    // 0x19a700: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A700u;
    {
        const bool branch_taken_0x19a700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A700u;
            // 0x19a704: 0x2622fffa  addiu       $v0, $s1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a700) {
            ctx->pc = 0x19A710u;
            goto label_19a710;
        }
    }
    ctx->pc = 0x19A708u;
    // 0x19a708: 0x441ffee  bgez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19A708u;
    {
        const bool branch_taken_0x19a708 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19a708) {
            ctx->pc = 0x19A6C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19a6c4;
        }
    }
    ctx->pc = 0x19A710u;
label_19a710:
    // 0x19a710: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x19A710u;
    {
        const bool branch_taken_0x19a710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a710) {
            ctx->pc = 0x19A768u;
            goto label_19a768;
        }
    }
    ctx->pc = 0x19A718u;
    // 0x19a718: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x19a718u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a71c: 0x0  nop
    ctx->pc = 0x19a71cu;
    // NOP
    // 0x19a720: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19a720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19a724: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x19a724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a728: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19A728u;
    SET_GPR_U32(ctx, 31, 0x19A730u);
    ctx->pc = 0x19A72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A728u;
            // 0x19a72c: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A730u; }
        if (ctx->pc != 0x19A730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A730u; }
        if (ctx->pc != 0x19A730u) { return; }
    }
    ctx->pc = 0x19A730u;
label_19a730:
    // 0x19a730: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a738: 0x0  nop
    ctx->pc = 0x19a738u;
    // NOP
    // 0x19a73c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19a73cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19a740: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a744: 0x0  nop
    ctx->pc = 0x19a744u;
    // NOP
    // 0x19a748: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19A748u;
    {
        const bool branch_taken_0x19a748 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a748) {
            ctx->pc = 0x19A754u;
            goto label_19a754;
        }
    }
    ctx->pc = 0x19A750u;
    // 0x19a750: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x19a750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_19a754:
    // 0x19a754: 0x0  nop
    ctx->pc = 0x19a754u;
    // NOP
    // 0x19a758: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19a758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19a75c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x19a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x19a760: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x19a760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19a764: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x19a764u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_19a768:
    // 0x19a768: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x19a768u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x19a76c: 0x2ae20004  slti        $v0, $s7, 0x4
    ctx->pc = 0x19a76cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19a770: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x19A770u;
    {
        const bool branch_taken_0x19a770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A770u;
            // 0x19a774: 0x27de006c  addiu       $fp, $fp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a770) {
            ctx->pc = 0x19A624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19a624;
        }
    }
    ctx->pc = 0x19A778u;
    // 0x19a778: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19a778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a77c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19a77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a780:
    // 0x19a780: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x19a780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x19a784: 0x16283c  dsll32      $a1, $s6, 0
    ctx->pc = 0x19a784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) << (32 + 0));
    // 0x19a788: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x19a788u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x19a78c: 0xc06660c  jal         func_199830
    ctx->pc = 0x19A78Cu;
    SET_GPR_U32(ctx, 31, 0x19A794u);
    ctx->pc = 0x19A790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A78Cu;
            // 0x19a790: 0x2444043c  addiu       $a0, $v0, 0x43C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1084));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199830u;
    if (runtime->hasFunction(0x199830u)) {
        auto targetFn = runtime->lookupFunction(0x199830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A794u; }
        if (ctx->pc != 0x19A794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TimeCheck__13CGameDataUsedFi_0x199830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A794u; }
        if (ctx->pc != 0x19A794u) { return; }
    }
    ctx->pc = 0x19A794u;
label_19a794:
    // 0x19a794: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19a794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19a798: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x19a798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19a79c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19A79Cu;
    {
        const bool branch_taken_0x19a79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A79Cu;
            // 0x19a7a0: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a79c) {
            ctx->pc = 0x19A780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19a780;
        }
    }
    ctx->pc = 0x19A7A4u;
    // 0x19a7a4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a7a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A7A8u;
    {
        const bool branch_taken_0x19a7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a7a8) {
            ctx->pc = 0x19A7B8u;
            goto label_19a7b8;
        }
    }
    ctx->pc = 0x19A7B0u;
    // 0x19a7b0: 0xaeb40528  sw          $s4, 0x528($s5)
    ctx->pc = 0x19a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1320), GPR_U32(ctx, 20));
    // 0x19a7b4: 0xe6b4052c  swc1        $f20, 0x52C($s5)
    ctx->pc = 0x19a7b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1324), bits); }
label_19a7b8:
    // 0x19a7b8: 0xdea40518  ld          $a0, 0x518($s5)
    ctx->pc = 0x19a7b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 1304)));
    // 0x19a7bc: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x19A7BCu;
    SET_GPR_U32(ctx, 31, 0x19A7C4u);
    ctx->pc = 0x19A7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A7BCu;
            // 0x19a7c0: 0x24050534  addiu       $a1, $zero, 0x534 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (runtime->hasFunction(0x2875E8u)) {
        auto targetFn = runtime->lookupFunction(0x2875E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7C4u; }
        if (ctx->pc != 0x19A7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2875e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7C4u; }
        if (ctx->pc != 0x19A7C4u) { return; }
    }
    ctx->pc = 0x19A7C4u;
label_19a7c4:
    // 0x19a7c4: 0xfea20518  sd          $v0, 0x518($s5)
    ctx->pc = 0x19a7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 1304), GPR_U64(ctx, 2));
    // 0x19a7c8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19a7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19a7cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19a7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19a7d0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x19a7d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19a7d4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x19a7d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19a7d8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x19a7d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19a7dc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x19a7dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a7e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x19a7e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a7e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x19a7e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a7e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19a7e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a7ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19a7ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a7f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19a7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x19A7F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A7F4u;
            // 0x19a7f8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A7FCu;
}
