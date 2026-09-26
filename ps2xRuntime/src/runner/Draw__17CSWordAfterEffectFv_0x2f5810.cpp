#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__17CSWordAfterEffectFv
// Address: 0x2f5810 - 0x2f5bc8
void Draw__17CSWordAfterEffectFv_0x2f5810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__17CSWordAfterEffectFv_0x2f5810");
#endif

    switch (ctx->pc) {
        case 0x2f5868u: goto label_2f5868;
        case 0x2f58a8u: goto label_2f58a8;
        case 0x2f58c4u: goto label_2f58c4;
        case 0x2f58d4u: goto label_2f58d4;
        case 0x2f58e0u: goto label_2f58e0;
        case 0x2f58ecu: goto label_2f58ec;
        case 0x2f58f8u: goto label_2f58f8;
        case 0x2f5908u: goto label_2f5908;
        case 0x2f5914u: goto label_2f5914;
        case 0x2f5920u: goto label_2f5920;
        case 0x2f5938u: goto label_2f5938;
        case 0x2f5948u: goto label_2f5948;
        case 0x2f5954u: goto label_2f5954;
        case 0x2f5960u: goto label_2f5960;
        case 0x2f596cu: goto label_2f596c;
        case 0x2f5978u: goto label_2f5978;
        case 0x2f5984u: goto label_2f5984;
        case 0x2f599cu: goto label_2f599c;
        case 0x2f59dcu: goto label_2f59dc;
        case 0x2f59ecu: goto label_2f59ec;
        case 0x2f5a04u: goto label_2f5a04;
        case 0x2f5a1cu: goto label_2f5a1c;
        case 0x2f5a28u: goto label_2f5a28;
        case 0x2f5a38u: goto label_2f5a38;
        case 0x2f5a50u: goto label_2f5a50;
        case 0x2f5a68u: goto label_2f5a68;
        case 0x2f5a74u: goto label_2f5a74;
        case 0x2f5aa4u: goto label_2f5aa4;
        case 0x2f5aacu: goto label_2f5aac;
        case 0x2f5ac0u: goto label_2f5ac0;
        case 0x2f5ad8u: goto label_2f5ad8;
        case 0x2f5af0u: goto label_2f5af0;
        case 0x2f5b00u: goto label_2f5b00;
        case 0x2f5b0cu: goto label_2f5b0c;
        case 0x2f5b20u: goto label_2f5b20;
        case 0x2f5b38u: goto label_2f5b38;
        case 0x2f5b50u: goto label_2f5b50;
        case 0x2f5b68u: goto label_2f5b68;
        case 0x2f5b74u: goto label_2f5b74;
        case 0x2f5b98u: goto label_2f5b98;
        default: break;
    }

    ctx->pc = 0x2f5810u;

    // 0x2f5810: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2f5810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x2f5814: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f5814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f5818: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f5818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2f581c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f581cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2f5820: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f5820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f5824: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f5824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f5828: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f5828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f582c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2f582cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2f5830: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2f5830u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2f5834: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2f5834u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f5838: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f5838u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f583c: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x2f583cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2f5840: 0x106000d5  beqz        $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x2F5840u;
    {
        const bool branch_taken_0x2f5840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5840u;
            // 0x2f5844: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5840) {
            ctx->pc = 0x2F5B98u;
            goto label_2f5b98;
        }
    }
    ctx->pc = 0x2F5848u;
    // 0x2f5848: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x2f5848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2f584c: 0x186000d2  blez        $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x2F584Cu;
    {
        const bool branch_taken_0x2f584c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2f584c) {
            ctx->pc = 0x2F5B98u;
            goto label_2f5b98;
        }
    }
    ctx->pc = 0x2F5854u;
    // 0x2f5854: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x2f5854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5858: 0xc6150094  lwc1        $f21, 0x94($s0)
    ctx->pc = 0x2f5858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f585c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f585cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5860: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2F5860u;
    SET_GPR_U32(ctx, 31, 0x2F5868u);
    ctx->pc = 0x2F5864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5860u;
            // 0x2f5864: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5868u; }
        if (ctx->pc != 0x2F5868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5868u; }
        if (ctx->pc != 0x2F5868u) { return; }
    }
    ctx->pc = 0x2F5868u;
label_2f5868:
    // 0x2f5868: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2f5868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2f586c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f586cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5870: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x2f5870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f5874: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5874u;
    {
        const bool branch_taken_0x2f5874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5874) {
            ctx->pc = 0x2F5880u;
            goto label_2f5880;
        }
    }
    ctx->pc = 0x2F587Cu;
    // 0x2f587c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2f587cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f5880:
    // 0x2f5880: 0x1a2000c5  blez        $s1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2F5880u;
    {
        const bool branch_taken_0x2f5880 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2f5880) {
            ctx->pc = 0x2F5B98u;
            goto label_2f5b98;
        }
    }
    ctx->pc = 0x2F5888u;
    // 0x2f5888: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2f5888u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f588c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f588cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f5890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5894: 0x4600ad03  div.s       $f20, $f21, $f0
    ctx->pc = 0x2f5894u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x2f5898: 0x0  nop
    ctx->pc = 0x2f5898u;
    // NOP
    // 0x2f589c: 0x0  nop
    ctx->pc = 0x2f589cu;
    // NOP
    // 0x2f58a0: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2F58A0u;
    SET_GPR_U32(ctx, 31, 0x2F58A8u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F58A8u; }
        if (ctx->pc != 0x2F58A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F58A8u; }
        if (ctx->pc != 0x2F58A8u) { return; }
    }
    ctx->pc = 0x2F58A8u;
label_2f58a8:
    // 0x2f58a8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2f58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2f58ac: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2f58acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2f58b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F58B0u;
    {
        const bool branch_taken_0x2f58b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F58B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F58B0u;
            // 0x2f58b4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f58b0) {
            ctx->pc = 0x2F58C4u;
            goto label_2f58c4;
        }
    }
    ctx->pc = 0x2F58B8u;
    // 0x2f58b8: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x2f58b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2f58bc: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2F58BCu;
    SET_GPR_U32(ctx, 31, 0x2F58C4u);
    ctx->pc = 0x2F58C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F58BCu;
            // 0x2f58c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F58C4u; }
        if (ctx->pc != 0x2F58C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F58C4u; }
        if (ctx->pc != 0x2F58C4u) { return; }
    }
    ctx->pc = 0x2F58C4u;
label_2f58c4:
    // 0x2f58c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f58c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f58c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f58c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58cc: 0xc04d104  jal         func_134410
    ctx->pc = 0x2F58CCu;
    SET_GPR_U32(ctx, 31, 0x2F58D4u);
    ctx->pc = 0x2F58D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F58CCu;
            // 0x2f58d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F58D4u; }
        if (ctx->pc != 0x2F58D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F58D4u; }
        if (ctx->pc != 0x2F58D4u) { return; }
    }
    ctx->pc = 0x2F58D4u;
label_2f58d4:
    // 0x2f58d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f58d8: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x2F58D8u;
    SET_GPR_U32(ctx, 31, 0x2F58E0u);
    ctx->pc = 0x2F58DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F58D8u;
            // 0x2f58dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F58E0u; }
        if (ctx->pc != 0x2F58E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F58E0u; }
        if (ctx->pc != 0x2F58E0u) { return; }
    }
    ctx->pc = 0x2F58E0u;
label_2f58e0:
    // 0x2f58e0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f58e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f58e4: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x2F58E4u;
    SET_GPR_U32(ctx, 31, 0x2F58ECu);
    ctx->pc = 0x2F58E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F58E4u;
            // 0x2f58e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F58ECu; }
        if (ctx->pc != 0x2F58ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F58ECu; }
        if (ctx->pc != 0x2F58ECu) { return; }
    }
    ctx->pc = 0x2F58ECu;
label_2f58ec:
    // 0x2f58ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f58ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f58f0: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x2F58F0u;
    SET_GPR_U32(ctx, 31, 0x2F58F8u);
    ctx->pc = 0x2F58F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F58F0u;
            // 0x2f58f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F58F8u; }
        if (ctx->pc != 0x2F58F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F58F8u; }
        if (ctx->pc != 0x2F58F8u) { return; }
    }
    ctx->pc = 0x2F58F8u;
label_2f58f8:
    // 0x2f58f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f58f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f58fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f58fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5900: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x2F5900u;
    SET_GPR_U32(ctx, 31, 0x2F5908u);
    ctx->pc = 0x2F5904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5900u;
            // 0x2f5904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5908u; }
        if (ctx->pc != 0x2F5908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5908u; }
        if (ctx->pc != 0x2F5908u) { return; }
    }
    ctx->pc = 0x2F5908u;
label_2f5908:
    // 0x2f5908: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f5908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f590c: 0xc04d424  jal         func_135090
    ctx->pc = 0x2F590Cu;
    SET_GPR_U32(ctx, 31, 0x2F5914u);
    ctx->pc = 0x2F5910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F590Cu;
            // 0x2f5910: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5914u; }
        if (ctx->pc != 0x2F5914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5914u; }
        if (ctx->pc != 0x2F5914u) { return; }
    }
    ctx->pc = 0x2F5914u;
label_2f5914:
    // 0x2f5914: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f5914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f5918: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2F5918u;
    SET_GPR_U32(ctx, 31, 0x2F5920u);
    ctx->pc = 0x2F591Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5918u;
            // 0x2f591c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5920u; }
        if (ctx->pc != 0x2F5920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5920u; }
        if (ctx->pc != 0x2F5920u) { return; }
    }
    ctx->pc = 0x2F5920u;
label_2f5920:
    // 0x2f5920: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2f5920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2f5924: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5924u;
    {
        const bool branch_taken_0x2f5924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5924u;
            // 0x2f5928: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5924) {
            ctx->pc = 0x2F5940u;
            goto label_2f5940;
        }
    }
    ctx->pc = 0x2F592Cu;
    // 0x2f592c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f592cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f5930: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2F5930u;
    SET_GPR_U32(ctx, 31, 0x2F5938u);
    ctx->pc = 0x2F5934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5930u;
            // 0x2f5934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5938u; }
        if (ctx->pc != 0x2F5938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5938u; }
        if (ctx->pc != 0x2F5938u) { return; }
    }
    ctx->pc = 0x2F5938u;
label_2f5938:
    // 0x2f5938: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5938u;
    {
        const bool branch_taken_0x2f5938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F593Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5938u;
            // 0x2f593c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5938) {
            ctx->pc = 0x2F594Cu;
            goto label_2f594c;
        }
    }
    ctx->pc = 0x2F5940u;
label_2f5940:
    // 0x2f5940: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2F5940u;
    SET_GPR_U32(ctx, 31, 0x2F5948u);
    ctx->pc = 0x2F5944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5940u;
            // 0x2f5944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5948u; }
        if (ctx->pc != 0x2F5948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5948u; }
        if (ctx->pc != 0x2F5948u) { return; }
    }
    ctx->pc = 0x2F5948u;
label_2f5948:
    // 0x2f5948: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f5948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f594c:
    // 0x2f594c: 0xc04d44c  jal         func_135130
    ctx->pc = 0x2F594Cu;
    SET_GPR_U32(ctx, 31, 0x2F5954u);
    ctx->pc = 0x2F5950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F594Cu;
            // 0x2f5950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5954u; }
        if (ctx->pc != 0x2F5954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5954u; }
        if (ctx->pc != 0x2F5954u) { return; }
    }
    ctx->pc = 0x2F5954u;
label_2f5954:
    // 0x2f5954: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f5954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f5958: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x2F5958u;
    SET_GPR_U32(ctx, 31, 0x2F5960u);
    ctx->pc = 0x2F595Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5958u;
            // 0x2f595c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5960u; }
        if (ctx->pc != 0x2F5960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5960u; }
        if (ctx->pc != 0x2F5960u) { return; }
    }
    ctx->pc = 0x2F5960u;
label_2f5960:
    // 0x2f5960: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f5960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f5964: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x2F5964u;
    SET_GPR_U32(ctx, 31, 0x2F596Cu);
    ctx->pc = 0x2F5968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5964u;
            // 0x2f5968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F596Cu; }
        if (ctx->pc != 0x2F596Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F596Cu; }
        if (ctx->pc != 0x2F596Cu) { return; }
    }
    ctx->pc = 0x2F596Cu;
label_2f596c:
    // 0x2f596c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f596cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f5970: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x2F5970u;
    SET_GPR_U32(ctx, 31, 0x2F5978u);
    ctx->pc = 0x2F5974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5970u;
            // 0x2f5974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5978u; }
        if (ctx->pc != 0x2F5978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5978u; }
        if (ctx->pc != 0x2F5978u) { return; }
    }
    ctx->pc = 0x2F5978u;
label_2f5978:
    // 0x2f5978: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f5978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f597c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2F597Cu;
    SET_GPR_U32(ctx, 31, 0x2F5984u);
    ctx->pc = 0x2F5980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F597Cu;
            // 0x2f5980: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5984u; }
        if (ctx->pc != 0x2F5984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5984u; }
        if (ctx->pc != 0x2F5984u) { return; }
    }
    ctx->pc = 0x2F5984u;
label_2f5984:
    // 0x2f5984: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2f5984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2f5988: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5988u;
    {
        const bool branch_taken_0x2f5988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5988) {
            ctx->pc = 0x2F599Cu;
            goto label_2f599c;
        }
    }
    ctx->pc = 0x2F5990u;
    // 0x2f5990: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f5990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5994: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2F5994u;
    SET_GPR_U32(ctx, 31, 0x2F599Cu);
    ctx->pc = 0x2F5998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5994u;
            // 0x2f5998: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F599Cu; }
        if (ctx->pc != 0x2F599Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F599Cu; }
        if (ctx->pc != 0x2F599Cu) { return; }
    }
    ctx->pc = 0x2F599Cu;
label_2f599c:
    // 0x2f599c: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x2f599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f59a0: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2f59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2f59a4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2f59a4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f59a8: 0xc6020068  lwc1        $f2, 0x68($s0)
    ctx->pc = 0x2f59a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f59ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f59acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f59b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f59b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f59b4: 0x46000dc3  div.s       $f23, $f1, $f0
    ctx->pc = 0x2f59b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2f59b8: 0x468015a0  cvt.s.w     $f22, $f2
    ctx->pc = 0x2f59b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x2f59bc: 0x0  nop
    ctx->pc = 0x2f59bcu;
    // NOP
    // 0x2f59c0: 0x0  nop
    ctx->pc = 0x2f59c0u;
    // NOP
    // 0x2f59c4: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2F59C4u;
    {
        const bool branch_taken_0x2f59c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f59c4) {
            ctx->pc = 0x2F5A94u;
            goto label_2f5a94;
        }
    }
    ctx->pc = 0x2F59CCu;
    // 0x2f59cc: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2f59ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f59d0: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x2F59D0u;
    {
        const bool branch_taken_0x2f59d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F59D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F59D0u;
            // 0x2f59d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59d0) {
            ctx->pc = 0x2F5B90u;
            goto label_2f5b90;
        }
    }
    ctx->pc = 0x2F59D8u;
    // 0x2f59d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f59d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f59dc:
    // 0x2f59dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2f59dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f59e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f59e4: 0xc051638  jal         func_1458E0
    ctx->pc = 0x2F59E4u;
    SET_GPR_U32(ctx, 31, 0x2F59ECu);
    ctx->pc = 0x2F59E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F59E4u;
            // 0x2f59e8: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F59ECu; }
        if (ctx->pc != 0x2F59ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F59ECu; }
        if (ctx->pc != 0x2F59ECu) { return; }
    }
    ctx->pc = 0x2F59ECu;
label_2f59ec:
    // 0x2f59ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F59ECu;
    {
        const bool branch_taken_0x2f59ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f59ec) {
            ctx->pc = 0x2F5A28u;
            goto label_2f5a28;
        }
    }
    ctx->pc = 0x2F59F4u;
    // 0x2f59f4: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x2f59f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f59f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f59f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f59fc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2F59FCu;
    SET_GPR_U32(ctx, 31, 0x2F5A04u);
    ctx->pc = 0x2F5A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F59FCu;
            // 0x2f5a00: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A04u; }
        if (ctx->pc != 0x2F5A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A04u; }
        if (ctx->pc != 0x2F5A04u) { return; }
    }
    ctx->pc = 0x2F5A04u;
label_2f5a04:
    // 0x2f5a04: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2f5a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2f5a08: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f5a08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5a0c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x2f5a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2f5a10: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x2f5a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2f5a14: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2F5A14u;
    SET_GPR_U32(ctx, 31, 0x2F5A1Cu);
    ctx->pc = 0x2F5A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A14u;
            // 0x2f5a18: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A1Cu; }
        if (ctx->pc != 0x2F5A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A1Cu; }
        if (ctx->pc != 0x2F5A1Cu) { return; }
    }
    ctx->pc = 0x2F5A1Cu;
label_2f5a1c:
    // 0x2f5a1c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f5a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f5a20: 0xc04d318  jal         func_134C60
    ctx->pc = 0x2F5A20u;
    SET_GPR_U32(ctx, 31, 0x2F5A28u);
    ctx->pc = 0x2F5A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A20u;
            // 0x2f5a24: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A28u; }
        if (ctx->pc != 0x2F5A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A28u; }
        if (ctx->pc != 0x2F5A28u) { return; }
    }
    ctx->pc = 0x2F5A28u;
label_2f5a28:
    // 0x2f5a28: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2f5a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2f5a2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f5a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f5a30: 0xc051638  jal         func_1458E0
    ctx->pc = 0x2F5A30u;
    SET_GPR_U32(ctx, 31, 0x2F5A38u);
    ctx->pc = 0x2F5A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A30u;
            // 0x2f5a34: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A38u; }
        if (ctx->pc != 0x2F5A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A38u; }
        if (ctx->pc != 0x2F5A38u) { return; }
    }
    ctx->pc = 0x2F5A38u;
label_2f5a38:
    // 0x2f5a38: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F5A38u;
    {
        const bool branch_taken_0x2f5a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5a38) {
            ctx->pc = 0x2F5A74u;
            goto label_2f5a74;
        }
    }
    ctx->pc = 0x2F5A40u;
    // 0x2f5a40: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2f5a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5a44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5a48: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2F5A48u;
    SET_GPR_U32(ctx, 31, 0x2F5A50u);
    ctx->pc = 0x2F5A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A48u;
            // 0x2f5a4c: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A50u; }
        if (ctx->pc != 0x2F5A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A50u; }
        if (ctx->pc != 0x2F5A50u) { return; }
    }
    ctx->pc = 0x2F5A50u;
label_2f5a50:
    // 0x2f5a50: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2f5a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2f5a54: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f5a54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5a58: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x2f5a58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2f5a5c: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x2f5a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2f5a60: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2F5A60u;
    SET_GPR_U32(ctx, 31, 0x2F5A68u);
    ctx->pc = 0x2F5A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A60u;
            // 0x2f5a64: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A68u; }
        if (ctx->pc != 0x2F5A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A68u; }
        if (ctx->pc != 0x2F5A68u) { return; }
    }
    ctx->pc = 0x2F5A68u;
label_2f5a68:
    // 0x2f5a68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f5a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f5a6c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x2F5A6Cu;
    SET_GPR_U32(ctx, 31, 0x2F5A74u);
    ctx->pc = 0x2F5A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A6Cu;
            // 0x2f5a70: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A74u; }
        if (ctx->pc != 0x2F5A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A74u; }
        if (ctx->pc != 0x2F5A74u) { return; }
    }
    ctx->pc = 0x2F5A74u;
label_2f5a74:
    // 0x2f5a74: 0x0  nop
    ctx->pc = 0x2f5a74u;
    // NOP
    // 0x2f5a78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f5a78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f5a7c: 0x4614ad41  sub.s       $f21, $f21, $f20
    ctx->pc = 0x2f5a7cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x2f5a80: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x2f5a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f5a84: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2F5A84u;
    {
        const bool branch_taken_0x2f5a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A84u;
            // 0x2f5a88: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a84) {
            ctx->pc = 0x2F59DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f59dc;
        }
    }
    ctx->pc = 0x2F5A8Cu;
    // 0x2f5a8c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2F5A8Cu;
    {
        const bool branch_taken_0x2f5a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5a8c) {
            ctx->pc = 0x2F5B90u;
            goto label_2f5b90;
        }
    }
    ctx->pc = 0x2F5A94u;
label_2f5a94:
    // 0x2f5a94: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2f5a94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f5a98: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x2F5A98u;
    {
        const bool branch_taken_0x2f5a98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A98u;
            // 0x2f5a9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a98) {
            ctx->pc = 0x2F5B90u;
            goto label_2f5b90;
        }
    }
    ctx->pc = 0x2F5AA0u;
    // 0x2f5aa0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f5aa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5aa4:
    // 0x2f5aa4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2F5AA4u;
    SET_GPR_U32(ctx, 31, 0x2F5AACu);
    ctx->pc = 0x2F5AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5AA4u;
            // 0x2f5aa8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5AACu; }
        if (ctx->pc != 0x2F5AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5AACu; }
        if (ctx->pc != 0x2F5AACu) { return; }
    }
    ctx->pc = 0x2F5AACu;
label_2f5aac:
    // 0x2f5aac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f5aacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ab0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f5ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f5ab4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2f5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f5ab8: 0xc051638  jal         func_1458E0
    ctx->pc = 0x2F5AB8u;
    SET_GPR_U32(ctx, 31, 0x2F5AC0u);
    ctx->pc = 0x2F5ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5AB8u;
            // 0x2f5abc: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5AC0u; }
        if (ctx->pc != 0x2F5AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5AC0u; }
        if (ctx->pc != 0x2F5AC0u) { return; }
    }
    ctx->pc = 0x2F5AC0u;
label_2f5ac0:
    // 0x2f5ac0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F5AC0u;
    {
        const bool branch_taken_0x2f5ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5ac0) {
            ctx->pc = 0x2F5B0Cu;
            goto label_2f5b0c;
        }
    }
    ctx->pc = 0x2F5AC8u;
    // 0x2f5ac8: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x2f5ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5acc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5ad0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2F5AD0u;
    SET_GPR_U32(ctx, 31, 0x2F5AD8u);
    ctx->pc = 0x2F5AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5AD0u;
            // 0x2f5ad4: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5AD8u; }
        if (ctx->pc != 0x2F5AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5AD8u; }
        if (ctx->pc != 0x2F5AD8u) { return; }
    }
    ctx->pc = 0x2F5AD8u;
label_2f5ad8:
    // 0x2f5ad8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2f5ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2f5adc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f5adcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ae0: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x2f5ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2f5ae4: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x2f5ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2f5ae8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2F5AE8u;
    SET_GPR_U32(ctx, 31, 0x2F5AF0u);
    ctx->pc = 0x2F5AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5AE8u;
            // 0x2f5aec: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5AF0u; }
        if (ctx->pc != 0x2F5AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5AF0u; }
        if (ctx->pc != 0x2F5AF0u) { return; }
    }
    ctx->pc = 0x2F5AF0u;
label_2f5af0:
    // 0x2f5af0: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x2f5af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2f5af4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f5af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f5af8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2F5AF8u;
    SET_GPR_U32(ctx, 31, 0x2F5B00u);
    ctx->pc = 0x2F5AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5AF8u;
            // 0x2f5afc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B00u; }
        if (ctx->pc != 0x2F5B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B00u; }
        if (ctx->pc != 0x2F5B00u) { return; }
    }
    ctx->pc = 0x2F5B00u;
label_2f5b00:
    // 0x2f5b00: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f5b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f5b04: 0xc04d318  jal         func_134C60
    ctx->pc = 0x2F5B04u;
    SET_GPR_U32(ctx, 31, 0x2F5B0Cu);
    ctx->pc = 0x2F5B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B04u;
            // 0x2f5b08: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B0Cu; }
        if (ctx->pc != 0x2F5B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B0Cu; }
        if (ctx->pc != 0x2F5B0Cu) { return; }
    }
    ctx->pc = 0x2F5B0Cu;
label_2f5b0c:
    // 0x2f5b0c: 0x0  nop
    ctx->pc = 0x2f5b0cu;
    // NOP
    // 0x2f5b10: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2f5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2f5b14: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f5b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f5b18: 0xc051638  jal         func_1458E0
    ctx->pc = 0x2F5B18u;
    SET_GPR_U32(ctx, 31, 0x2F5B20u);
    ctx->pc = 0x2F5B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B18u;
            // 0x2f5b1c: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B20u; }
        if (ctx->pc != 0x2F5B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B20u; }
        if (ctx->pc != 0x2F5B20u) { return; }
    }
    ctx->pc = 0x2F5B20u;
label_2f5b20:
    // 0x2f5b20: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F5B20u;
    {
        const bool branch_taken_0x2f5b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b20) {
            ctx->pc = 0x2F5B74u;
            goto label_2f5b74;
        }
    }
    ctx->pc = 0x2F5B28u;
    // 0x2f5b28: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x2f5b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5b2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5b2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5b30: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2F5B30u;
    SET_GPR_U32(ctx, 31, 0x2F5B38u);
    ctx->pc = 0x2F5B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B30u;
            // 0x2f5b34: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B38u; }
        if (ctx->pc != 0x2F5B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B38u; }
        if (ctx->pc != 0x2F5B38u) { return; }
    }
    ctx->pc = 0x2F5B38u;
label_2f5b38:
    // 0x2f5b38: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2f5b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2f5b3c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f5b3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5b40: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x2f5b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2f5b44: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x2f5b44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2f5b48: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2F5B48u;
    SET_GPR_U32(ctx, 31, 0x2F5B50u);
    ctx->pc = 0x2F5B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B48u;
            // 0x2f5b4c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B50u; }
        if (ctx->pc != 0x2F5B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B50u; }
        if (ctx->pc != 0x2F5B50u) { return; }
    }
    ctx->pc = 0x2F5B50u;
label_2f5b50:
    // 0x2f5b50: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x2f5b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2f5b54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f5b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5b58: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2f5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2f5b5c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f5b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f5b60: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2F5B60u;
    SET_GPR_U32(ctx, 31, 0x2F5B68u);
    ctx->pc = 0x2F5B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B60u;
            // 0x2f5b64: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B68u; }
        if (ctx->pc != 0x2F5B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B68u; }
        if (ctx->pc != 0x2F5B68u) { return; }
    }
    ctx->pc = 0x2F5B68u;
label_2f5b68:
    // 0x2f5b68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f5b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f5b6c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x2F5B6Cu;
    SET_GPR_U32(ctx, 31, 0x2F5B74u);
    ctx->pc = 0x2F5B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B6Cu;
            // 0x2f5b70: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B74u; }
        if (ctx->pc != 0x2F5B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B74u; }
        if (ctx->pc != 0x2F5B74u) { return; }
    }
    ctx->pc = 0x2F5B74u;
label_2f5b74:
    // 0x2f5b74: 0x0  nop
    ctx->pc = 0x2f5b74u;
    // NOP
    // 0x2f5b78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f5b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2f5b7c: 0x4617b580  add.s       $f22, $f22, $f23
    ctx->pc = 0x2f5b7cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x2f5b80: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x2f5b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f5b84: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x2f5b84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2f5b88: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2F5B88u;
    {
        const bool branch_taken_0x2f5b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B88u;
            // 0x2f5b8c: 0x4614ad41  sub.s       $f21, $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b88) {
            ctx->pc = 0x2F5AA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5aa4;
        }
    }
    ctx->pc = 0x2F5B90u;
label_2f5b90:
    // 0x2f5b90: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2F5B90u;
    SET_GPR_U32(ctx, 31, 0x2F5B98u);
    ctx->pc = 0x2F5B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B90u;
            // 0x2f5b94: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B98u; }
        if (ctx->pc != 0x2F5B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B98u; }
        if (ctx->pc != 0x2F5B98u) { return; }
    }
    ctx->pc = 0x2F5B98u;
label_2f5b98:
    // 0x2f5b98: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f5b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f5b9c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2f5b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2f5ba0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f5ba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f5ba4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2f5ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2f5ba8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f5ba8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f5bac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2f5bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f5bb0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f5bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5bb4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f5bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f5bb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f5bb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5bbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f5bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5BC0u;
            // 0x2f5bc4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5BC8u;
}
