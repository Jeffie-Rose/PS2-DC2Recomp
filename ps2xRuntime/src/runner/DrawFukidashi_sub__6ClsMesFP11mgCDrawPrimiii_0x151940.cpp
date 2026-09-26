#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFukidashi_sub__6ClsMesFP11mgCDrawPrimiii
// Address: 0x151940 - 0x151e58
void DrawFukidashi_sub__6ClsMesFP11mgCDrawPrimiii_0x151940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFukidashi_sub__6ClsMesFP11mgCDrawPrimiii_0x151940");
#endif

    switch (ctx->pc) {
        case 0x1519ccu: goto label_1519cc;
        case 0x151a08u: goto label_151a08;
        case 0x151a20u: goto label_151a20;
        case 0x151a38u: goto label_151a38;
        case 0x151a50u: goto label_151a50;
        case 0x151a58u: goto label_151a58;
        case 0x151a74u: goto label_151a74;
        case 0x151a7cu: goto label_151a7c;
        case 0x151a88u: goto label_151a88;
        case 0x151ab0u: goto label_151ab0;
        case 0x151ad0u: goto label_151ad0;
        case 0x151b10u: goto label_151b10;
        case 0x151b30u: goto label_151b30;
        case 0x151b54u: goto label_151b54;
        case 0x151b6cu: goto label_151b6c;
        case 0x151b90u: goto label_151b90;
        case 0x151b98u: goto label_151b98;
        case 0x151bb4u: goto label_151bb4;
        case 0x151bbcu: goto label_151bbc;
        case 0x151bdcu: goto label_151bdc;
        case 0x151be4u: goto label_151be4;
        case 0x151c00u: goto label_151c00;
        case 0x151c08u: goto label_151c08;
        case 0x151c2cu: goto label_151c2c;
        case 0x151c34u: goto label_151c34;
        case 0x151c50u: goto label_151c50;
        case 0x151c58u: goto label_151c58;
        case 0x151c68u: goto label_151c68;
        case 0x151cc4u: goto label_151cc4;
        case 0x151cd4u: goto label_151cd4;
        case 0x151ce0u: goto label_151ce0;
        case 0x151d00u: goto label_151d00;
        case 0x151d54u: goto label_151d54;
        case 0x151d64u: goto label_151d64;
        case 0x151d70u: goto label_151d70;
        case 0x151d94u: goto label_151d94;
        case 0x151dbcu: goto label_151dbc;
        case 0x151ddcu: goto label_151ddc;
        case 0x151df0u: goto label_151df0;
        case 0x151e04u: goto label_151e04;
        case 0x151e18u: goto label_151e18;
        case 0x151e20u: goto label_151e20;
        default: break;
    }

    ctx->pc = 0x151940u;

    // 0x151940: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x151940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x151944: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x151944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x151948: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x151948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x15194c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x15194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x151950: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x151950u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151954: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x151954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x151958: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x151958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x15195c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x15195cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151960: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x151960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x151964: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x151964u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151968: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x151968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x15196c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15196cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x151970: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x151970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x151974: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x151974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x151978: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x151978u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15197c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15197cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x151980: 0xafa800dc  sw          $t0, 0xDC($sp)
    ctx->pc = 0x151980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 8));
    // 0x151984: 0x8c830134  lw          $v1, 0x134($a0)
    ctx->pc = 0x151984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
    // 0x151988: 0x4600125  bltz        $v1, . + 4 + (0x125 << 2)
    ctx->pc = 0x151988u;
    {
        const bool branch_taken_0x151988 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x15198Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151988u;
            // 0x15198c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151988) {
            ctx->pc = 0x151E20u;
            goto label_151e20;
        }
    }
    ctx->pc = 0x151990u;
    // 0x151990: 0x8ea30138  lw          $v1, 0x138($s5)
    ctx->pc = 0x151990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 312)));
    // 0x151994: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151994u;
    {
        const bool branch_taken_0x151994 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x151994) {
            ctx->pc = 0x1519A4u;
            goto label_1519a4;
        }
    }
    ctx->pc = 0x15199Cu;
    // 0x15199c: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x15199Cu;
    {
        const bool branch_taken_0x15199c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1519A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15199Cu;
            // 0x1519a0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15199c) {
            ctx->pc = 0x151E24u;
            goto label_151e24;
        }
    }
    ctx->pc = 0x1519A4u;
label_1519a4:
    // 0x1519a4: 0xc6a10144  lwc1        $f1, 0x144($s5)
    ctx->pc = 0x1519a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1519a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1519a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1519ac: 0xc6a00148  lwc1        $f0, 0x148($s5)
    ctx->pc = 0x1519acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1519b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1519b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1519b4: 0xc6a20188  lwc1        $f2, 0x188($s5)
    ctx->pc = 0x1519b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1519b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1519b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1519bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1519bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1519c0: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1519c0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1519c4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1519C4u;
    SET_GPR_U32(ctx, 31, 0x1519CCu);
    ctx->pc = 0x1519C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1519C4u;
            // 0x1519c8: 0x46020542  mul.s       $f21, $f0, $f2 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1519CCu; }
        if (ctx->pc != 0x1519CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1519CCu; }
        if (ctx->pc != 0x1519CCu) { return; }
    }
    ctx->pc = 0x1519CCu;
label_1519cc:
    // 0x1519cc: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1519ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1519d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1519d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1519d4: 0x1445000f  bne         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1519D4u;
    {
        const bool branch_taken_0x1519d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1519D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1519D4u;
            // 0x1519d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1519d4) {
            ctx->pc = 0x151A14u;
            goto label_151a14;
        }
    }
    ctx->pc = 0x1519DCu;
    // 0x1519dc: 0x92a21800  lbu         $v0, 0x1800($s5)
    ctx->pc = 0x1519dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6144)));
    // 0x1519e0: 0x64100040  daddiu      $s0, $zero, 0x40
    ctx->pc = 0x1519e0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1519e4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1519e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1519e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1519E8u;
    {
        const bool branch_taken_0x1519e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1519ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1519E8u;
            // 0x1519ec: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1519e8) {
            ctx->pc = 0x1519F8u;
            goto label_1519f8;
        }
    }
    ctx->pc = 0x1519F0u;
    // 0x1519f0: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x1519f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x1519f4: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1519f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_1519f8:
    // 0x1519f8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1519f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1519fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1519fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a00: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x151A00u;
    SET_GPR_U32(ctx, 31, 0x151A08u);
    ctx->pc = 0x151A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A00u;
            // 0x151a04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A08u; }
        if (ctx->pc != 0x151A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A08u; }
        if (ctx->pc != 0x151A08u) { return; }
    }
    ctx->pc = 0x151A08u;
label_151a08:
    // 0x151a08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x151A08u;
    {
        const bool branch_taken_0x151a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151A08u;
            // 0x151a0c: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151a08) {
            ctx->pc = 0x151A24u;
            goto label_151a24;
        }
    }
    ctx->pc = 0x151A10u;
    // 0x151a10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x151a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_151a14:
    // 0x151a14: 0x641000c8  daddiu      $s0, $zero, 0xC8
    ctx->pc = 0x151a14u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)200);
    // 0x151a18: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x151A18u;
    SET_GPR_U32(ctx, 31, 0x151A20u);
    ctx->pc = 0x151A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A18u;
            // 0x151a1c: 0x64110080  daddiu      $s1, $zero, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A20u; }
        if (ctx->pc != 0x151A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A20u; }
        if (ctx->pc != 0x151A20u) { return; }
    }
    ctx->pc = 0x151A20u;
label_151a20:
    // 0x151a20: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x151a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_151a24:
    // 0x151a24: 0x322800ff  andi        $t0, $s1, 0xFF
    ctx->pc = 0x151a24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x151a28: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x151a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a2c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x151a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a30: 0xc04d320  jal         func_134C80
    ctx->pc = 0x151A30u;
    SET_GPR_U32(ctx, 31, 0x151A38u);
    ctx->pc = 0x151A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A30u;
            // 0x151a34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A38u; }
        if (ctx->pc != 0x151A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A38u; }
        if (ctx->pc != 0x151A38u) { return; }
    }
    ctx->pc = 0x151A38u;
label_151a38:
    // 0x151a38: 0xc6a10134  lwc1        $f1, 0x134($s5)
    ctx->pc = 0x151a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151a3c: 0xc6a0013c  lwc1        $f0, 0x13C($s5)
    ctx->pc = 0x151a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151a40: 0xc6ae0188  lwc1        $f14, 0x188($s5)
    ctx->pc = 0x151a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x151a44: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x151a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x151a48: 0xc0543fc  jal         func_150FF0
    ctx->pc = 0x151A48u;
    SET_GPR_U32(ctx, 31, 0x151A50u);
    ctx->pc = 0x151A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A48u;
            // 0x151a4c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x150FF0u;
    if (runtime->hasFunction(0x150FF0u)) {
        auto targetFn = runtime->lookupFunction(0x150FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A50u; }
        if (ctx->pc != 0x151A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolation__Ffff_0x150ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A50u; }
        if (ctx->pc != 0x151A50u) { return; }
    }
    ctx->pc = 0x151A50u;
label_151a50:
    // 0x151a50: 0xc0a248c  jal         func_289230
    ctx->pc = 0x151A50u;
    SET_GPR_U32(ctx, 31, 0x151A58u);
    ctx->pc = 0x151A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A50u;
            // 0x151a54: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A58u; }
        if (ctx->pc != 0x151A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A58u; }
        if (ctx->pc != 0x151A58u) { return; }
    }
    ctx->pc = 0x151A58u;
label_151a58:
    // 0x151a58: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x151a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x151a5c: 0xc6a10138  lwc1        $f1, 0x138($s5)
    ctx->pc = 0x151a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151a60: 0xc6a00140  lwc1        $f0, 0x140($s5)
    ctx->pc = 0x151a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151a64: 0xc6ae0188  lwc1        $f14, 0x188($s5)
    ctx->pc = 0x151a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x151a68: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x151a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x151a6c: 0xc0543fc  jal         func_150FF0
    ctx->pc = 0x151A6Cu;
    SET_GPR_U32(ctx, 31, 0x151A74u);
    ctx->pc = 0x151A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A6Cu;
            // 0x151a70: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x150FF0u;
    if (runtime->hasFunction(0x150FF0u)) {
        auto targetFn = runtime->lookupFunction(0x150FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A74u; }
        if (ctx->pc != 0x151A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolation__Ffff_0x150ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A74u; }
        if (ctx->pc != 0x151A74u) { return; }
    }
    ctx->pc = 0x151A74u;
label_151a74:
    // 0x151a74: 0xc0a248c  jal         func_289230
    ctx->pc = 0x151A74u;
    SET_GPR_U32(ctx, 31, 0x151A7Cu);
    ctx->pc = 0x151A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A74u;
            // 0x151a78: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A7Cu; }
        if (ctx->pc != 0x151A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A7Cu; }
        if (ctx->pc != 0x151A7Cu) { return; }
    }
    ctx->pc = 0x151A7Cu;
label_151a7c:
    // 0x151a7c: 0x24570001  addiu       $s7, $v0, 0x1
    ctx->pc = 0x151a7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151a80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x151a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x151a84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151a88:
    // 0x151a88: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x151a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x151a8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151a90: 0x24634490  addiu       $v1, $v1, 0x4490
    ctx->pc = 0x151a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17552));
    // 0x151a94: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x151a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x151a98: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x151a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151a9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x151a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151aa0: 0x0  nop
    ctx->pc = 0x151aa0u;
    // NOP
    // 0x151aa4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x151aa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x151aa8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x151AA8u;
    SET_GPR_U32(ctx, 31, 0x151AB0u);
    ctx->pc = 0x151AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151AA8u;
            // 0x151aac: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151AB0u; }
        if (ctx->pc != 0x151AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151AB0u; }
        if (ctx->pc != 0x151AB0u) { return; }
    }
    ctx->pc = 0x151AB0u;
label_151ab0:
    // 0x151ab0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x151ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151ab4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x151ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ab8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ac0: 0x0  nop
    ctx->pc = 0x151ac0u;
    // NOP
    // 0x151ac4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x151ac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x151ac8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x151AC8u;
    SET_GPR_U32(ctx, 31, 0x151AD0u);
    ctx->pc = 0x151ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151AC8u;
            // 0x151acc: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151AD0u; }
        if (ctx->pc != 0x151AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151AD0u; }
        if (ctx->pc != 0x151AD0u) { return; }
    }
    ctx->pc = 0x151AD0u;
label_151ad0:
    // 0x151ad0: 0x579021  addu        $s2, $v0, $s7
    ctx->pc = 0x151ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x151ad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151ad8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x151ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x151adc: 0x25e9021  addu        $s2, $s2, $fp
    ctx->pc = 0x151adcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x151ae0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x151ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x151ae4: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x151ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x151ae8: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x151AE8u;
    {
        const bool branch_taken_0x151ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x151AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151AE8u;
            // 0x151aec: 0x2368821  addu        $s1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ae8) {
            ctx->pc = 0x151B30u;
            goto label_151b30;
        }
    }
    ctx->pc = 0x151AF0u;
    // 0x151af0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x151AF0u;
    {
        const bool branch_taken_0x151af0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x151af0) {
            ctx->pc = 0x151B18u;
            goto label_151b18;
        }
    }
    ctx->pc = 0x151AF8u;
    // 0x151af8: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x151af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x151afc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x151afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b00: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x151b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b04: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x151b04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b08: 0xc04d320  jal         func_134C80
    ctx->pc = 0x151B08u;
    SET_GPR_U32(ctx, 31, 0x151B10u);
    ctx->pc = 0x151B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151B08u;
            // 0x151b0c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B10u; }
        if (ctx->pc != 0x151B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B10u; }
        if (ctx->pc != 0x151B10u) { return; }
    }
    ctx->pc = 0x151B10u;
label_151b10:
    // 0x151b10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x151B10u;
    {
        const bool branch_taken_0x151b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151b10) {
            ctx->pc = 0x151B30u;
            goto label_151b30;
        }
    }
    ctx->pc = 0x151B18u;
label_151b18:
    // 0x151b18: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x151b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x151b1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x151b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b20: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x151b20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x151b24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x151b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b28: 0xc04d320  jal         func_134C80
    ctx->pc = 0x151B28u;
    SET_GPR_U32(ctx, 31, 0x151B30u);
    ctx->pc = 0x151B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151B28u;
            // 0x151b2c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B30u; }
        if (ctx->pc != 0x151B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B30u; }
        if (ctx->pc != 0x151B30u) { return; }
    }
    ctx->pc = 0x151B30u;
label_151b30:
    // 0x151b30: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x151b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x151b34: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x151b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x151b38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x151b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b3c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x151b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x151b40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x151b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b44: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x151b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x151b48: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x151b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b4c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x151B4Cu;
    SET_GPR_U32(ctx, 31, 0x151B54u);
    ctx->pc = 0x151B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151B4Cu;
            // 0x151b50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B54u; }
        if (ctx->pc != 0x151B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B54u; }
        if (ctx->pc != 0x151B54u) { return; }
    }
    ctx->pc = 0x151B54u;
label_151b54:
    // 0x151b54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x151b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x151b58: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x151b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x151b5c: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x151B5Cu;
    {
        const bool branch_taken_0x151b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151B5Cu;
            // 0x151b60: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b5c) {
            ctx->pc = 0x151A88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_151a88;
        }
    }
    ctx->pc = 0x151B64u;
    // 0x151b64: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x151B64u;
    SET_GPR_U32(ctx, 31, 0x151B6Cu);
    ctx->pc = 0x151B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151B64u;
            // 0x151b68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B6Cu; }
        if (ctx->pc != 0x151B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B6Cu; }
        if (ctx->pc != 0x151B6Cu) { return; }
    }
    ctx->pc = 0x151B6Cu;
label_151b6c:
    // 0x151b6c: 0x8ea30150  lw          $v1, 0x150($s5)
    ctx->pc = 0x151b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
    // 0x151b70: 0x106000ab  beqz        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x151B70u;
    {
        const bool branch_taken_0x151b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151b70) {
            ctx->pc = 0x151E20u;
            goto label_151e20;
        }
    }
    ctx->pc = 0x151B78u;
    // 0x151b78: 0xc6a10134  lwc1        $f1, 0x134($s5)
    ctx->pc = 0x151b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151b7c: 0xc6a0017c  lwc1        $f0, 0x17C($s5)
    ctx->pc = 0x151b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151b80: 0xc6ae0188  lwc1        $f14, 0x188($s5)
    ctx->pc = 0x151b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x151b84: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x151b84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x151b88: 0xc0543fc  jal         func_150FF0
    ctx->pc = 0x151B88u;
    SET_GPR_U32(ctx, 31, 0x151B90u);
    ctx->pc = 0x151B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151B88u;
            // 0x151b8c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x150FF0u;
    if (runtime->hasFunction(0x150FF0u)) {
        auto targetFn = runtime->lookupFunction(0x150FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B90u; }
        if (ctx->pc != 0x151B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolation__Ffff_0x150ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B90u; }
        if (ctx->pc != 0x151B90u) { return; }
    }
    ctx->pc = 0x151B90u;
label_151b90:
    // 0x151b90: 0xc0a248c  jal         func_289230
    ctx->pc = 0x151B90u;
    SET_GPR_U32(ctx, 31, 0x151B98u);
    ctx->pc = 0x151B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151B90u;
            // 0x151b94: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B98u; }
        if (ctx->pc != 0x151B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B98u; }
        if (ctx->pc != 0x151B98u) { return; }
    }
    ctx->pc = 0x151B98u;
label_151b98:
    // 0x151b98: 0xc6a10138  lwc1        $f1, 0x138($s5)
    ctx->pc = 0x151b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151b9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x151b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ba0: 0xc6a00180  lwc1        $f0, 0x180($s5)
    ctx->pc = 0x151ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151ba4: 0xc6ae0188  lwc1        $f14, 0x188($s5)
    ctx->pc = 0x151ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x151ba8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x151ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x151bac: 0xc0543fc  jal         func_150FF0
    ctx->pc = 0x151BACu;
    SET_GPR_U32(ctx, 31, 0x151BB4u);
    ctx->pc = 0x151BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151BACu;
            // 0x151bb0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x150FF0u;
    if (runtime->hasFunction(0x150FF0u)) {
        auto targetFn = runtime->lookupFunction(0x150FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151BB4u; }
        if (ctx->pc != 0x151BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolation__Ffff_0x150ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151BB4u; }
        if (ctx->pc != 0x151BB4u) { return; }
    }
    ctx->pc = 0x151BB4u;
label_151bb4:
    // 0x151bb4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x151BB4u;
    SET_GPR_U32(ctx, 31, 0x151BBCu);
    ctx->pc = 0x151BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151BB4u;
            // 0x151bb8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151BBCu; }
        if (ctx->pc != 0x151BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151BBCu; }
        if (ctx->pc != 0x151BBCu) { return; }
    }
    ctx->pc = 0x151BBCu;
label_151bbc:
    // 0x151bbc: 0xc6a10134  lwc1        $f1, 0x134($s5)
    ctx->pc = 0x151bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151bc0: 0x5e8821  addu        $s1, $v0, $fp
    ctx->pc = 0x151bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x151bc4: 0xc6a0016c  lwc1        $f0, 0x16C($s5)
    ctx->pc = 0x151bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151bc8: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x151bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x151bcc: 0xc6ae0188  lwc1        $f14, 0x188($s5)
    ctx->pc = 0x151bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x151bd0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x151bd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x151bd4: 0xc0543fc  jal         func_150FF0
    ctx->pc = 0x151BD4u;
    SET_GPR_U32(ctx, 31, 0x151BDCu);
    ctx->pc = 0x151BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151BD4u;
            // 0x151bd8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x150FF0u;
    if (runtime->hasFunction(0x150FF0u)) {
        auto targetFn = runtime->lookupFunction(0x150FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151BDCu; }
        if (ctx->pc != 0x151BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolation__Ffff_0x150ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151BDCu; }
        if (ctx->pc != 0x151BDCu) { return; }
    }
    ctx->pc = 0x151BDCu;
label_151bdc:
    // 0x151bdc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x151BDCu;
    SET_GPR_U32(ctx, 31, 0x151BE4u);
    ctx->pc = 0x151BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151BDCu;
            // 0x151be0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151BE4u; }
        if (ctx->pc != 0x151BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151BE4u; }
        if (ctx->pc != 0x151BE4u) { return; }
    }
    ctx->pc = 0x151BE4u;
label_151be4:
    // 0x151be4: 0xc6a10138  lwc1        $f1, 0x138($s5)
    ctx->pc = 0x151be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151be8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x151be8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151bec: 0xc6a00170  lwc1        $f0, 0x170($s5)
    ctx->pc = 0x151becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151bf0: 0xc6ae0188  lwc1        $f14, 0x188($s5)
    ctx->pc = 0x151bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x151bf4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x151bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x151bf8: 0xc0543fc  jal         func_150FF0
    ctx->pc = 0x151BF8u;
    SET_GPR_U32(ctx, 31, 0x151C00u);
    ctx->pc = 0x151BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151BF8u;
            // 0x151bfc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x150FF0u;
    if (runtime->hasFunction(0x150FF0u)) {
        auto targetFn = runtime->lookupFunction(0x150FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C00u; }
        if (ctx->pc != 0x151C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolation__Ffff_0x150ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C00u; }
        if (ctx->pc != 0x151C00u) { return; }
    }
    ctx->pc = 0x151C00u;
label_151c00:
    // 0x151c00: 0xc0a248c  jal         func_289230
    ctx->pc = 0x151C00u;
    SET_GPR_U32(ctx, 31, 0x151C08u);
    ctx->pc = 0x151C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151C00u;
            // 0x151c04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C08u; }
        if (ctx->pc != 0x151C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C08u; }
        if (ctx->pc != 0x151C08u) { return; }
    }
    ctx->pc = 0x151C08u;
label_151c08:
    // 0x151c08: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x151c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x151c0c: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x151c0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x151c10: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x151c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x151c14: 0xc6a10134  lwc1        $f1, 0x134($s5)
    ctx->pc = 0x151c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151c18: 0xc6a00174  lwc1        $f0, 0x174($s5)
    ctx->pc = 0x151c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151c1c: 0xc6ae0188  lwc1        $f14, 0x188($s5)
    ctx->pc = 0x151c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x151c20: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x151c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x151c24: 0xc0543fc  jal         func_150FF0
    ctx->pc = 0x151C24u;
    SET_GPR_U32(ctx, 31, 0x151C2Cu);
    ctx->pc = 0x151C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151C24u;
            // 0x151c28: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x150FF0u;
    if (runtime->hasFunction(0x150FF0u)) {
        auto targetFn = runtime->lookupFunction(0x150FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C2Cu; }
        if (ctx->pc != 0x151C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolation__Ffff_0x150ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C2Cu; }
        if (ctx->pc != 0x151C2Cu) { return; }
    }
    ctx->pc = 0x151C2Cu;
label_151c2c:
    // 0x151c2c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x151C2Cu;
    SET_GPR_U32(ctx, 31, 0x151C34u);
    ctx->pc = 0x151C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151C2Cu;
            // 0x151c30: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C34u; }
        if (ctx->pc != 0x151C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C34u; }
        if (ctx->pc != 0x151C34u) { return; }
    }
    ctx->pc = 0x151C34u;
label_151c34:
    // 0x151c34: 0xc6a10138  lwc1        $f1, 0x138($s5)
    ctx->pc = 0x151c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151c38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x151c38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151c3c: 0xc6a00178  lwc1        $f0, 0x178($s5)
    ctx->pc = 0x151c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151c40: 0xc6ae0188  lwc1        $f14, 0x188($s5)
    ctx->pc = 0x151c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x151c44: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x151c44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x151c48: 0xc0543fc  jal         func_150FF0
    ctx->pc = 0x151C48u;
    SET_GPR_U32(ctx, 31, 0x151C50u);
    ctx->pc = 0x151C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151C48u;
            // 0x151c4c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x150FF0u;
    if (runtime->hasFunction(0x150FF0u)) {
        auto targetFn = runtime->lookupFunction(0x150FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C50u; }
        if (ctx->pc != 0x151C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolation__Ffff_0x150ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C50u; }
        if (ctx->pc != 0x151C50u) { return; }
    }
    ctx->pc = 0x151C50u;
label_151c50:
    // 0x151c50: 0xc0a248c  jal         func_289230
    ctx->pc = 0x151C50u;
    SET_GPR_U32(ctx, 31, 0x151C58u);
    ctx->pc = 0x151C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151C50u;
            // 0x151c54: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C58u; }
        if (ctx->pc != 0x151C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C58u; }
        if (ctx->pc != 0x151C58u) { return; }
    }
    ctx->pc = 0x151C58u;
label_151c58:
    // 0x151c58: 0x5ef021  addu        $fp, $v0, $fp
    ctx->pc = 0x151c58u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x151c5c: 0x2569021  addu        $s2, $s2, $s6
    ctx->pc = 0x151c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x151c60: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x151c60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151c64: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x151c64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_151c68:
    // 0x151c68: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x151c68u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151c6c: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x151c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
    // 0x151c70: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x151c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x151c74: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x151c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x151c78: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x151c78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x151c7c: 0x27a5016c  addiu       $a1, $sp, 0x16C
    ctx->pc = 0x151c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x151c80: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x151c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x151c84: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x151c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151c88: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x151c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151c8c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x151c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151c90: 0x44912000  mtc1        $s1, $f4
    ctx->pc = 0x151c90u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x151c94: 0x0  nop
    ctx->pc = 0x151c94u;
    // NOP
    // 0x151c98: 0x46802360  cvt.s.w     $f13, $f4
    ctx->pc = 0x151c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x151c9c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x151c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151ca0: 0x46800ca0  cvt.s.w     $f18, $f1
    ctx->pc = 0x151ca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
    // 0x151ca4: 0x468004e0  cvt.s.w     $f19, $f0
    ctx->pc = 0x151ca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[19] = FPU_CVT_S_W(tmp); }
    // 0x151ca8: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x151ca8u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151cb0: 0x46801c20  cvt.s.w     $f16, $f3
    ctx->pc = 0x151cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x151cb4: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x151cb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x151cb8: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x151cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x151cbc: 0xc0544d8  jal         func_151360
    ctx->pc = 0x151CBCu;
    SET_GPR_U32(ctx, 31, 0x151CC4u);
    ctx->pc = 0x151CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151CBCu;
            // 0x151cc0: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x151360u;
    if (runtime->hasFunction(0x151360u)) {
        auto targetFn = runtime->lookupFunction(0x151360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151CC4u; }
        if (ctx->pc != 0x151CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcIntersectionPoint2PAnd2P__FffffffffPfPf_0x151360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151CC4u; }
        if (ctx->pc != 0x151CC4u) { return; }
    }
    ctx->pc = 0x151CC4u;
label_151cc4:
    // 0x151cc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x151CC4u;
    {
        const bool branch_taken_0x151cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151cc4) {
            ctx->pc = 0x151CE8u;
            goto label_151ce8;
        }
    }
    ctx->pc = 0x151CCCu;
    // 0x151ccc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x151CCCu;
    SET_GPR_U32(ctx, 31, 0x151CD4u);
    ctx->pc = 0x151CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151CCCu;
            // 0x151cd0: 0xc7ac0168  lwc1        $f12, 0x168($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151CD4u; }
        if (ctx->pc != 0x151CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151CD4u; }
        if (ctx->pc != 0x151CD4u) { return; }
    }
    ctx->pc = 0x151CD4u;
label_151cd4:
    // 0x151cd4: 0xc7ac016c  lwc1        $f12, 0x16C($sp)
    ctx->pc = 0x151cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x151cd8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x151CD8u;
    SET_GPR_U32(ctx, 31, 0x151CE0u);
    ctx->pc = 0x151CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151CD8u;
            // 0x151cdc: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151CE0u; }
        if (ctx->pc != 0x151CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151CE0u; }
        if (ctx->pc != 0x151CE0u) { return; }
    }
    ctx->pc = 0x151CE0u;
label_151ce0:
    // 0x151ce0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x151CE0u;
    {
        const bool branch_taken_0x151ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151CE0u;
            // 0x151ce4: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ce0) {
            ctx->pc = 0x151CF8u;
            goto label_151cf8;
        }
    }
    ctx->pc = 0x151CE8u;
label_151ce8:
    // 0x151ce8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x151ce8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x151cec: 0x2a61000f  slti        $at, $s3, 0xF
    ctx->pc = 0x151cecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x151cf0: 0x1420ffdd  bnez        $at, . + 4 + (-0x23 << 2)
    ctx->pc = 0x151CF0u;
    {
        const bool branch_taken_0x151cf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x151CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151CF0u;
            // 0x151cf4: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cf0) {
            ctx->pc = 0x151C68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_151c68;
        }
    }
    ctx->pc = 0x151CF8u;
label_151cf8:
    // 0x151cf8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x151cf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151cfc: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x151cfcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_151d00:
    // 0x151d00: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x151d00u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d04: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x151d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
    // 0x151d08: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x151d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x151d0c: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x151d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x151d10: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x151d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x151d14: 0x27a5016c  addiu       $a1, $sp, 0x16C
    ctx->pc = 0x151d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x151d18: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x151d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151d1c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x151d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151d20: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x151d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x151d24: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x151d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151d28: 0x44912000  mtc1        $s1, $f4
    ctx->pc = 0x151d28u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x151d2c: 0x46800ca0  cvt.s.w     $f18, $f1
    ctx->pc = 0x151d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
    // 0x151d30: 0x468004e0  cvt.s.w     $f19, $f0
    ctx->pc = 0x151d30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[19] = FPU_CVT_S_W(tmp); }
    // 0x151d34: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x151d34u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151d38: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x151d38u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d3c: 0x46802360  cvt.s.w     $f13, $f4
    ctx->pc = 0x151d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x151d40: 0x46801c20  cvt.s.w     $f16, $f3
    ctx->pc = 0x151d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x151d44: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x151d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x151d48: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x151d48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x151d4c: 0xc0544d8  jal         func_151360
    ctx->pc = 0x151D4Cu;
    SET_GPR_U32(ctx, 31, 0x151D54u);
    ctx->pc = 0x151D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151D4Cu;
            // 0x151d50: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x151360u;
    if (runtime->hasFunction(0x151360u)) {
        auto targetFn = runtime->lookupFunction(0x151360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D54u; }
        if (ctx->pc != 0x151D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcIntersectionPoint2PAnd2P__FffffffffPfPf_0x151360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D54u; }
        if (ctx->pc != 0x151D54u) { return; }
    }
    ctx->pc = 0x151D54u;
label_151d54:
    // 0x151d54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x151D54u;
    {
        const bool branch_taken_0x151d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151d54) {
            ctx->pc = 0x151D78u;
            goto label_151d78;
        }
    }
    ctx->pc = 0x151D5Cu;
    // 0x151d5c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x151D5Cu;
    SET_GPR_U32(ctx, 31, 0x151D64u);
    ctx->pc = 0x151D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151D5Cu;
            // 0x151d60: 0xc7ac0168  lwc1        $f12, 0x168($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D64u; }
        if (ctx->pc != 0x151D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D64u; }
        if (ctx->pc != 0x151D64u) { return; }
    }
    ctx->pc = 0x151D64u;
label_151d64:
    // 0x151d64: 0xc7ac016c  lwc1        $f12, 0x16C($sp)
    ctx->pc = 0x151d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x151d68: 0xc0a248c  jal         func_289230
    ctx->pc = 0x151D68u;
    SET_GPR_U32(ctx, 31, 0x151D70u);
    ctx->pc = 0x151D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151D68u;
            // 0x151d6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D70u; }
        if (ctx->pc != 0x151D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D70u; }
        if (ctx->pc != 0x151D70u) { return; }
    }
    ctx->pc = 0x151D70u;
label_151d70:
    // 0x151d70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x151D70u;
    {
        const bool branch_taken_0x151d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151D70u;
            // 0x151d74: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d70) {
            ctx->pc = 0x151D88u;
            goto label_151d88;
        }
    }
    ctx->pc = 0x151D78u;
label_151d78:
    // 0x151d78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x151d78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x151d7c: 0x2a61000f  slti        $at, $s3, 0xF
    ctx->pc = 0x151d7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x151d80: 0x1420ffdf  bnez        $at, . + 4 + (-0x21 << 2)
    ctx->pc = 0x151D80u;
    {
        const bool branch_taken_0x151d80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x151D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151D80u;
            // 0x151d84: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d80) {
            ctx->pc = 0x151D00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_151d00;
        }
    }
    ctx->pc = 0x151D88u;
label_151d88:
    // 0x151d88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x151d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d8c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x151D8Cu;
    SET_GPR_U32(ctx, 31, 0x151D94u);
    ctx->pc = 0x151D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151D8Cu;
            // 0x151d90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D94u; }
        if (ctx->pc != 0x151D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D94u; }
        if (ctx->pc != 0x151D94u) { return; }
    }
    ctx->pc = 0x151D94u;
label_151d94:
    // 0x151d94: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x151d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x151d98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151d9c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x151D9Cu;
    {
        const bool branch_taken_0x151d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x151DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151D9Cu;
            // 0x151da0: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d9c) {
            ctx->pc = 0x151DC8u;
            goto label_151dc8;
        }
    }
    ctx->pc = 0x151DA4u;
    // 0x151da4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x151da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x151da8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x151da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151dac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x151dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151db0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x151db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151db4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x151DB4u;
    SET_GPR_U32(ctx, 31, 0x151DBCu);
    ctx->pc = 0x151DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151DB4u;
            // 0x151db8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151DBCu; }
        if (ctx->pc != 0x151DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151DBCu; }
        if (ctx->pc != 0x151DBCu) { return; }
    }
    ctx->pc = 0x151DBCu;
label_151dbc:
    // 0x151dbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151DBCu;
    {
        const bool branch_taken_0x151dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151DBCu;
            // 0x151dc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151dbc) {
            ctx->pc = 0x151DE0u;
            goto label_151de0;
        }
    }
    ctx->pc = 0x151DC4u;
    // 0x151dc4: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x151dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_151dc8:
    // 0x151dc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x151dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151dcc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x151dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151dd0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x151dd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151dd4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x151DD4u;
    SET_GPR_U32(ctx, 31, 0x151DDCu);
    ctx->pc = 0x151DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151DD4u;
            // 0x151dd8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151DDCu; }
        if (ctx->pc != 0x151DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151DDCu; }
        if (ctx->pc != 0x151DDCu) { return; }
    }
    ctx->pc = 0x151DDCu;
label_151ddc:
    // 0x151ddc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151de0:
    // 0x151de0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x151de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151de4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x151de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151de8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x151DE8u;
    SET_GPR_U32(ctx, 31, 0x151DF0u);
    ctx->pc = 0x151DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151DE8u;
            // 0x151dec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151DF0u; }
        if (ctx->pc != 0x151DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151DF0u; }
        if (ctx->pc != 0x151DF0u) { return; }
    }
    ctx->pc = 0x151DF0u;
label_151df0:
    // 0x151df0: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x151df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151df4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x151df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151df8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x151df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151dfc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x151DFCu;
    SET_GPR_U32(ctx, 31, 0x151E04u);
    ctx->pc = 0x151E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151DFCu;
            // 0x151e00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E04u; }
        if (ctx->pc != 0x151E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E04u; }
        if (ctx->pc != 0x151E04u) { return; }
    }
    ctx->pc = 0x151E04u;
label_151e04:
    // 0x151e04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x151e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e08: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x151e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x151e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e10: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x151E10u;
    SET_GPR_U32(ctx, 31, 0x151E18u);
    ctx->pc = 0x151E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151E10u;
            // 0x151e14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E18u; }
        if (ctx->pc != 0x151E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E18u; }
        if (ctx->pc != 0x151E18u) { return; }
    }
    ctx->pc = 0x151E18u;
label_151e18:
    // 0x151e18: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x151E18u;
    SET_GPR_U32(ctx, 31, 0x151E20u);
    ctx->pc = 0x151E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151E18u;
            // 0x151e1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E20u; }
        if (ctx->pc != 0x151E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E20u; }
        if (ctx->pc != 0x151E20u) { return; }
    }
    ctx->pc = 0x151E20u;
label_151e20:
    // 0x151e20: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x151e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_151e24:
    // 0x151e24: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x151e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x151e28: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x151e28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x151e2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x151e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x151e30: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x151e30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x151e34: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x151e34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x151e38: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x151e38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151e3c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x151e3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151e40: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x151e40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151e44: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x151e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151e48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x151e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151e4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x151e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151e50: 0x3e00008  jr          $ra
    ctx->pc = 0x151E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151E50u;
            // 0x151e54: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151E58u;
}
