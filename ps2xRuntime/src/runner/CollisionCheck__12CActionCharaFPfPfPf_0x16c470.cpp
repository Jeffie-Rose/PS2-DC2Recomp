#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CollisionCheck__12CActionCharaFPfPfPf
// Address: 0x16c470 - 0x16c79c
void CollisionCheck__12CActionCharaFPfPfPf_0x16c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CollisionCheck__12CActionCharaFPfPfPf_0x16c470");
#endif

    switch (ctx->pc) {
        case 0x16c4b8u: goto label_16c4b8;
        case 0x16c50cu: goto label_16c50c;
        case 0x16c518u: goto label_16c518;
        case 0x16c524u: goto label_16c524;
        case 0x16c5b8u: goto label_16c5b8;
        case 0x16c5c0u: goto label_16c5c0;
        case 0x16c65cu: goto label_16c65c;
        case 0x16c6bcu: goto label_16c6bc;
        case 0x16c72cu: goto label_16c72c;
        case 0x16c74cu: goto label_16c74c;
        default: break;
    }

    ctx->pc = 0x16c470u;

    // 0x16c470: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x16c470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x16c474: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x16c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x16c478: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x16c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x16c47c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x16c47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x16c480: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x16c480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x16c484: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x16c484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x16c488: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16c488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x16c48c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16c48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x16c490: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16c490u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c494: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16c494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16c498: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x16c498u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c49c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16c49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16c4a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16c4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c4a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16c4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16c4a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16c4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c4ac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16c4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c4b0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x16C4B0u;
    SET_GPR_U32(ctx, 31, 0x16C4B8u);
    ctx->pc = 0x16C4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C4B0u;
            // 0x16c4b4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4B8u; }
        if (ctx->pc != 0x16C4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4B8u; }
        if (ctx->pc != 0x16C4B8u) { return; }
    }
    ctx->pc = 0x16C4B8u;
label_16c4b8:
    // 0x16c4b8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x16c4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16c4bc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x16c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x16c4c0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x16c4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c4c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16c4c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c4cc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16c4d0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x16c4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16c4d4: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x16c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x16c4d8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x16c4d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x16c4dc: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x16c4dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x16c4e0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x16c4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16c4e4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x16c4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c4e8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x16c4e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x16c4ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c4ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c4f0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x16c4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x16c4f4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x16c4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c4f8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x16c4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c4fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16c4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16c500: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x16c500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x16c504: 0xc041c5c  jal         func_107170
    ctx->pc = 0x16C504u;
    SET_GPR_U32(ctx, 31, 0x16C50Cu);
    ctx->pc = 0x16C508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C504u;
            // 0x16c508: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C50Cu; }
        if (ctx->pc != 0x16C50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C50Cu; }
        if (ctx->pc != 0x16C50Cu) { return; }
    }
    ctx->pc = 0x16C50Cu;
label_16c50c:
    // 0x16c50c: 0x27be00c4  addiu       $fp, $sp, 0xC4
    ctx->pc = 0x16c50cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x16c510: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x16c510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x16c514: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x16c514u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_16c518:
    // 0x16c518: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x16c518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
    // 0x16c51c: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x16C51Cu;
    SET_GPR_U32(ctx, 31, 0x16C524u);
    ctx->pc = 0x16C520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C51Cu;
            // 0x16c520: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C524u; }
        if (ctx->pc != 0x16C524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C524u; }
        if (ctx->pc != 0x16C524u) { return; }
    }
    ctx->pc = 0x16C524u;
label_16c524:
    // 0x16c524: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16c524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c528: 0x1220008a  beqz        $s1, . + 4 + (0x8A << 2)
    ctx->pc = 0x16C528u;
    {
        const bool branch_taken_0x16c528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c528) {
            ctx->pc = 0x16C754u;
            goto label_16c754;
        }
    }
    ctx->pc = 0x16C530u;
    // 0x16c530: 0x8624068a  lh          $a0, 0x68A($s1)
    ctx->pc = 0x16c530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1674)));
    // 0x16c534: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16c534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c538: 0x14830086  bne         $a0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x16C538u;
    {
        const bool branch_taken_0x16c538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c538) {
            ctx->pc = 0x16C754u;
            goto label_16c754;
        }
    }
    ctx->pc = 0x16C540u;
    // 0x16c540: 0x8e241330  lw          $a0, 0x1330($s1)
    ctx->pc = 0x16c540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4912)));
    // 0x16c544: 0x10800083  beqz        $a0, . + 4 + (0x83 << 2)
    ctx->pc = 0x16C544u;
    {
        const bool branch_taken_0x16c544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C544u;
            // 0x16c548: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c544) {
            ctx->pc = 0x16C754u;
            goto label_16c754;
        }
    }
    ctx->pc = 0x16C54Cu;
    // 0x16c54c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16C54Cu;
    {
        const bool branch_taken_0x16c54c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c54c) {
            ctx->pc = 0x16C578u;
            goto label_16c578;
        }
    }
    ctx->pc = 0x16C554u;
    // 0x16c554: 0xc6210100  lwc1        $f1, 0x100($s1)
    ctx->pc = 0x16c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c558: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x16c558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x16c55c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x16c55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x16c560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c564: 0x0  nop
    ctx->pc = 0x16c564u;
    // NOP
    // 0x16c568: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c56c: 0x0  nop
    ctx->pc = 0x16c56cu;
    // NOP
    // 0x16c570: 0x45010078  bc1t        . + 4 + (0x78 << 2)
    ctx->pc = 0x16C570u;
    {
        const bool branch_taken_0x16c570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c570) {
            ctx->pc = 0x16C754u;
            goto label_16c754;
        }
    }
    ctx->pc = 0x16C578u;
label_16c578:
    // 0x16c578: 0x86240730  lh          $a0, 0x730($s1)
    ctx->pc = 0x16c578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1840)));
    // 0x16c57c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c580: 0x10830074  beq         $a0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x16C580u;
    {
        const bool branch_taken_0x16c580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c580) {
            ctx->pc = 0x16C754u;
            goto label_16c754;
        }
    }
    ctx->pc = 0x16C588u;
    // 0x16c588: 0x86230732  lh          $v1, 0x732($s1)
    ctx->pc = 0x16c588u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1842)));
    // 0x16c58c: 0x1c600071  bgtz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x16C58Cu;
    {
        const bool branch_taken_0x16c58c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x16c58c) {
            ctx->pc = 0x16C754u;
            goto label_16c754;
        }
    }
    ctx->pc = 0x16C594u;
    // 0x16c594: 0x8e231348  lw          $v1, 0x1348($s1)
    ctx->pc = 0x16c594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4936)));
    // 0x16c598: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x16c598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x16c59c: 0x1460006d  bnez        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x16C59Cu;
    {
        const bool branch_taken_0x16c59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C59Cu;
            // 0x16c5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c59c) {
            ctx->pc = 0x16C754u;
            goto label_16c754;
        }
    }
    ctx->pc = 0x16C5A4u;
    // 0x16c5a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x16c5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16c5a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c5ac: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x16c5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16c5b0: 0xc05d420  jal         func_175080
    ctx->pc = 0x16C5B0u;
    SET_GPR_U32(ctx, 31, 0x16C5B8u);
    ctx->pc = 0x16C5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C5B0u;
            // 0x16c5b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5B8u; }
        if (ctx->pc != 0x16C5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5B8u; }
        if (ctx->pc != 0x16C5B8u) { return; }
    }
    ctx->pc = 0x16C5B8u;
label_16c5b8:
    // 0x16c5b8: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x16C5B8u;
    {
        const bool branch_taken_0x16c5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c5b8) {
            ctx->pc = 0x16C754u;
            goto label_16c754;
        }
    }
    ctx->pc = 0x16C5C0u;
label_16c5c0:
    // 0x16c5c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x16c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x16c5c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C5C4u;
    {
        const bool branch_taken_0x16c5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c5c4) {
            ctx->pc = 0x16C5D4u;
            goto label_16c5d4;
        }
    }
    ctx->pc = 0x16C5CCu;
    // 0x16c5cc: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x16C5CCu;
    {
        const bool branch_taken_0x16c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C5CCu;
            // 0x16c5d0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5cc) {
            ctx->pc = 0x16C734u;
            goto label_16c734;
        }
    }
    ctx->pc = 0x16C5D4u;
label_16c5d4:
    // 0x16c5d4: 0x0  nop
    ctx->pc = 0x16c5d4u;
    // NOP
    // 0x16c5d8: 0x27a300b4  addiu       $v1, $sp, 0xB4
    ctx->pc = 0x16c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x16c5dc: 0x27b500d4  addiu       $s5, $sp, 0xD4
    ctx->pc = 0x16c5dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x16c5e0: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x16c5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x16c5e4: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x16c5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16c5e8: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x16c5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16c5ec: 0xc6820110  lwc1        $f2, 0x110($s4)
    ctx->pc = 0x16c5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16c5f0: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x16c5f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x16c5f4: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x16c5f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x16c5f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c5f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c5fc: 0x0  nop
    ctx->pc = 0x16c5fcu;
    // NOP
    // 0x16c600: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16C600u;
    {
        const bool branch_taken_0x16c600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c600) {
            ctx->pc = 0x16C610u;
            goto label_16c610;
        }
    }
    ctx->pc = 0x16C608u;
    // 0x16c608: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x16C608u;
    {
        const bool branch_taken_0x16c608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C608u;
            // 0x16c60c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c608) {
            ctx->pc = 0x16C734u;
            goto label_16c734;
        }
    }
    ctx->pc = 0x16C610u;
label_16c610:
    // 0x16c610: 0x46042841  sub.s       $f1, $f5, $f4
    ctx->pc = 0x16c610u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x16c614: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x16c614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x16c618: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16c618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c61c: 0x0  nop
    ctx->pc = 0x16c61cu;
    // NOP
    // 0x16c620: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16C620u;
    {
        const bool branch_taken_0x16c620 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c620) {
            ctx->pc = 0x16C630u;
            goto label_16c630;
        }
    }
    ctx->pc = 0x16C628u;
    // 0x16c628: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x16C628u;
    {
        const bool branch_taken_0x16c628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C628u;
            // 0x16c62c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c628) {
            ctx->pc = 0x16C734u;
            goto label_16c734;
        }
    }
    ctx->pc = 0x16C630u;
label_16c630:
    // 0x16c630: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x16c630u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x16c634: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x16c634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c638: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16c638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16c63c: 0xc680010c  lwc1        $f0, 0x10C($s4)
    ctx->pc = 0x16c63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c640: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x16c640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16c644: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16c644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16c648: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16c648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16c64c: 0x0  nop
    ctx->pc = 0x16c64cu;
    // NOP
    // 0x16c650: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x16c650u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x16c654: 0xc04c018  jal         func_130060
    ctx->pc = 0x16C654u;
    SET_GPR_U32(ctx, 31, 0x16C65Cu);
    ctx->pc = 0x16C658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C654u;
            // 0x16c658: 0x4600151c  madd.s      $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C65Cu; }
        if (ctx->pc != 0x16C65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C65Cu; }
        if (ctx->pc != 0x16C65Cu) { return; }
    }
    ctx->pc = 0x16C65Cu;
label_16c65c:
    // 0x16c65c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x16c65cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c660: 0x0  nop
    ctx->pc = 0x16c660u;
    // NOP
    // 0x16c664: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x16C664u;
    {
        const bool branch_taken_0x16c664 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c664) {
            ctx->pc = 0x16C72Cu;
            goto label_16c72c;
        }
    }
    ctx->pc = 0x16C66Cu;
    // 0x16c66c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x16c66cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x16c670: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16c670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16c674: 0x27b700e4  addiu       $s7, $sp, 0xE4
    ctx->pc = 0x16c674u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x16c678: 0x27b600e8  addiu       $s6, $sp, 0xE8
    ctx->pc = 0x16c678u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x16c67c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16c680: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16c680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c684: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x16c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c688: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x16c688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c68c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16c68cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16c690: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x16c690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x16c694: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x16c694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c698: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x16c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c69c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16c69cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16c6a0: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x16c6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x16c6a4: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x16c6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c6a8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x16c6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c6ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16c6acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16c6b0: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x16c6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x16c6b4: 0xc041be0  jal         func_106F80
    ctx->pc = 0x16C6B4u;
    SET_GPR_U32(ctx, 31, 0x16C6BCu);
    ctx->pc = 0x16C6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C6B4u;
            // 0x16c6b8: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6BCu; }
        if (ctx->pc != 0x16C6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6BCu; }
        if (ctx->pc != 0x16C6BCu) { return; }
    }
    ctx->pc = 0x16C6BCu;
label_16c6bc:
    // 0x16c6bc: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x16c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c6c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16c6c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16c6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16c6c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16c6cc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x16c6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c6d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16c6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c6d4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x16c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x16c6d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16c6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c6dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16c6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16c6e0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x16c6e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x16c6e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16c6e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16c6e8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x16c6e8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x16c6ec: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x16c6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x16c6f0: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x16c6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c6f4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x16c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c6f8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x16c6f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x16c6fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16c6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16c700: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x16c700u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x16c704: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x16c704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x16c708: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x16c708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c70c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x16c70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c710: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x16c710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x16c714: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16c714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16c718: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x16c718u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x16c71c: 0x0  nop
    ctx->pc = 0x16c71cu;
    // NOP
    // 0x16c720: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x16c720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x16c724: 0xc041c4a  jal         func_107128
    ctx->pc = 0x16C724u;
    SET_GPR_U32(ctx, 31, 0x16C72Cu);
    ctx->pc = 0x16C728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C724u;
            // 0x16c728: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C72Cu; }
        if (ctx->pc != 0x16C72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C72Cu; }
        if (ctx->pc != 0x16C72Cu) { return; }
    }
    ctx->pc = 0x16C72Cu;
label_16c72c:
    // 0x16c72c: 0x0  nop
    ctx->pc = 0x16c72cu;
    // NOP
    // 0x16c730: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16c730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16c734:
    // 0x16c734: 0x0  nop
    ctx->pc = 0x16c734u;
    // NOP
    // 0x16c738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c73c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x16c73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16c740: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16c740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c744: 0xc05d420  jal         func_175080
    ctx->pc = 0x16C744u;
    SET_GPR_U32(ctx, 31, 0x16C74Cu);
    ctx->pc = 0x16C748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C744u;
            // 0x16c748: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C74Cu; }
        if (ctx->pc != 0x16C74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C74Cu; }
        if (ctx->pc != 0x16C74Cu) { return; }
    }
    ctx->pc = 0x16C74Cu;
label_16c74c:
    // 0x16c74c: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
    ctx->pc = 0x16C74Cu;
    {
        const bool branch_taken_0x16c74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c74c) {
            ctx->pc = 0x16C5C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16c5c0;
        }
    }
    ctx->pc = 0x16C754u;
label_16c754:
    // 0x16c754: 0x0  nop
    ctx->pc = 0x16c754u;
    // NOP
    // 0x16c758: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16c758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16c75c: 0x2a030030  slti        $v1, $s0, 0x30
    ctx->pc = 0x16c75cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x16c760: 0x1460ff6d  bnez        $v1, . + 4 + (-0x93 << 2)
    ctx->pc = 0x16C760u;
    {
        const bool branch_taken_0x16c760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c760) {
            ctx->pc = 0x16C518u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16c518;
        }
    }
    ctx->pc = 0x16C768u;
    // 0x16c768: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x16c768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c76c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16c76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16c770: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x16c770u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16c774: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x16c774u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16c778: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x16c778u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16c77c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x16c77cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16c780: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16c780u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16c784: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16c784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16c788: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16c788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c78c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16c78cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c790: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16c790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c794: 0x3e00008  jr          $ra
    ctx->pc = 0x16C794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C794u;
            // 0x16c798: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C79Cu;
}
