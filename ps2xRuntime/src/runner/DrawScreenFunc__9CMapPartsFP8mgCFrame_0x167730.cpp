#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawScreenFunc__9CMapPartsFP8mgCFrame
// Address: 0x167730 - 0x1678e0
void DrawScreenFunc__9CMapPartsFP8mgCFrame_0x167730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawScreenFunc__9CMapPartsFP8mgCFrame_0x167730");
#endif

    switch (ctx->pc) {
        case 0x167764u: goto label_167764;
        case 0x167774u: goto label_167774;
        case 0x167780u: goto label_167780;
        case 0x167788u: goto label_167788;
        case 0x167794u: goto label_167794;
        case 0x1677a4u: goto label_1677a4;
        case 0x1677b0u: goto label_1677b0;
        case 0x1677c0u: goto label_1677c0;
        case 0x167860u: goto label_167860;
        case 0x16788cu: goto label_16788c;
        case 0x167898u: goto label_167898;
        case 0x1678a0u: goto label_1678a0;
        case 0x1678a8u: goto label_1678a8;
        case 0x1678b0u: goto label_1678b0;
        case 0x1678c0u: goto label_1678c0;
        default: break;
    }

    ctx->pc = 0x167730u;

    // 0x167730: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x167730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x167734: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x167734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x167738: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x167738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x16773c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16773cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x167740: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x167740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x167744: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x167744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x167748: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16774c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16774cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167750: 0x262402b0  addiu       $a0, $s1, 0x2B0
    ctx->pc = 0x167750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
    // 0x167754: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x167754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x167758: 0x262602fc  addiu       $a2, $s1, 0x2FC
    ctx->pc = 0x167758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 764));
    // 0x16775c: 0xc0a77f4  jal         func_29DFD0
    ctx->pc = 0x16775Cu;
    SET_GPR_U32(ctx, 31, 0x167764u);
    ctx->pc = 0x167760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16775Cu;
            // 0x167760: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFD0u;
    if (runtime->hasFunction(0x29DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167764u; }
        if (ctx->pc != 0x167764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateFlag__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167764u; }
        if (ctx->pc != 0x167764u) { return; }
    }
    ctx->pc = 0x167764u;
label_167764:
    // 0x167764: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x167764u;
    {
        const bool branch_taken_0x167764 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x167768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167764u;
            // 0x167768: 0x262402b0  addiu       $a0, $s1, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167764) {
            ctx->pc = 0x1678C0u;
            goto label_1678c0;
        }
    }
    ctx->pc = 0x16776Cu;
    // 0x16776c: 0xc0a761c  jal         func_29D870
    ctx->pc = 0x16776Cu;
    SET_GPR_U32(ctx, 31, 0x167774u);
    ctx->pc = 0x167770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16776Cu;
            // 0x167770: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167774u; }
        if (ctx->pc != 0x167774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167774u; }
        if (ctx->pc != 0x167774u) { return; }
    }
    ctx->pc = 0x167774u;
label_167774:
    // 0x167774: 0x262402b0  addiu       $a0, $s1, 0x2B0
    ctx->pc = 0x167774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
    // 0x167778: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x167778u;
    SET_GPR_U32(ctx, 31, 0x167780u);
    ctx->pc = 0x16777Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167778u;
            // 0x16777c: 0x263300c0  addiu       $s3, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167780u; }
        if (ctx->pc != 0x167780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167780u; }
        if (ctx->pc != 0x167780u) { return; }
    }
    ctx->pc = 0x167780u;
label_167780:
    // 0x167780: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x167780u;
    {
        const bool branch_taken_0x167780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167780u;
            // 0x167784: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167780) {
            ctx->pc = 0x1678B8u;
            goto label_1678b8;
        }
    }
    ctx->pc = 0x167788u;
label_167788:
    // 0x167788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16778c: 0xc0a71b0  jal         func_29C6C0
    ctx->pc = 0x16778Cu;
    SET_GPR_U32(ctx, 31, 0x167794u);
    ctx->pc = 0x167790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16778Cu;
            // 0x167790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C6C0u;
    if (runtime->hasFunction(0x29C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x29C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167794u; }
        if (ctx->pc != 0x167794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Check__10CFuncPointFP15CFuncPointCheck_0x29c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167794u; }
        if (ctx->pc != 0x167794u) { return; }
    }
    ctx->pc = 0x167794u;
label_167794:
    // 0x167794: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x167794u;
    {
        const bool branch_taken_0x167794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167794u;
            // 0x167798: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167794) {
            ctx->pc = 0x1678A8u;
            goto label_1678a8;
        }
    }
    ctx->pc = 0x16779Cu;
    // 0x16779c: 0xc04db0c  jal         func_136C30
    ctx->pc = 0x16779Cu;
    SET_GPR_U32(ctx, 31, 0x1677A4u);
    ctx->pc = 0x1677A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16779Cu;
            // 0x1677a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1677A4u; }
        if (ctx->pc != 0x1677A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1677A4u; }
        if (ctx->pc != 0x1677A4u) { return; }
    }
    ctx->pc = 0x1677A4u;
label_1677a4:
    // 0x1677a4: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x1677a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x1677a8: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x1677A8u;
    SET_GPR_U32(ctx, 31, 0x1677B0u);
    ctx->pc = 0x1677ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1677A8u;
            // 0x1677ac: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1677B0u; }
        if (ctx->pc != 0x1677B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1677B0u; }
        if (ctx->pc != 0x1677B0u) { return; }
    }
    ctx->pc = 0x1677B0u;
label_1677b0:
    // 0x1677b0: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1677B0u;
    {
        const bool branch_taken_0x1677b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1677B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1677B0u;
            // 0x1677b4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677b0) {
            ctx->pc = 0x1678A0u;
            goto label_1678a0;
        }
    }
    ctx->pc = 0x1677B8u;
    // 0x1677b8: 0xc04c050  jal         func_130140
    ctx->pc = 0x1677B8u;
    SET_GPR_U32(ctx, 31, 0x1677C0u);
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1677C0u; }
        if (ctx->pc != 0x1677C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1677C0u; }
        if (ctx->pc != 0x1677C0u) { return; }
    }
    ctx->pc = 0x1677C0u;
label_1677c0:
    // 0x1677c0: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x1677c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1677c4: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1677c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1677c8: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x1677c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1677cc: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x1677ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1677d0: 0x27a40124  addiu       $a0, $sp, 0x124
    ctx->pc = 0x1677d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x1677d4: 0x27a50134  addiu       $a1, $sp, 0x134
    ctx->pc = 0x1677d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x1677d8: 0x27a60128  addiu       $a2, $sp, 0x128
    ctx->pc = 0x1677d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x1677dc: 0x27a70138  addiu       $a3, $sp, 0x138
    ctx->pc = 0x1677dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x1677e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1677e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1677e4: 0x0  nop
    ctx->pc = 0x1677e4u;
    // NOP
    // 0x1677e8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1677e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1677ec: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1677ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1677f0: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x1677f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1677f4: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x1677f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1677f8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1677f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1677fc: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x1677fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x167800: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x167800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167804: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x167804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167808: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x167808u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x16780c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x16780cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x167810: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x167810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x167814: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x167814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167818: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x167818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x16781c: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x16781cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x167820: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x167820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167824: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x167824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167828: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x167828u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x16782c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x16782cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x167830: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x167830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x167834: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x167834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167838: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x167838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x16783c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x16783cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x167840: 0xc6540028  lwc1        $f20, 0x28($s2)
    ctx->pc = 0x167840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x167844: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x167844u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167848: 0x0  nop
    ctx->pc = 0x167848u;
    // NOP
    // 0x16784c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16784Cu;
    {
        const bool branch_taken_0x16784c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16784Cu;
            // 0x167850: 0x3c0243c8  lui         $v0, 0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16784c) {
            ctx->pc = 0x167858u;
            goto label_167858;
        }
    }
    ctx->pc = 0x167854u;
    // 0x167854: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x167854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_167858:
    // 0x167858: 0xc0516c8  jal         func_145B20
    ctx->pc = 0x167858u;
    SET_GPR_U32(ctx, 31, 0x167860u);
    ctx->pc = 0x16785Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167858u;
            // 0x16785c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145B20u;
    if (runtime->hasFunction(0x145B20u)) {
        auto targetFn = runtime->lookupFunction(0x145B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167860u; }
        if (ctx->pc != 0x167860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetDistFromCamera__FPf_0x145b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167860u; }
        if (ctx->pc != 0x167860u) { return; }
    }
    ctx->pc = 0x167860u;
label_167860:
    // 0x167860: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x167860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x167864: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x167864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167868: 0x0  nop
    ctx->pc = 0x167868u;
    // NOP
    // 0x16786c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x16786cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x167870: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x167870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167874: 0x0  nop
    ctx->pc = 0x167874u;
    // NOP
    // 0x167878: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x167878u;
    {
        const bool branch_taken_0x167878 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16787Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167878u;
            // 0x16787c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167878) {
            ctx->pc = 0x1678A8u;
            goto label_1678a8;
        }
    }
    ctx->pc = 0x167880u;
    // 0x167880: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x167880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167884: 0xc04c094  jal         func_130250
    ctx->pc = 0x167884u;
    SET_GPR_U32(ctx, 31, 0x16788Cu);
    ctx->pc = 0x167888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167884u;
            // 0x167888: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16788Cu; }
        if (ctx->pc != 0x16788Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16788Cu; }
        if (ctx->pc != 0x16788Cu) { return; }
    }
    ctx->pc = 0x16788Cu;
label_16788c:
    // 0x16788c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16788cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167890: 0xc04dd64  jal         func_137590
    ctx->pc = 0x167890u;
    SET_GPR_U32(ctx, 31, 0x167898u);
    ctx->pc = 0x167894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167890u;
            // 0x167894: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167898u; }
        if (ctx->pc != 0x167898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167898u; }
        if (ctx->pc != 0x167898u) { return; }
    }
    ctx->pc = 0x167898u;
label_167898:
    // 0x167898: 0xc050bf4  jal         func_142FD0
    ctx->pc = 0x167898u;
    SET_GPR_U32(ctx, 31, 0x1678A0u);
    ctx->pc = 0x16789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167898u;
            // 0x16789c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1678A0u; }
        if (ctx->pc != 0x1678A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1678A0u; }
        if (ctx->pc != 0x1678A0u) { return; }
    }
    ctx->pc = 0x1678A0u;
label_1678a0:
    // 0x1678a0: 0xc04db18  jal         func_136C60
    ctx->pc = 0x1678A0u;
    SET_GPR_U32(ctx, 31, 0x1678A8u);
    ctx->pc = 0x1678A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1678A0u;
            // 0x1678a4: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1678A8u; }
        if (ctx->pc != 0x1678A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1678A8u; }
        if (ctx->pc != 0x1678A8u) { return; }
    }
    ctx->pc = 0x1678A8u;
label_1678a8:
    // 0x1678a8: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x1678A8u;
    SET_GPR_U32(ctx, 31, 0x1678B0u);
    ctx->pc = 0x1678ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1678A8u;
            // 0x1678ac: 0x262402b0  addiu       $a0, $s1, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1678B0u; }
        if (ctx->pc != 0x1678B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1678B0u; }
        if (ctx->pc != 0x1678B0u) { return; }
    }
    ctx->pc = 0x1678B0u;
label_1678b0:
    // 0x1678b0: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1678B0u;
    {
        const bool branch_taken_0x1678b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1678B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1678B0u;
            // 0x1678b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1678b0) {
            ctx->pc = 0x167788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167788;
        }
    }
    ctx->pc = 0x1678B8u;
label_1678b8:
    // 0x1678b8: 0xc0a7638  jal         func_29D8E0
    ctx->pc = 0x1678B8u;
    SET_GPR_U32(ctx, 31, 0x1678C0u);
    ctx->pc = 0x1678BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1678B8u;
            // 0x1678bc: 0x262402b0  addiu       $a0, $s1, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1678C0u; }
        if (ctx->pc != 0x1678C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1678C0u; }
        if (ctx->pc != 0x1678C0u) { return; }
    }
    ctx->pc = 0x1678C0u;
label_1678c0:
    // 0x1678c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1678c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1678c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1678c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1678c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1678c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1678cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1678ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1678d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1678d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1678d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1678d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1678d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1678D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1678DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1678D8u;
            // 0x1678dc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1678E0u;
}
