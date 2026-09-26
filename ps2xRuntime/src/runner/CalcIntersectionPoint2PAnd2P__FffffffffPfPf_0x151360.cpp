#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcIntersectionPoint2PAnd2P__FffffffffPfPf
// Address: 0x151360 - 0x15144c
void CalcIntersectionPoint2PAnd2P__FffffffffPfPf_0x151360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcIntersectionPoint2PAnd2P__FffffffffPfPf_0x151360");
#endif

    switch (ctx->pc) {
        case 0x1513bcu: goto label_1513bc;
        case 0x1513e8u: goto label_1513e8;
        case 0x151414u: goto label_151414;
        default: break;
    }

    ctx->pc = 0x151360u;

    // 0x151360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x151360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x151364: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x151364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x151368: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x151368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15136c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x151370: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x151370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151374: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x151374u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x151378: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x151378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15137c: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x15137cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x151380: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x151380u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x151384: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x151384u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x151388: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x151388u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x15138c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x15138cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x151390: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x151390u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x151394: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x151394u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x151398: 0x460066c6  mov.s       $f27, $f12
    ctx->pc = 0x151398u;
    ctx->f[27] = FPU_MOV_S(ctx->f[12]);
    // 0x15139c: 0x46006e86  mov.s       $f26, $f13
    ctx->pc = 0x15139cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[13]);
    // 0x1513a0: 0x46007646  mov.s       $f25, $f14
    ctx->pc = 0x1513a0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[14]);
    // 0x1513a4: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x1513a4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x1513a8: 0x460085c6  mov.s       $f23, $f16
    ctx->pc = 0x1513a8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[16]);
    // 0x1513ac: 0x46008d86  mov.s       $f22, $f17
    ctx->pc = 0x1513acu;
    ctx->f[22] = FPU_MOV_S(ctx->f[17]);
    // 0x1513b0: 0x46009546  mov.s       $f21, $f18
    ctx->pc = 0x1513b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[18]);
    // 0x1513b4: 0xc05449c  jal         func_151270
    ctx->pc = 0x1513B4u;
    SET_GPR_U32(ctx, 31, 0x1513BCu);
    ctx->pc = 0x1513B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1513B4u;
            // 0x1513b8: 0x46009d06  mov.s       $f20, $f19 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[19]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x151270u;
    if (runtime->hasFunction(0x151270u)) {
        auto targetFn = runtime->lookupFunction(0x151270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1513BCu; }
        if (ctx->pc != 0x1513BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcIntersectionPointLineAndLine__FffffffffPfPf_0x151270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1513BCu; }
        if (ctx->pc != 0x1513BCu) { return; }
    }
    ctx->pc = 0x1513BCu;
label_1513bc:
    // 0x1513bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1513BCu;
    {
        const bool branch_taken_0x1513bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1513C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1513BCu;
            // 0x1513c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513bc) {
            ctx->pc = 0x1513CCu;
            goto label_1513cc;
        }
    }
    ctx->pc = 0x1513C4u;
    // 0x1513c4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1513C4u;
    {
        const bool branch_taken_0x1513c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1513C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1513C4u;
            // 0x1513c8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513c4) {
            ctx->pc = 0x15141Cu;
            goto label_15141c;
        }
    }
    ctx->pc = 0x1513CCu;
label_1513cc:
    // 0x1513cc: 0xc6300000  lwc1        $f16, 0x0($s1)
    ctx->pc = 0x1513ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1513d0: 0xc6110000  lwc1        $f17, 0x0($s0)
    ctx->pc = 0x1513d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1513d4: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x1513d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x1513d8: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x1513d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x1513dc: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x1513dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x1513e0: 0xc054474  jal         func_1511D0
    ctx->pc = 0x1513E0u;
    SET_GPR_U32(ctx, 31, 0x1513E8u);
    ctx->pc = 0x1513E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1513E0u;
            // 0x1513e4: 0x4600c3c6  mov.s       $f15, $f24 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1511D0u;
    if (runtime->hasFunction(0x1511D0u)) {
        auto targetFn = runtime->lookupFunction(0x1511D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1513E8u; }
        if (ctx->pc != 0x1513E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPosInOutFor2P__Fffffff_0x1511d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1513E8u; }
        if (ctx->pc != 0x1513E8u) { return; }
    }
    ctx->pc = 0x1513E8u;
label_1513e8:
    // 0x1513e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1513E8u;
    {
        const bool branch_taken_0x1513e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1513ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1513E8u;
            // 0x1513ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513e8) {
            ctx->pc = 0x1513F8u;
            goto label_1513f8;
        }
    }
    ctx->pc = 0x1513F0u;
    // 0x1513f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1513F0u;
    {
        const bool branch_taken_0x1513f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1513f0) {
            ctx->pc = 0x151418u;
            goto label_151418;
        }
    }
    ctx->pc = 0x1513F8u;
label_1513f8:
    // 0x1513f8: 0xc6300000  lwc1        $f16, 0x0($s1)
    ctx->pc = 0x1513f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1513fc: 0xc6110000  lwc1        $f17, 0x0($s0)
    ctx->pc = 0x1513fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x151400: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x151400u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x151404: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x151404u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x151408: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x151408u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x15140c: 0xc054474  jal         func_1511D0
    ctx->pc = 0x15140Cu;
    SET_GPR_U32(ctx, 31, 0x151414u);
    ctx->pc = 0x151410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15140Cu;
            // 0x151410: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1511D0u;
    if (runtime->hasFunction(0x1511D0u)) {
        auto targetFn = runtime->lookupFunction(0x1511D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151414u; }
        if (ctx->pc != 0x151414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPosInOutFor2P__Fffffff_0x1511d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151414u; }
        if (ctx->pc != 0x151414u) { return; }
    }
    ctx->pc = 0x151414u;
label_151414:
    // 0x151414: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x151414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_151418:
    // 0x151418: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x151418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15141c:
    // 0x15141c: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x15141cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x151420: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x151420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151424: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x151424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x151428: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x151428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15142c: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x15142cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x151430: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x151430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x151434: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x151434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x151438: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x151438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15143c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x15143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x151440: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x151440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x151444: 0x3e00008  jr          $ra
    ctx->pc = 0x151444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151444u;
            // 0x151448: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15144Cu;
}
