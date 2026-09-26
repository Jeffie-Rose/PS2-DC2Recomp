#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AutoSetMonster__Fv
// Address: 0x28f0c0 - 0x28f2a0
void AutoSetMonster__Fv_0x28f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AutoSetMonster__Fv_0x28f0c0");
#endif

    switch (ctx->pc) {
        case 0x28f138u: goto label_28f138;
        case 0x28f150u: goto label_28f150;
        case 0x28f154u: goto label_28f154;
        case 0x28f168u: goto label_28f168;
        case 0x28f178u: goto label_28f178;
        case 0x28f194u: goto label_28f194;
        case 0x28f1b8u: goto label_28f1b8;
        case 0x28f1f8u: goto label_28f1f8;
        case 0x28f210u: goto label_28f210;
        case 0x28f24cu: goto label_28f24c;
        default: break;
    }

    ctx->pc = 0x28f0c0u;

    // 0x28f0c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x28f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x28f0c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28f0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28f0c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28f0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28f0cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28f0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28f0d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28f0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28f0d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28f0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28f0d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28f0dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28f0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28f0e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28f0e4: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x28f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28f0e8: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x28F0E8u;
    {
        const bool branch_taken_0x28f0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f0e8) {
            ctx->pc = 0x28F278u;
            goto label_28f278;
        }
    }
    ctx->pc = 0x28F0F0u;
    // 0x28f0f0: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x28f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28f0f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28f0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28f0f8: 0xac402fec  sw          $zero, 0x2FEC($v0)
    ctx->pc = 0x28f0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12268), GPR_U32(ctx, 0));
    // 0x28f0fc: 0x8f838da8  lw          $v1, -0x7258($gp)
    ctx->pc = 0x28f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
    // 0x28f100: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x28f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28f104: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x28f104u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f108: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x28f108u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x28f10c: 0x8c36fff4  lw          $s6, -0xC($at)
    ctx->pc = 0x28f10cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967284)));
    // 0x28f110: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x28f110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x28f114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28f114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28f118: 0x2ac10019  slti        $at, $s6, 0x19
    ctx->pc = 0x28f118u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x28f11c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x28F11Cu;
    {
        const bool branch_taken_0x28f11c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F11Cu;
            // 0x28f120: 0x8c550004  lw          $s5, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f11c) {
            ctx->pc = 0x28F128u;
            goto label_28f128;
        }
    }
    ctx->pc = 0x28F124u;
    // 0x28f124: 0x24160018  addiu       $s6, $zero, 0x18
    ctx->pc = 0x28f124u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_28f128:
    // 0x28f128: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x28f128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28f12c: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x28f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x28f130: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x28F130u;
    SET_GPR_U32(ctx, 31, 0x28F138u);
    ctx->pc = 0x28F134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F130u;
            // 0x28f134: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (runtime->hasFunction(0x28D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x28D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F138u; }
        if (ctx->pc != 0x28F138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDungeonEventPoint__FPfPfi_0x28d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F138u; }
        if (ctx->pc != 0x28F138u) { return; }
    }
    ctx->pc = 0x28F138u;
label_28f138:
    // 0x28f138: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28f138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28f13c: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x28f13cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x28f140: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28f140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f144: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x28F144u;
    {
        const bool branch_taken_0x28f144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F144u;
            // 0x28f148: 0xafa3008c  sw          $v1, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f144) {
            ctx->pc = 0x28F278u;
            goto label_28f278;
        }
    }
    ctx->pc = 0x28F14Cu;
    // 0x28f14c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28f14cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f150:
    // 0x28f150: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28f150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f154:
    // 0x28f154: 0x0  nop
    ctx->pc = 0x28f154u;
    // NOP
    // 0x28f158: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x28f158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x28f15c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x28f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28f160: 0xc0a3524  jal         func_28D490
    ctx->pc = 0x28F160u;
    SET_GPR_U32(ctx, 31, 0x28F168u);
    ctx->pc = 0x28F164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F160u;
            // 0x28f164: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D490u;
    if (runtime->hasFunction(0x28D490u)) {
        auto targetFn = runtime->lookupFunction(0x28D490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F168u; }
        if (ctx->pc != 0x28F168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapFlatPosition__FPfP11CAutoMapGen_0x28d490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F168u; }
        if (ctx->pc != 0x28F168u) { return; }
    }
    ctx->pc = 0x28F168u;
label_28f168:
    // 0x28f168: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x28F168u;
    {
        const bool branch_taken_0x28f168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f168) {
            ctx->pc = 0x28F25Cu;
            goto label_28f25c;
        }
    }
    ctx->pc = 0x28F170u;
    // 0x28f170: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x28F170u;
    SET_GPR_U32(ctx, 31, 0x28F178u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F178u; }
        if (ctx->pc != 0x28F178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F178u; }
        if (ctx->pc != 0x28F178u) { return; }
    }
    ctx->pc = 0x28F178u;
label_28f178:
    // 0x28f178: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x28f178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28f17c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x28f17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28f180: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x28f180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x28f184: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x28f184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x28f188: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x28f188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x28f18c: 0xc04c018  jal         func_130060
    ctx->pc = 0x28F18Cu;
    SET_GPR_U32(ctx, 31, 0x28F194u);
    ctx->pc = 0x28F190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F18Cu;
            // 0x28f190: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F194u; }
        if (ctx->pc != 0x28F194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F194u; }
        if (ctx->pc != 0x28F194u) { return; }
    }
    ctx->pc = 0x28F194u;
label_28f194:
    // 0x28f194: 0x3c034402  lui         $v1, 0x4402
    ctx->pc = 0x28f194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17410 << 16));
    // 0x28f198: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28f198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f19c: 0x0  nop
    ctx->pc = 0x28f19cu;
    // NOP
    // 0x28f1a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28f1a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f1a4: 0x0  nop
    ctx->pc = 0x28f1a4u;
    // NOP
    // 0x28f1a8: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x28F1A8u;
    {
        const bool branch_taken_0x28f1a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F1A8u;
            // 0x28f1ac: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1a8) {
            ctx->pc = 0x28F25Cu;
            goto label_28f25c;
        }
    }
    ctx->pc = 0x28F1B0u;
    // 0x28f1b0: 0xc0a3870  jal         func_28E1C0
    ctx->pc = 0x28F1B0u;
    SET_GPR_U32(ctx, 31, 0x28F1B8u);
    ctx->pc = 0x28E1C0u;
    if (runtime->hasFunction(0x28E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F1B8u; }
        if (ctx->pc != 0x28F1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckObjectPutArea__FPf_0x28e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F1B8u; }
        if (ctx->pc != 0x28F1B8u) { return; }
    }
    ctx->pc = 0x28F1B8u;
label_28f1b8:
    // 0x28f1b8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x28F1B8u;
    {
        const bool branch_taken_0x28f1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f1b8) {
            ctx->pc = 0x28F25Cu;
            goto label_28f25c;
        }
    }
    ctx->pc = 0x28F1C0u;
    // 0x28f1c0: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x28f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28f1c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x28f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x28f1c8: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x28f1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x28f1cc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x28f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28f1d0: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x28f1d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f1d4: 0x28a300f5  slti        $v1, $a1, 0xF5
    ctx->pc = 0x28f1d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)245) ? 1 : 0);
    // 0x28f1d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F1D8u;
    {
        const bool branch_taken_0x28f1d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F1D8u;
            // 0x28f1dc: 0x28a1010d  slti        $at, $a1, 0x10D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)269) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1d8) {
            ctx->pc = 0x28F1F0u;
            goto label_28f1f0;
        }
    }
    ctx->pc = 0x28F1E0u;
    // 0x28f1e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F1E0u;
    {
        const bool branch_taken_0x28f1e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f1e0) {
            ctx->pc = 0x28F1F0u;
            goto label_28f1f0;
        }
    }
    ctx->pc = 0x28F1E8u;
    // 0x28f1e8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x28F1E8u;
    {
        const bool branch_taken_0x28f1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F1E8u;
            // 0x28f1ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1e8) {
            ctx->pc = 0x28F25Cu;
            goto label_28f25c;
        }
    }
    ctx->pc = 0x28F1F0u;
label_28f1f0:
    // 0x28f1f0: 0xc076db0  jal         func_1DB6C0
    ctx->pc = 0x28F1F0u;
    SET_GPR_U32(ctx, 31, 0x28F1F8u);
    ctx->pc = 0x1DB6C0u;
    if (runtime->hasFunction(0x1DB6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F1F8u; }
        if (ctx->pc != 0x28F1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchBaseIndex__11CMonsterManFi_0x1db6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F1F8u; }
        if (ctx->pc != 0x28F1F8u) { return; }
    }
    ctx->pc = 0x28F1F8u;
label_28f1f8:
    // 0x28f1f8: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x28f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28f1fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28f1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f200: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x28f200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28f204: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x28f204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x28f208: 0xc076eec  jal         func_1DBBB0
    ctx->pc = 0x28F208u;
    SET_GPR_U32(ctx, 31, 0x28F210u);
    ctx->pc = 0x28F20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F208u;
            // 0x28f20c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBB0u;
    if (runtime->hasFunction(0x1DBBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DBBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F210u; }
        if (ctx->pc != 0x28F210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveMonster__11CMonsterManFiPfPfi_0x1dbbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F210u; }
        if (ctx->pc != 0x28F210u) { return; }
    }
    ctx->pc = 0x28F210u;
label_28f210:
    // 0x28f210: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28f210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f214: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x28F214u;
    {
        const bool branch_taken_0x28f214 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f214) {
            ctx->pc = 0x28F25Cu;
            goto label_28f25c;
        }
    }
    ctx->pc = 0x28F21Cu;
    // 0x28f21c: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x28f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28f220: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x28f220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x28f224: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x28f224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x28f228: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28f228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f22c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x28f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x28f230: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28f230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28f234: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x28f234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f238: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F238u;
    {
        const bool branch_taken_0x28f238 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F238u;
            // 0x28f23c: 0xae431350  sw          $v1, 0x1350($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f238) {
            ctx->pc = 0x28F25Cu;
            goto label_28f25c;
        }
    }
    ctx->pc = 0x28F240u;
    // 0x28f240: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28f240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f244: 0xc0a32e8  jal         func_28CBA0
    ctx->pc = 0x28F244u;
    SET_GPR_U32(ctx, 31, 0x28F24Cu);
    ctx->pc = 0x28F248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F244u;
            // 0x28f248: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CBA0u;
    if (runtime->hasFunction(0x28CBA0u)) {
        auto targetFn = runtime->lookupFunction(0x28CBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F24Cu; }
        if (ctx->pc != 0x28F24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGateKeyIndex__Fii_0x28cba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F24Cu; }
        if (ctx->pc != 0x28F24Cu) { return; }
    }
    ctx->pc = 0x28F24Cu;
label_28f24c:
    // 0x28f24c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28f250: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28F250u;
    {
        const bool branch_taken_0x28f250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x28f250) {
            ctx->pc = 0x28F25Cu;
            goto label_28f25c;
        }
    }
    ctx->pc = 0x28F258u;
    // 0x28f258: 0xa6421354  sh          $v0, 0x1354($s2)
    ctx->pc = 0x28f258u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4948), (uint16_t)GPR_U32(ctx, 2));
label_28f25c:
    // 0x28f25c: 0x0  nop
    ctx->pc = 0x28f25cu;
    // NOP
    // 0x28f260: 0x1220ffbc  beqz        $s1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x28F260u;
    {
        const bool branch_taken_0x28f260 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f260) {
            ctx->pc = 0x28F154u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28f154;
        }
    }
    ctx->pc = 0x28F268u;
    // 0x28f268: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28f268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28f26c: 0x216182a  slt         $v1, $s0, $s6
    ctx->pc = 0x28f26cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x28f270: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x28F270u;
    {
        const bool branch_taken_0x28f270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F270u;
            // 0x28f274: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f270) {
            ctx->pc = 0x28F150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28f150;
        }
    }
    ctx->pc = 0x28F278u;
label_28f278:
    // 0x28f278: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28f278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28f27c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28f27cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28f280: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28f280u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28f284: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28f284u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f288: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28f288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f28c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28f28cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28f290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f298: 0x3e00008  jr          $ra
    ctx->pc = 0x28F298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F298u;
            // 0x28f29c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F2A0u;
}
