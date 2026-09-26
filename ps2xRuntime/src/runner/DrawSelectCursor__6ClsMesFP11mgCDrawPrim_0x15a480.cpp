#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSelectCursor__6ClsMesFP11mgCDrawPrim
// Address: 0x15a480 - 0x15a730
void DrawSelectCursor__6ClsMesFP11mgCDrawPrim_0x15a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSelectCursor__6ClsMesFP11mgCDrawPrim_0x15a480");
#endif

    switch (ctx->pc) {
        case 0x15a4a8u: goto label_15a4a8;
        case 0x15a4b8u: goto label_15a4b8;
        case 0x15a590u: goto label_15a590;
        case 0x15a5a0u: goto label_15a5a0;
        case 0x15a5f8u: goto label_15a5f8;
        case 0x15a608u: goto label_15a608;
        case 0x15a640u: goto label_15a640;
        case 0x15a650u: goto label_15a650;
        case 0x15a67cu: goto label_15a67c;
        case 0x15a6a4u: goto label_15a6a4;
        case 0x15a6c0u: goto label_15a6c0;
        case 0x15a6d8u: goto label_15a6d8;
        case 0x15a6f8u: goto label_15a6f8;
        case 0x15a714u: goto label_15a714;
        default: break;
    }

    ctx->pc = 0x15a480u;

    // 0x15a480: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15a484: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15a484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15a488: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15a488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15a48c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15a48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15a490: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15a490u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a494: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a49c: 0xc48c0188  lwc1        $f12, 0x188($a0)
    ctx->pc = 0x15a49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a4a0: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x15A4A0u;
    SET_GPR_U32(ctx, 31, 0x15A4A8u);
    ctx->pc = 0x15A4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A4A0u;
            // 0x15a4a4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A4A8u; }
        if (ctx->pc != 0x15A4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A4A8u; }
        if (ctx->pc != 0x15A4A8u) { return; }
    }
    ctx->pc = 0x15A4A8u;
label_15a4a8:
    // 0x15a4a8: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x15a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x15a4ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15a4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a4b0: 0xc04003c  jal         func_1000F0
    ctx->pc = 0x15A4B0u;
    SET_GPR_U32(ctx, 31, 0x15A4B8u);
    ctx->pc = 0x15A4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A4B0u;
            // 0x15a4b4: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (runtime->hasFunction(0x1000F0u)) {
        auto targetFn = runtime->lookupFunction(0x1000F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A4B8u; }
        if (ctx->pc != 0x15A4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x1000f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A4B8u; }
        if (ctx->pc != 0x15A4B8u) { return; }
    }
    ctx->pc = 0x15A4B8u;
label_15a4b8:
    // 0x15a4b8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15A4B8u;
    {
        const bool branch_taken_0x15a4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a4b8) {
            ctx->pc = 0x15A4ECu;
            goto label_15a4ec;
        }
    }
    ctx->pc = 0x15A4C0u;
    // 0x15a4c0: 0x8e651ae4  lw          $a1, 0x1AE4($s3)
    ctx->pc = 0x15a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6884)));
    // 0x15a4c4: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15A4C4u;
    {
        const bool branch_taken_0x15a4c4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x15a4c4) {
            ctx->pc = 0x15A4ECu;
            goto label_15a4ec;
        }
    }
    ctx->pc = 0x15A4CCu;
    // 0x15a4cc: 0x8e640130  lw          $a0, 0x130($s3)
    ctx->pc = 0x15a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x15a4d0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x15a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15a4d4: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15A4D4u;
    {
        const bool branch_taken_0x15a4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a4d4) {
            ctx->pc = 0x15A4F4u;
            goto label_15a4f4;
        }
    }
    ctx->pc = 0x15A4DCu;
    // 0x15a4dc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A4DCu;
    {
        const bool branch_taken_0x15a4dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A4DCu;
            // 0x15a4e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4dc) {
            ctx->pc = 0x15A4F4u;
            goto label_15a4f4;
        }
    }
    ctx->pc = 0x15A4E4u;
    // 0x15a4e4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A4E4u;
    {
        const bool branch_taken_0x15a4e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a4e4) {
            ctx->pc = 0x15A4F4u;
            goto label_15a4f4;
        }
    }
    ctx->pc = 0x15A4ECu;
label_15a4ec:
    // 0x15a4ec: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x15A4ECu;
    {
        const bool branch_taken_0x15a4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A4ECu;
            // 0x15a4f0: 0xae601b00  sw          $zero, 0x1B00($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4ec) {
            ctx->pc = 0x15A714u;
            goto label_15a714;
        }
    }
    ctx->pc = 0x15A4F4u;
label_15a4f4:
    // 0x15a4f4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15a4f8: 0xa3a20092  sb          $v0, 0x92($sp)
    ctx->pc = 0x15a4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 146), (uint8_t)GPR_U32(ctx, 2));
    // 0x15a4fc: 0xa3a20091  sb          $v0, 0x91($sp)
    ctx->pc = 0x15a4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 145), (uint8_t)GPR_U32(ctx, 2));
    // 0x15a500: 0xa3a20090  sb          $v0, 0x90($sp)
    ctx->pc = 0x15a500u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
    // 0x15a504: 0x92621800  lbu         $v0, 0x1800($s3)
    ctx->pc = 0x15a504u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6144)));
    // 0x15a508: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x15a508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x15a50c: 0x211fc  dsll32      $v0, $v0, 7
    ctx->pc = 0x15a50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 7));
    // 0x15a510: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A510u;
    {
        const bool branch_taken_0x15a510 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15A514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A510u;
            // 0x15a514: 0x211ff  dsra32      $v0, $v0, 7 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a510) {
            ctx->pc = 0x15A520u;
            goto label_15a520;
        }
    }
    ctx->pc = 0x15A518u;
    // 0x15a518: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x15a518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x15a51c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x15a51cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_15a520:
    // 0x15a520: 0xa3a20093  sb          $v0, 0x93($sp)
    ctx->pc = 0x15a520u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 147), (uint8_t)GPR_U32(ctx, 2));
    // 0x15a524: 0xa3a0009a  sb          $zero, 0x9A($sp)
    ctx->pc = 0x15a524u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 154), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a528: 0xa3a00099  sb          $zero, 0x99($sp)
    ctx->pc = 0x15a528u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 153), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a52c: 0xa3a00098  sb          $zero, 0x98($sp)
    ctx->pc = 0x15a52cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 152), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a530: 0x92621800  lbu         $v0, 0x1800($s3)
    ctx->pc = 0x15a530u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6144)));
    // 0x15a534: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15a534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15a538: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A538u;
    {
        const bool branch_taken_0x15a538 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15A53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A538u;
            // 0x15a53c: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a538) {
            ctx->pc = 0x15A548u;
            goto label_15a548;
        }
    }
    ctx->pc = 0x15A540u;
    // 0x15a540: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x15a540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x15a544: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x15a544u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_15a548:
    // 0x15a548: 0xa3a2009b  sb          $v0, 0x9B($sp)
    ctx->pc = 0x15a548u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 155), (uint8_t)GPR_U32(ctx, 2));
    // 0x15a54c: 0x8e630130  lw          $v1, 0x130($s3)
    ctx->pc = 0x15a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x15a550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a554: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x15A554u;
    {
        const bool branch_taken_0x15a554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15a554) {
            ctx->pc = 0x15A5C0u;
            goto label_15a5c0;
        }
    }
    ctx->pc = 0x15A55Cu;
    // 0x15a55c: 0xc6621b00  lwc1        $f2, 0x1B00($s3)
    ctx->pc = 0x15a55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 6912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a560: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x15a560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x15a564: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x15a564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15a568: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x15a568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x15a56c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15a56cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a574: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x15a574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x15a578: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15a578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15a57c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15a57cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15a580: 0x0  nop
    ctx->pc = 0x15a580u;
    // NOP
    // 0x15a584: 0x0  nop
    ctx->pc = 0x15a584u;
    // NOP
    // 0x15a588: 0xc04c414  jal         func_131050
    ctx->pc = 0x15A588u;
    SET_GPR_U32(ctx, 31, 0x15A590u);
    ctx->pc = 0x131050u;
    if (runtime->hasFunction(0x131050u)) {
        auto targetFn = runtime->lookupFunction(0x131050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A590u; }
        if (ctx->pc != 0x15A590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSinf__Ff_0x131050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A590u; }
        if (ctx->pc != 0x15A590u) { return; }
    }
    ctx->pc = 0x15A590u;
label_15a590:
    // 0x15a590: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x15a590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x15a594: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a598: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15A598u;
    SET_GPR_U32(ctx, 31, 0x15A5A0u);
    ctx->pc = 0x15A59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A598u;
            // 0x15a59c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5A0u; }
        if (ctx->pc != 0x15A5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5A0u; }
        if (ctx->pc != 0x15A5A0u) { return; }
    }
    ctx->pc = 0x15A5A0u;
label_15a5a0:
    // 0x15a5a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15a5a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5a4: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15a5a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15a5a8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15A5A8u;
    {
        const bool branch_taken_0x15a5a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a5a8) {
            ctx->pc = 0x15A5B4u;
            goto label_15a5b4;
        }
    }
    ctx->pc = 0x15A5B0u;
    // 0x15a5b0: 0x108023  negu        $s0, $s0
    ctx->pc = 0x15a5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_15a5b4:
    // 0x15a5b4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x15a5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x15a5b8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x15A5B8u;
    {
        const bool branch_taken_0x15a5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A5B8u;
            // 0x15a5bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5b8) {
            ctx->pc = 0x15A654u;
            goto label_15a654;
        }
    }
    ctx->pc = 0x15A5C0u;
label_15a5c0:
    // 0x15a5c0: 0xc6611b00  lwc1        $f1, 0x1B00($s3)
    ctx->pc = 0x15a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 6912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a5c4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x15a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x15a5c8: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x15a5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15a5cc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x15a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x15a5d0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15a5d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15a5d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a5d8: 0x0  nop
    ctx->pc = 0x15a5d8u;
    // NOP
    // 0x15a5dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15a5dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15a5e0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15a5e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15a5e4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15a5e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15a5e8: 0x0  nop
    ctx->pc = 0x15a5e8u;
    // NOP
    // 0x15a5ec: 0x0  nop
    ctx->pc = 0x15a5ecu;
    // NOP
    // 0x15a5f0: 0xc04c43c  jal         func_1310F0
    ctx->pc = 0x15A5F0u;
    SET_GPR_U32(ctx, 31, 0x15A5F8u);
    ctx->pc = 0x1310F0u;
    if (runtime->hasFunction(0x1310F0u)) {
        auto targetFn = runtime->lookupFunction(0x1310F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5F8u; }
        if (ctx->pc != 0x15A5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCosf__Ff_0x1310f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5F8u; }
        if (ctx->pc != 0x15A5F8u) { return; }
    }
    ctx->pc = 0x15A5F8u;
label_15a5f8:
    // 0x15a5f8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x15a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x15a5fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a600: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15A600u;
    SET_GPR_U32(ctx, 31, 0x15A608u);
    ctx->pc = 0x15A604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A600u;
            // 0x15a604: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A608u; }
        if (ctx->pc != 0x15A608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A608u; }
        if (ctx->pc != 0x15A608u) { return; }
    }
    ctx->pc = 0x15A608u;
label_15a608:
    // 0x15a608: 0xc6621b00  lwc1        $f2, 0x1B00($s3)
    ctx->pc = 0x15a608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 6912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a60c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x15a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x15a610: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x15a610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x15a614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15a614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a618: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x15a618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x15a61c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15a61cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a624: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x15a624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x15a628: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15a628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15a62c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15a62cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15a630: 0x0  nop
    ctx->pc = 0x15a630u;
    // NOP
    // 0x15a634: 0x0  nop
    ctx->pc = 0x15a634u;
    // NOP
    // 0x15a638: 0xc04c414  jal         func_131050
    ctx->pc = 0x15A638u;
    SET_GPR_U32(ctx, 31, 0x15A640u);
    ctx->pc = 0x131050u;
    if (runtime->hasFunction(0x131050u)) {
        auto targetFn = runtime->lookupFunction(0x131050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A640u; }
        if (ctx->pc != 0x15A640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSinf__Ff_0x131050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A640u; }
        if (ctx->pc != 0x15A640u) { return; }
    }
    ctx->pc = 0x15A640u;
label_15a640:
    // 0x15a640: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x15a640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x15a644: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a648: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15A648u;
    SET_GPR_U32(ctx, 31, 0x15A650u);
    ctx->pc = 0x15A64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A648u;
            // 0x15a64c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A650u; }
        if (ctx->pc != 0x15A650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A650u; }
        if (ctx->pc != 0x15A650u) { return; }
    }
    ctx->pc = 0x15A650u;
label_15a650:
    // 0x15a650: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15a650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a654:
    // 0x15a654: 0x8e630130  lw          $v1, 0x130($s3)
    ctx->pc = 0x15a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x15a658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a65c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15A65Cu;
    {
        const bool branch_taken_0x15a65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15A660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A65Cu;
            // 0x15a660: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a65c) {
            ctx->pc = 0x15A6C4u;
            goto label_15a6c4;
        }
    }
    ctx->pc = 0x15A664u;
    // 0x15a664: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15a664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15a668: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x15a668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x15a66c: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x15a66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x15a670: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x15a670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x15a674: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x15A674u;
    SET_GPR_U32(ctx, 31, 0x15A67Cu);
    ctx->pc = 0x15A678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A674u;
            // 0x15a678: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A67Cu; }
        if (ctx->pc != 0x15A67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A67Cu; }
        if (ctx->pc != 0x15A67Cu) { return; }
    }
    ctx->pc = 0x15A67Cu;
label_15a67c:
    // 0x15a67c: 0x8e631af0  lw          $v1, 0x1AF0($s3)
    ctx->pc = 0x15a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6896)));
    // 0x15a680: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15a680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15a684: 0x8e621af4  lw          $v0, 0x1AF4($s3)
    ctx->pc = 0x15a684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6900)));
    // 0x15a688: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x15a688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x15a68c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x15a68cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x15a690: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x15a690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15a694: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x15a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15a698: 0x24650005  addiu       $a1, $v1, 0x5
    ctx->pc = 0x15a698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x15a69c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x15A69Cu;
    SET_GPR_U32(ctx, 31, 0x15A6A4u);
    ctx->pc = 0x15A6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A69Cu;
            // 0x15a6a0: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6A4u; }
        if (ctx->pc != 0x15A6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6A4u; }
        if (ctx->pc != 0x15A6A4u) { return; }
    }
    ctx->pc = 0x15A6A4u;
label_15a6a4:
    // 0x15a6a4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15a6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15a6a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15a6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a6ac: 0x24842b00  addiu       $a0, $a0, 0x2B00
    ctx->pc = 0x15a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11008));
    // 0x15a6b0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15a6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15a6b4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x15a6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15a6b8: 0xc0545d8  jal         func_151760
    ctx->pc = 0x15A6B8u;
    SET_GPR_U32(ctx, 31, 0x15A6C0u);
    ctx->pc = 0x15A6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A6B8u;
            // 0x15a6bc: 0x27a80098  addiu       $t0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6C0u; }
        if (ctx->pc != 0x15A6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6C0u; }
        if (ctx->pc != 0x15A6C0u) { return; }
    }
    ctx->pc = 0x15A6C0u;
label_15a6c0:
    // 0x15a6c0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15a6c4:
    // 0x15a6c4: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x15a6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x15a6c8: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x15a6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x15a6cc: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x15a6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x15a6d0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x15A6D0u;
    SET_GPR_U32(ctx, 31, 0x15A6D8u);
    ctx->pc = 0x15A6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A6D0u;
            // 0x15a6d4: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6D8u; }
        if (ctx->pc != 0x15A6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6D8u; }
        if (ctx->pc != 0x15A6D8u) { return; }
    }
    ctx->pc = 0x15A6D8u;
label_15a6d8:
    // 0x15a6d8: 0x8e631af0  lw          $v1, 0x1AF0($s3)
    ctx->pc = 0x15a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6896)));
    // 0x15a6dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15a6e0: 0x8e621af4  lw          $v0, 0x1AF4($s3)
    ctx->pc = 0x15a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6900)));
    // 0x15a6e4: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x15a6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x15a6e8: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x15a6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x15a6ec: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x15a6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15a6f0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x15A6F0u;
    SET_GPR_U32(ctx, 31, 0x15A6F8u);
    ctx->pc = 0x15A6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A6F0u;
            // 0x15a6f4: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6F8u; }
        if (ctx->pc != 0x15A6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6F8u; }
        if (ctx->pc != 0x15A6F8u) { return; }
    }
    ctx->pc = 0x15A6F8u;
label_15a6f8:
    // 0x15a6f8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15a6fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15a6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a700: 0x24842b00  addiu       $a0, $a0, 0x2B00
    ctx->pc = 0x15a700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11008));
    // 0x15a704: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15a704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15a708: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x15a708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15a70c: 0xc0545d8  jal         func_151760
    ctx->pc = 0x15A70Cu;
    SET_GPR_U32(ctx, 31, 0x15A714u);
    ctx->pc = 0x15A710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A70Cu;
            // 0x15a710: 0x27a80090  addiu       $t0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A714u; }
        if (ctx->pc != 0x15A714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A714u; }
        if (ctx->pc != 0x15A714u) { return; }
    }
    ctx->pc = 0x15A714u;
label_15a714:
    // 0x15a714: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15a714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a718: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15a718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a71c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a71cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a728: 0x3e00008  jr          $ra
    ctx->pc = 0x15A728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A728u;
            // 0x15a72c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A730u;
}
