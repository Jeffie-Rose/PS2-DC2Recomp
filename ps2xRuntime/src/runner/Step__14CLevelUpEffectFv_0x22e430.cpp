#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__14CLevelUpEffectFv
// Address: 0x22e430 - 0x22e660
void Step__14CLevelUpEffectFv_0x22e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__14CLevelUpEffectFv_0x22e430");
#endif

    switch (ctx->pc) {
        case 0x22e478u: goto label_22e478;
        case 0x22e508u: goto label_22e508;
        case 0x22e52cu: goto label_22e52c;
        case 0x22e550u: goto label_22e550;
        case 0x22e578u: goto label_22e578;
        case 0x22e59cu: goto label_22e59c;
        case 0x22e5b0u: goto label_22e5b0;
        case 0x22e5d0u: goto label_22e5d0;
        default: break;
    }

    ctx->pc = 0x22e430u;

    // 0x22e430: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22e434: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22e434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x22e438: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x22e438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x22e43c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22e43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22e440: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22e440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22e444: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22e444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22e448: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22e44c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22e450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22e454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22e458: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x22e458u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e45c: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x22E45Cu;
    {
        const bool branch_taken_0x22e45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E45Cu;
            // 0x22e460: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e45c) {
            ctx->pc = 0x22E634u;
            goto label_22e634;
        }
    }
    ctx->pc = 0x22E464u;
    // 0x22e464: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x22e464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x22e468: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x22E468u;
    {
        const bool branch_taken_0x22e468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E468u;
            // 0x22e46c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e468) {
            ctx->pc = 0x22E614u;
            goto label_22e614;
        }
    }
    ctx->pc = 0x22E470u;
    // 0x22e470: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e474: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22e474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e478:
    // 0x22e478: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x22e478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x22e47c: 0x2463d410  addiu       $v1, $v1, -0x2BF0
    ctx->pc = 0x22e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956048));
    // 0x22e480: 0x70a821  addu        $s5, $v1, $s0
    ctx->pc = 0x22e480u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22e484: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x22e484u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x22e488: 0x18600058  blez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x22E488u;
    {
        const bool branch_taken_0x22e488 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22E48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E488u;
            // 0x22e48c: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e488) {
            ctx->pc = 0x22E5ECu;
            goto label_22e5ec;
        }
    }
    ctx->pc = 0x22E490u;
    // 0x22e490: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x22e490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x22e494: 0x2484cff0  addiu       $a0, $a0, -0x3010
    ctx->pc = 0x22e494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954992));
    // 0x22e498: 0x2463d1f0  addiu       $v1, $v1, -0x2E10
    ctx->pc = 0x22e498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955504));
    // 0x22e49c: 0x739021  addu        $s2, $v1, $s3
    ctx->pc = 0x22e49cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x22e4a0: 0x938821  addu        $s1, $a0, $s3
    ctx->pc = 0x22e4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x22e4a4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x22e4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e4a8: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x22e4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x22e4ac: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x22e4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e4b0: 0x2463d3f0  addiu       $v1, $v1, -0x2C10
    ctx->pc = 0x22e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956016));
    // 0x22e4b4: 0x70a021  addu        $s4, $v1, $s0
    ctx->pc = 0x22e4b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22e4b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22e4b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22e4bc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x22e4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x22e4c0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x22e4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e4c4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x22e4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e4c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22e4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22e4cc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x22e4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x22e4d0: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x22e4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e4d4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x22e4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e4d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22e4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22e4dc: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x22e4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x22e4e0: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x22e4e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22e4e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22e4e8: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x22e4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e4ec: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x22e4ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22e4f0: 0x461003c  bgez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x22E4F0u;
    {
        const bool branch_taken_0x22e4f0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x22e4f0) {
            ctx->pc = 0x22E5E4u;
            goto label_22e5e4;
        }
    }
    ctx->pc = 0x22E4F8u;
    // 0x22e4f8: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x22e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x22e4fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e500: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22E500u;
    SET_GPR_U32(ctx, 31, 0x22E508u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E508u; }
        if (ctx->pc != 0x22E508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E508u; }
        if (ctx->pc != 0x22E508u) { return; }
    }
    ctx->pc = 0x22E508u;
label_22e508:
    // 0x22e508: 0xc6c10010  lwc1        $f1, 0x10($s6)
    ctx->pc = 0x22e508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e50c: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x22e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x22e510: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22e510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22e514: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x22e514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x22e518: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e51c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22e51cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22e520: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x22e520u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x22e524: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22E524u;
    SET_GPR_U32(ctx, 31, 0x22E52Cu);
    ctx->pc = 0x22E528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E524u;
            // 0x22e528: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E52Cu; }
        if (ctx->pc != 0x22E52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E52Cu; }
        if (ctx->pc != 0x22E52Cu) { return; }
    }
    ctx->pc = 0x22E52Cu;
label_22e52c:
    // 0x22e52c: 0xc6c20014  lwc1        $f2, 0x14($s6)
    ctx->pc = 0x22e52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22e530: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x22e530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x22e534: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22e534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22e538: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x22e538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x22e53c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e540: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x22e540u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x22e544: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22e544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22e548: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22E548u;
    SET_GPR_U32(ctx, 31, 0x22E550u);
    ctx->pc = 0x22E54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E548u;
            // 0x22e54c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E550u; }
        if (ctx->pc != 0x22E550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E550u; }
        if (ctx->pc != 0x22E550u) { return; }
    }
    ctx->pc = 0x22E550u;
label_22e550:
    // 0x22e550: 0xc6c20018  lwc1        $f2, 0x18($s6)
    ctx->pc = 0x22e550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22e554: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x22e554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x22e558: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22e558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22e55c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x22e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x22e560: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22e560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x22e564: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e568: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x22e568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x22e56c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22e56cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22e570: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22E570u;
    SET_GPR_U32(ctx, 31, 0x22E578u);
    ctx->pc = 0x22E574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E570u;
            // 0x22e574: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E578u; }
        if (ctx->pc != 0x22E578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E578u; }
        if (ctx->pc != 0x22E578u) { return; }
    }
    ctx->pc = 0x22E578u;
label_22e578:
    // 0x22e578: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x22e578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x22e57c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x22e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x22e580: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x22e580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x22e584: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22e584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22e588: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22e588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22e58c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e590: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22e590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22e594: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22E594u;
    SET_GPR_U32(ctx, 31, 0x22E59Cu);
    ctx->pc = 0x22E598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E594u;
            // 0x22e598: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E59Cu; }
        if (ctx->pc != 0x22E59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E59Cu; }
        if (ctx->pc != 0x22E59Cu) { return; }
    }
    ctx->pc = 0x22E59Cu;
label_22e59c:
    // 0x22e59c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x22e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x22e5a0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22e5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x22e5a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e5a8: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22E5A8u;
    SET_GPR_U32(ctx, 31, 0x22E5B0u);
    ctx->pc = 0x22E5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E5A8u;
            // 0x22e5ac: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E5B0u; }
        if (ctx->pc != 0x22E5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E5B0u; }
        if (ctx->pc != 0x22E5B0u) { return; }
    }
    ctx->pc = 0x22E5B0u;
label_22e5b0:
    // 0x22e5b0: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x22e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x22e5b4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x22e5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22e5b8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22e5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x22e5bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22e5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22e5c0: 0x0  nop
    ctx->pc = 0x22e5c0u;
    // NOP
    // 0x22e5c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22e5c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22e5c8: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x22E5C8u;
    SET_GPR_U32(ctx, 31, 0x22E5D0u);
    ctx->pc = 0x22E5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E5C8u;
            // 0x22e5cc: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E5D0u; }
        if (ctx->pc != 0x22E5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E5D0u; }
        if (ctx->pc != 0x22E5D0u) { return; }
    }
    ctx->pc = 0x22E5D0u;
label_22e5d0:
    // 0x22e5d0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x22e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22e5d4: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x22e5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e5d8: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x22e5d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x22e5dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22e5e0: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x22e5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
label_22e5e4:
    // 0x22e5e4: 0x0  nop
    ctx->pc = 0x22e5e4u;
    // NOP
    // 0x22e5e8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x22e5e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_22e5ec:
    // 0x22e5ec: 0x0  nop
    ctx->pc = 0x22e5ecu;
    // NOP
    // 0x22e5f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22e5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22e5f4: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x22e5f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x22e5f8: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
    ctx->pc = 0x22E5F8u;
    {
        const bool branch_taken_0x22e5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E5F8u;
            // 0x22e5fc: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5f8) {
            ctx->pc = 0x22E478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e478;
        }
    }
    ctx->pc = 0x22E600u;
    // 0x22e600: 0x1ee0000c  bgtz        $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x22E600u;
    {
        const bool branch_taken_0x22e600 = (GPR_S32(ctx, 23) > 0);
        if (branch_taken_0x22e600) {
            ctx->pc = 0x22E634u;
            goto label_22e634;
        }
    }
    ctx->pc = 0x22E608u;
    // 0x22e608: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x22e608u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e60c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22E60Cu;
    {
        const bool branch_taken_0x22e60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E60Cu;
            // 0x22e610: 0xaec00024  sw          $zero, 0x24($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e60c) {
            ctx->pc = 0x22E634u;
            goto label_22e634;
        }
    }
    ctx->pc = 0x22E614u;
label_22e614:
    // 0x22e614: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x22e614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x22e618: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22e618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22e61c: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x22e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
    // 0x22e620: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x22e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x22e624: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x22e624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x22e628: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22E628u;
    {
        const bool branch_taken_0x22e628 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e628) {
            ctx->pc = 0x22E634u;
            goto label_22e634;
        }
    }
    ctx->pc = 0x22E630u;
    // 0x22e630: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x22e630u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
label_22e634:
    // 0x22e634: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22e634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22e638: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x22e638u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22e63c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22e63cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22e640: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22e640u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22e644: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22e644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e648: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22e648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e64c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22e64cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e658: 0x3e00008  jr          $ra
    ctx->pc = 0x22E658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E658u;
            // 0x22e65c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E660u;
}
