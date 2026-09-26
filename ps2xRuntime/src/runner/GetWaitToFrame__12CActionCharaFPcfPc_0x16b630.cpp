#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWaitToFrame__12CActionCharaFPcfPc
// Address: 0x16b630 - 0x16b718
void GetWaitToFrame__12CActionCharaFPcfPc_0x16b630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWaitToFrame__12CActionCharaFPcfPc_0x16b630");
#endif

    switch (ctx->pc) {
        case 0x16b670u: goto label_16b670;
        case 0x16b678u: goto label_16b678;
        case 0x16b68cu: goto label_16b68c;
        case 0x16b6d0u: goto label_16b6d0;
        default: break;
    }

    ctx->pc = 0x16b630u;

    // 0x16b630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16b630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16b634: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16b634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16b638: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16b638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16b63c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16b63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16b640: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16b640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b644: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16b644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16b648: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16b648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b64c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16b64cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16b650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16b650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b654: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16b654u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16b658: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16b658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16b65c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x16B65Cu;
    {
        const bool branch_taken_0x16b65c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B65Cu;
            // 0x16b660: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b65c) {
            ctx->pc = 0x16B6C8u;
            goto label_16b6c8;
        }
    }
    ctx->pc = 0x16B664u;
    // 0x16b664: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x16B664u;
    {
        const bool branch_taken_0x16b664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B664u;
            // 0x16b668: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b664) {
            ctx->pc = 0x16B6F8u;
            goto label_16b6f8;
        }
    }
    ctx->pc = 0x16B66Cu;
    // 0x16b66c: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x16b66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_16b670:
    // 0x16b670: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x16B670u;
    SET_GPR_U32(ctx, 31, 0x16B678u);
    ctx->pc = 0x16B674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B670u;
            // 0x16b674: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B678u; }
        if (ctx->pc != 0x16B678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B678u; }
        if (ctx->pc != 0x16B678u) { return; }
    }
    ctx->pc = 0x16B678u;
label_16b678:
    // 0x16b678: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16B678u;
    {
        const bool branch_taken_0x16b678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B678u;
            // 0x16b67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b678) {
            ctx->pc = 0x16B6B4u;
            goto label_16b6b4;
        }
    }
    ctx->pc = 0x16B680u;
    // 0x16b680: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16b680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b684: 0xc05d2b4  jal         func_174AD0
    ctx->pc = 0x16B684u;
    SET_GPR_U32(ctx, 31, 0x16B68Cu);
    ctx->pc = 0x16B688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B684u;
            // 0x16b688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174AD0u;
    if (runtime->hasFunction(0x174AD0u)) {
        auto targetFn = runtime->lookupFunction(0x174AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B68Cu; }
        if (ctx->pc != 0x16B68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyListPtr__11CCharacter2FPcPi_0x174ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B68Cu; }
        if (ctx->pc != 0x16B68Cu) { return; }
    }
    ctx->pc = 0x16B68Cu;
label_16b68c:
    // 0x16b68c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16B68Cu;
    {
        const bool branch_taken_0x16b68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b68c) {
            ctx->pc = 0x16B6B4u;
            goto label_16b6b4;
        }
    }
    ctx->pc = 0x16B694u;
    // 0x16b694: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x16b694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b698: 0xc4420028  lwc1        $f2, 0x28($v0)
    ctx->pc = 0x16b698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16b69c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16b69cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16b6a0: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x16b6a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16b6a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16b6a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16b6a8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16b6a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16b6ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16B6ACu;
    {
        const bool branch_taken_0x16b6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6ACu;
            // 0x16b6b0: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6ac) {
            ctx->pc = 0x16B6F8u;
            goto label_16b6f8;
        }
    }
    ctx->pc = 0x16B6B4u;
label_16b6b4:
    // 0x16b6b4: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x16b6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x16b6b8: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x16B6B8u;
    {
        const bool branch_taken_0x16b6b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6B8u;
            // 0x16b6bc: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6b8) {
            ctx->pc = 0x16B670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16b670;
        }
    }
    ctx->pc = 0x16B6C0u;
    // 0x16b6c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16B6C0u;
    {
        const bool branch_taken_0x16b6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b6c0) {
            ctx->pc = 0x16B6F4u;
            goto label_16b6f4;
        }
    }
    ctx->pc = 0x16B6C8u;
label_16b6c8:
    // 0x16b6c8: 0xc05d2b4  jal         func_174AD0
    ctx->pc = 0x16B6C8u;
    SET_GPR_U32(ctx, 31, 0x16B6D0u);
    ctx->pc = 0x16B6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6C8u;
            // 0x16b6cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174AD0u;
    if (runtime->hasFunction(0x174AD0u)) {
        auto targetFn = runtime->lookupFunction(0x174AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6D0u; }
        if (ctx->pc != 0x16B6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyListPtr__11CCharacter2FPcPi_0x174ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6D0u; }
        if (ctx->pc != 0x16B6D0u) { return; }
    }
    ctx->pc = 0x16B6D0u;
label_16b6d0:
    // 0x16b6d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16B6D0u;
    {
        const bool branch_taken_0x16b6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b6d0) {
            ctx->pc = 0x16B6F4u;
            goto label_16b6f4;
        }
    }
    ctx->pc = 0x16B6D8u;
    // 0x16b6d8: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x16b6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b6dc: 0xc4420028  lwc1        $f2, 0x28($v0)
    ctx->pc = 0x16b6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16b6e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16b6e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16b6e4: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x16b6e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16b6e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16b6e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16b6ec: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16b6ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16b6f0: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x16b6f0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16b6f4:
    // 0x16b6f4: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x16b6f4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_16b6f8:
    // 0x16b6f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16b6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b6fc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16b6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16b700: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16b700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b704: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16b704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16b708: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16b708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b70c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16b70cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b710: 0x3e00008  jr          $ra
    ctx->pc = 0x16B710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B710u;
            // 0x16b714: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B718u;
}
