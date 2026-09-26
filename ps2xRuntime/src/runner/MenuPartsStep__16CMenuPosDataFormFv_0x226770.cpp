#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPartsStep__16CMenuPosDataFormFv
// Address: 0x226770 - 0x226ac8
void MenuPartsStep__16CMenuPosDataFormFv_0x226770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPartsStep__16CMenuPosDataFormFv_0x226770");
#endif

    switch (ctx->pc) {
        case 0x2267a4u: goto label_2267a4;
        case 0x2267c8u: goto label_2267c8;
        case 0x226818u: goto label_226818;
        default: break;
    }

    ctx->pc = 0x226770u;

    // 0x226770: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x226770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x226774: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x226774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x226778: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x226778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22677c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22677cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x226780: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x226780u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226784: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x226784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x226788: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x226788u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22678c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22678cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x226790: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x226790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x226794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x226798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x226798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22679c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x22679Cu;
    {
        const bool branch_taken_0x22679c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2267A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22679Cu;
            // 0x2267a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22679c) {
            ctx->pc = 0x226A90u;
            goto label_226a90;
        }
    }
    ctx->pc = 0x2267A4u;
label_2267a4:
    // 0x2267a4: 0x8ec3006c  lw          $v1, 0x6C($s6)
    ctx->pc = 0x2267a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    // 0x2267a8: 0x758821  addu        $s1, $v1, $s5
    ctx->pc = 0x2267a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2267ac: 0x122000b6  beqz        $s1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x2267ACu;
    {
        const bool branch_taken_0x2267ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2267ac) {
            ctx->pc = 0x226A88u;
            goto label_226a88;
        }
    }
    ctx->pc = 0x2267B4u;
    // 0x2267b4: 0x8e320040  lw          $s2, 0x40($s1)
    ctx->pc = 0x2267b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2267b8: 0x124000b3  beqz        $s2, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2267B8u;
    {
        const bool branch_taken_0x2267b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2267BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2267B8u;
            // 0x2267bc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2267b8) {
            ctx->pc = 0x226A88u;
            goto label_226a88;
        }
    }
    ctx->pc = 0x2267C0u;
    // 0x2267c0: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x2267C0u;
    {
        const bool branch_taken_0x2267c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2267c0) {
            ctx->pc = 0x226A78u;
            goto label_226a78;
        }
    }
    ctx->pc = 0x2267C8u;
label_2267c8:
    // 0x2267c8: 0x96450002  lhu         $a1, 0x2($s2)
    ctx->pc = 0x2267c8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2267cc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2267ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2267d0: 0x10a300a7  beq         $a1, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2267D0u;
    {
        const bool branch_taken_0x2267d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2267D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2267D0u;
            // 0x2267d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2267d0) {
            ctx->pc = 0x226A70u;
            goto label_226a70;
        }
    }
    ctx->pc = 0x2267D8u;
    // 0x2267d8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2267d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2267dc: 0x14a30010  bne         $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2267DCu;
    {
        const bool branch_taken_0x2267dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2267dc) {
            ctx->pc = 0x226820u;
            goto label_226820;
        }
    }
    ctx->pc = 0x2267E4u;
    // 0x2267e4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2267e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2267e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2267e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2267ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2267ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2267f0: 0x0  nop
    ctx->pc = 0x2267f0u;
    // NOP
    // 0x2267f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2267f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2267f8: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2267f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2267fc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2267fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226800: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x226800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226804: 0x0  nop
    ctx->pc = 0x226804u;
    // NOP
    // 0x226808: 0x45010092  bc1t        . + 4 + (0x92 << 2)
    ctx->pc = 0x226808u;
    {
        const bool branch_taken_0x226808 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22680Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226808u;
            // 0x22680c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226808) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226810u;
    // 0x226810: 0xc087e10  jal         func_21F840
    ctx->pc = 0x226810u;
    SET_GPR_U32(ctx, 31, 0x226818u);
    ctx->pc = 0x21F840u;
    if (runtime->hasFunction(0x21F840u)) {
        auto targetFn = runtime->lookupFunction(0x21F840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226818u; }
        if (ctx->pc != 0x226818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartEffectInfoRandFunc__FP25MENU_PARTS_EFFECT_STRUCT1_0x21f840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226818u; }
        if (ctx->pc != 0x226818u) { return; }
    }
    ctx->pc = 0x226818u;
label_226818:
    // 0x226818: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x226818u;
    {
        const bool branch_taken_0x226818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226818) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226820u;
label_226820:
    // 0x226820: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226824: 0x14a4000e  bne         $a1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x226824u;
    {
        const bool branch_taken_0x226824 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x226824) {
            ctx->pc = 0x226860u;
            goto label_226860;
        }
    }
    ctx->pc = 0x22682Cu;
    // 0x22682c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x22682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226830: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x226830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x226834: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x226834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x226838: 0x0  nop
    ctx->pc = 0x226838u;
    // NOP
    // 0x22683c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22683cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x226840: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x226840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x226844: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x226844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226848: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x226848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22684c: 0x0  nop
    ctx->pc = 0x22684cu;
    // NOP
    // 0x226850: 0x45010080  bc1t        . + 4 + (0x80 << 2)
    ctx->pc = 0x226850u;
    {
        const bool branch_taken_0x226850 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x226854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226850u;
            // 0x226854: 0x46011000  add.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226850) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226858u;
    // 0x226858: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x226858u;
    {
        const bool branch_taken_0x226858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22685Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226858u;
            // 0x22685c: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x226858) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226860u;
label_226860:
    // 0x226860: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x226860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226864: 0x14a3000f  bne         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x226864u;
    {
        const bool branch_taken_0x226864 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x226864) {
            ctx->pc = 0x2268A4u;
            goto label_2268a4;
        }
    }
    ctx->pc = 0x22686Cu;
    // 0x22686c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x22686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226870: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x226870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x226874: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226878: 0x0  nop
    ctx->pc = 0x226878u;
    // NOP
    // 0x22687c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22687cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226880: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x226880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x226884: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x226884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226888: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x226888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22688c: 0x0  nop
    ctx->pc = 0x22688cu;
    // NOP
    // 0x226890: 0x45010070  bc1t        . + 4 + (0x70 << 2)
    ctx->pc = 0x226890u;
    {
        const bool branch_taken_0x226890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226890) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226898u;
    // 0x226898: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x226898u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22689c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x22689Cu;
    {
        const bool branch_taken_0x22689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2268A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22689Cu;
            // 0x2268a0: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22689c) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x2268A4u;
label_2268a4:
    // 0x2268a4: 0x0  nop
    ctx->pc = 0x2268a4u;
    // NOP
    // 0x2268a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2268a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2268ac: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2268ACu;
    {
        const bool branch_taken_0x2268ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2268B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2268ACu;
            // 0x2268b0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2268ac) {
            ctx->pc = 0x2268CCu;
            goto label_2268cc;
        }
    }
    ctx->pc = 0x2268B4u;
    // 0x2268b4: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2268B4u;
    {
        const bool branch_taken_0x2268b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2268B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2268B4u;
            // 0x2268b8: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2268b4) {
            ctx->pc = 0x2268CCu;
            goto label_2268cc;
        }
    }
    ctx->pc = 0x2268BCu;
    // 0x2268bc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2268BCu;
    {
        const bool branch_taken_0x2268bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2268C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2268BCu;
            // 0x2268c0: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2268bc) {
            ctx->pc = 0x2268CCu;
            goto label_2268cc;
        }
    }
    ctx->pc = 0x2268C4u;
    // 0x2268c4: 0x14a3002a  bne         $a1, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2268C4u;
    {
        const bool branch_taken_0x2268c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2268c4) {
            ctx->pc = 0x226970u;
            goto label_226970;
        }
    }
    ctx->pc = 0x2268CCu;
label_2268cc:
    // 0x2268cc: 0x0  nop
    ctx->pc = 0x2268ccu;
    // NOP
    // 0x2268d0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2268d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2268d4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2268d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2268d8: 0x0  nop
    ctx->pc = 0x2268d8u;
    // NOP
    // 0x2268dc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2268dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2268e0: 0x0  nop
    ctx->pc = 0x2268e0u;
    // NOP
    // 0x2268e4: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2268E4u;
    {
        const bool branch_taken_0x2268e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2268e4) {
            ctx->pc = 0x226924u;
            goto label_226924;
        }
    }
    ctx->pc = 0x2268ECu;
    // 0x2268ec: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2268ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2268f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2268f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2268f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2268f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2268f8: 0x0  nop
    ctx->pc = 0x2268f8u;
    // NOP
    // 0x2268fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2268fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226900: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x226900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x226904: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x226904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226908: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x226908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22690c: 0x0  nop
    ctx->pc = 0x22690cu;
    // NOP
    // 0x226910: 0x45010050  bc1t        . + 4 + (0x50 << 2)
    ctx->pc = 0x226910u;
    {
        const bool branch_taken_0x226910 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226910) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226918u;
    // 0x226918: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x226918u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x22691c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x22691Cu;
    {
        const bool branch_taken_0x22691c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22691Cu;
            // 0x226920: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22691c) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226924u;
label_226924:
    // 0x226924: 0x0  nop
    ctx->pc = 0x226924u;
    // NOP
    // 0x226928: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x226928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22692c: 0x0  nop
    ctx->pc = 0x22692cu;
    // NOP
    // 0x226930: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x226930u;
    {
        const bool branch_taken_0x226930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x226930) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226938u;
    // 0x226938: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x226938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22693c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22693cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x226940: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226944: 0x0  nop
    ctx->pc = 0x226944u;
    // NOP
    // 0x226948: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x226948u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22694c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x22694cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x226950: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x226950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226954: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226954u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226958: 0x0  nop
    ctx->pc = 0x226958u;
    // NOP
    // 0x22695c: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x22695Cu;
    {
        const bool branch_taken_0x22695c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22695c) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226964u;
    // 0x226964: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x226964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x226968: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x226968u;
    {
        const bool branch_taken_0x226968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22696Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226968u;
            // 0x22696c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226968) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226970u;
label_226970:
    // 0x226970: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x226970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x226974: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x226974u;
    {
        const bool branch_taken_0x226974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x226978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226974u;
            // 0x226978: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226974) {
            ctx->pc = 0x22698Cu;
            goto label_22698c;
        }
    }
    ctx->pc = 0x22697Cu;
    // 0x22697c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22697Cu;
    {
        const bool branch_taken_0x22697c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x226980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22697Cu;
            // 0x226980: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22697c) {
            ctx->pc = 0x22698Cu;
            goto label_22698c;
        }
    }
    ctx->pc = 0x226984u;
    // 0x226984: 0x14a3002a  bne         $a1, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x226984u;
    {
        const bool branch_taken_0x226984 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x226984) {
            ctx->pc = 0x226A30u;
            goto label_226a30;
        }
    }
    ctx->pc = 0x22698Cu;
label_22698c:
    // 0x22698c: 0x0  nop
    ctx->pc = 0x22698cu;
    // NOP
    // 0x226990: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x226990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226994: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x226994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x226998: 0x0  nop
    ctx->pc = 0x226998u;
    // NOP
    // 0x22699c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x22699cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2269a0: 0x0  nop
    ctx->pc = 0x2269a0u;
    // NOP
    // 0x2269a4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2269A4u;
    {
        const bool branch_taken_0x2269a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2269a4) {
            ctx->pc = 0x2269E4u;
            goto label_2269e4;
        }
    }
    ctx->pc = 0x2269ACu;
    // 0x2269ac: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2269acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2269b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2269b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2269b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2269b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2269b8: 0x0  nop
    ctx->pc = 0x2269b8u;
    // NOP
    // 0x2269bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2269bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2269c0: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2269c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2269c4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2269c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2269c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2269c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2269cc: 0x0  nop
    ctx->pc = 0x2269ccu;
    // NOP
    // 0x2269d0: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x2269D0u;
    {
        const bool branch_taken_0x2269d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2269d0) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x2269D8u;
    // 0x2269d8: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x2269d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2269dc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2269DCu;
    {
        const bool branch_taken_0x2269dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2269E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2269DCu;
            // 0x2269e0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2269dc) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x2269E4u;
label_2269e4:
    // 0x2269e4: 0x0  nop
    ctx->pc = 0x2269e4u;
    // NOP
    // 0x2269e8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2269e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2269ec: 0x0  nop
    ctx->pc = 0x2269ecu;
    // NOP
    // 0x2269f0: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x2269F0u;
    {
        const bool branch_taken_0x2269f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2269f0) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x2269F8u;
    // 0x2269f8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2269f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2269fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2269fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x226a00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226a00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226a04: 0x0  nop
    ctx->pc = 0x226a04u;
    // NOP
    // 0x226a08: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x226a08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226a0c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x226a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x226a10: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x226a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226a14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x226a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226a18: 0x0  nop
    ctx->pc = 0x226a18u;
    // NOP
    // 0x226a1c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x226A1Cu;
    {
        const bool branch_taken_0x226a1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226a1c) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226A24u;
    // 0x226a24: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x226a24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x226a28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x226A28u;
    {
        const bool branch_taken_0x226a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226A28u;
            // 0x226a2c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a28) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226A30u;
label_226a30:
    // 0x226a30: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x226a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x226a34: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x226A34u;
    {
        const bool branch_taken_0x226a34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x226a34) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226A3Cu;
    // 0x226a3c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x226a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226a40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x226a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x226a44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226a44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226a48: 0x0  nop
    ctx->pc = 0x226a48u;
    // NOP
    // 0x226a4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x226a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226a50: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x226a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_226a54:
    // 0x226a54: 0x0  nop
    ctx->pc = 0x226a54u;
    // NOP
    // 0x226a58: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x226A58u;
    {
        const bool branch_taken_0x226a58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x226a58) {
            ctx->pc = 0x226A70u;
            goto label_226a70;
        }
    }
    ctx->pc = 0x226A60u;
    // 0x226a60: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x226a60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x226a64: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x226A64u;
    {
        const bool branch_taken_0x226a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x226a64) {
            ctx->pc = 0x226A70u;
            goto label_226a70;
        }
    }
    ctx->pc = 0x226A6Cu;
    // 0x226a6c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x226a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_226a70:
    // 0x226a70: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x226a70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x226a74: 0x26520024  addiu       $s2, $s2, 0x24
    ctx->pc = 0x226a74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_226a78:
    // 0x226a78: 0x92230044  lbu         $v1, 0x44($s1)
    ctx->pc = 0x226a78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x226a7c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x226a7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x226a80: 0x1460ff51  bnez        $v1, . + 4 + (-0xAF << 2)
    ctx->pc = 0x226A80u;
    {
        const bool branch_taken_0x226a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x226a80) {
            ctx->pc = 0x2267C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2267c8;
        }
    }
    ctx->pc = 0x226A88u;
label_226a88:
    // 0x226a88: 0x26b50048  addiu       $s5, $s5, 0x48
    ctx->pc = 0x226a88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
    // 0x226a8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x226a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_226a90:
    // 0x226a90: 0x86c30068  lh          $v1, 0x68($s6)
    ctx->pc = 0x226a90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x226a94: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x226a94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x226a98: 0x1460ff42  bnez        $v1, . + 4 + (-0xBE << 2)
    ctx->pc = 0x226A98u;
    {
        const bool branch_taken_0x226a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x226a98) {
            ctx->pc = 0x2267A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2267a4;
        }
    }
    ctx->pc = 0x226AA0u;
    // 0x226aa0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x226aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x226aa4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x226aa4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x226aa8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x226aa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226aac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x226aacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226ab0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x226ab0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226ab4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x226ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226ab8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x226ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226abc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x226AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226AC0u;
            // 0x226ac4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226AC8u;
}
