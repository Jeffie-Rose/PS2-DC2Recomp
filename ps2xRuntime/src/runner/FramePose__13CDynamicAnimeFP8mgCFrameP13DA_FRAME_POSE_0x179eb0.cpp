#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FramePose__13CDynamicAnimeFP8mgCFrameP13DA_FRAME_POSE
// Address: 0x179eb0 - 0x17a1e4
void FramePose__13CDynamicAnimeFP8mgCFrameP13DA_FRAME_POSE_0x179eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FramePose__13CDynamicAnimeFP8mgCFrameP13DA_FRAME_POSE_0x179eb0");
#endif

    switch (ctx->pc) {
        case 0x179f6cu: goto label_179f6c;
        case 0x179f80u: goto label_179f80;
        case 0x179f90u: goto label_179f90;
        case 0x179fa4u: goto label_179fa4;
        case 0x179fb4u: goto label_179fb4;
        case 0x179fc8u: goto label_179fc8;
        case 0x179fe4u: goto label_179fe4;
        case 0x179ffcu: goto label_179ffc;
        case 0x17a038u: goto label_17a038;
        case 0x17a050u: goto label_17a050;
        case 0x17a05cu: goto label_17a05c;
        case 0x17a068u: goto label_17a068;
        case 0x17a090u: goto label_17a090;
        case 0x17a09cu: goto label_17a09c;
        case 0x17a0acu: goto label_17a0ac;
        case 0x17a0b8u: goto label_17a0b8;
        case 0x17a110u: goto label_17a110;
        case 0x17a120u: goto label_17a120;
        case 0x17a130u: goto label_17a130;
        case 0x17a144u: goto label_17a144;
        case 0x17a154u: goto label_17a154;
        case 0x17a164u: goto label_17a164;
        case 0x17a18cu: goto label_17a18c;
        case 0x17a198u: goto label_17a198;
        case 0x17a1a8u: goto label_17a1a8;
        case 0x17a1b4u: goto label_17a1b4;
        default: break;
    }

    ctx->pc = 0x179eb0u;

    // 0x179eb0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x179eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x179eb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x179eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x179eb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x179eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x179ebc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x179ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x179ec0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x179ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x179ec4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x179ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x179ec8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x179ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x179ecc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x179eccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ed0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x179ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x179ed4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x179ed4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ed8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x179edc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x179ee0: 0x12a000b4  beqz        $s5, . + 4 + (0xB4 << 2)
    ctx->pc = 0x179EE0u;
    {
        const bool branch_taken_0x179ee0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179EE0u;
            // 0x179ee4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ee0) {
            ctx->pc = 0x17A1B4u;
            goto label_17a1b4;
        }
    }
    ctx->pc = 0x179EE8u;
    // 0x179ee8: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x179ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x179eec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x179eecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179ef0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x179ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x179ef4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x179ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179ef8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x179ef8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179efc: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x179efcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f00: 0x10b00007  beq         $a1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x179F00u;
    {
        const bool branch_taken_0x179f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x179F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179F00u;
            // 0x179f04: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f00) {
            ctx->pc = 0x179F20u;
            goto label_179f20;
        }
    }
    ctx->pc = 0x179F08u;
    // 0x179f08: 0x14b1006d  bne         $a1, $s1, . + 4 + (0x6D << 2)
    ctx->pc = 0x179F08u;
    {
        const bool branch_taken_0x179f08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        if (branch_taken_0x179f08) {
            ctx->pc = 0x17A0C0u;
            goto label_17a0c0;
        }
    }
    ctx->pc = 0x179F10u;
    // 0x179f10: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x179f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f14: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x179f14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f18: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x179f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f1c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x179f1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_179f20:
    // 0x179f20: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x179f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x179f24: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x179f24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x179f28: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x179f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179f2c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x179f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x179f30: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x179f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x179f34: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x179f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x179f38: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x179f38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x179f3c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x179f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x179f40: 0xe69021  addu        $s2, $a3, $a2
    ctx->pc = 0x179f40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x179f44: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x179f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x179f48: 0xe59821  addu        $s3, $a3, $a1
    ctx->pc = 0x179f48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x179f4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179f50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x179f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f54: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x179f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x179f58: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x179f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f5c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x179f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x179f60: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x179f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x179f64: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x179F64u;
    SET_GPR_U32(ctx, 31, 0x179F6Cu);
    ctx->pc = 0x179F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179F64u;
            // 0x179f68: 0xe2f021  addu        $fp, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F6Cu; }
        if (ctx->pc != 0x179F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F6Cu; }
        if (ctx->pc != 0x179F6Cu) { return; }
    }
    ctx->pc = 0x179F6Cu;
label_179f6c:
    // 0x179f6c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x179f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x179f70: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x179f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x179f74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x179f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x179f78: 0xc041c4a  jal         func_107128
    ctx->pc = 0x179F78u;
    SET_GPR_U32(ctx, 31, 0x179F80u);
    ctx->pc = 0x179F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179F78u;
            // 0x179f7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F80u; }
        if (ctx->pc != 0x179F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F80u; }
        if (ctx->pc != 0x179F80u) { return; }
    }
    ctx->pc = 0x179F80u;
label_179f80:
    // 0x179f80: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x179f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x179f84: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x179f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f88: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x179F88u;
    SET_GPR_U32(ctx, 31, 0x179F90u);
    ctx->pc = 0x179F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179F88u;
            // 0x179f8c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F90u; }
        if (ctx->pc != 0x179F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F90u; }
        if (ctx->pc != 0x179F90u) { return; }
    }
    ctx->pc = 0x179F90u;
label_179f90:
    // 0x179f90: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x179f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x179f94: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x179f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x179f98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x179f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x179f9c: 0xc041c4a  jal         func_107128
    ctx->pc = 0x179F9Cu;
    SET_GPR_U32(ctx, 31, 0x179FA4u);
    ctx->pc = 0x179FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179F9Cu;
            // 0x179fa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179FA4u; }
        if (ctx->pc != 0x179FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179FA4u; }
        if (ctx->pc != 0x179FA4u) { return; }
    }
    ctx->pc = 0x179FA4u;
label_179fa4:
    // 0x179fa4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x179fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179fa8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x179fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179fac: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x179FACu;
    SET_GPR_U32(ctx, 31, 0x179FB4u);
    ctx->pc = 0x179FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179FACu;
            // 0x179fb0: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179FB4u; }
        if (ctx->pc != 0x179FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179FB4u; }
        if (ctx->pc != 0x179FB4u) { return; }
    }
    ctx->pc = 0x179FB4u;
label_179fb4:
    // 0x179fb4: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x179fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x179fb8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x179fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x179fbc: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x179fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x179fc0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x179FC0u;
    SET_GPR_U32(ctx, 31, 0x179FC8u);
    ctx->pc = 0x179FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179FC0u;
            // 0x179fc4: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179FC8u; }
        if (ctx->pc != 0x179FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179FC8u; }
        if (ctx->pc != 0x179FC8u) { return; }
    }
    ctx->pc = 0x179FC8u;
label_179fc8:
    // 0x179fc8: 0x27be00cc  addiu       $fp, $sp, 0xCC
    ctx->pc = 0x179fc8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x179fcc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x179fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x179fd0: 0x3d11021  addu        $v0, $fp, $s1
    ctx->pc = 0x179fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
    // 0x179fd4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x179fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x179fd8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x179fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x179fdc: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x179FDCu;
    SET_GPR_U32(ctx, 31, 0x179FE4u);
    ctx->pc = 0x179FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179FDCu;
            // 0x179fe0: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179FE4u; }
        if (ctx->pc != 0x179FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179FE4u; }
        if (ctx->pc != 0x179FE4u) { return; }
    }
    ctx->pc = 0x179FE4u;
label_179fe4:
    // 0x179fe4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x179fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x179fe8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x179fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x179fec: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x179fecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179ff0: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x179ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x179ff4: 0xc041be0  jal         func_106F80
    ctx->pc = 0x179FF4u;
    SET_GPR_U32(ctx, 31, 0x179FFCu);
    ctx->pc = 0x179FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179FF4u;
            // 0x179ff8: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179FFCu; }
        if (ctx->pc != 0x179FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179FFCu; }
        if (ctx->pc != 0x179FFCu) { return; }
    }
    ctx->pc = 0x179FFCu;
label_179ffc:
    // 0x179ffc: 0x3d11021  addu        $v0, $fp, $s1
    ctx->pc = 0x179ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
    // 0x17a000: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x17a000u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x17a004: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17a004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17a008: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x17a008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x17a00c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x17a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17a010: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x17a010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x17a014: 0x247300c0  addiu       $s3, $v1, 0xC0
    ctx->pc = 0x17a014u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x17a018: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17a01c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17a01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a020: 0x245200c0  addiu       $s2, $v0, 0xC0
    ctx->pc = 0x17a020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x17a024: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x17a024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x17a028: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17a028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a02c: 0x245100c0  addiu       $s1, $v0, 0xC0
    ctx->pc = 0x17a02cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x17a030: 0xc041bce  jal         func_106F38
    ctx->pc = 0x17A030u;
    SET_GPR_U32(ctx, 31, 0x17A038u);
    ctx->pc = 0x17A034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A030u;
            // 0x17a034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A038u; }
        if (ctx->pc != 0x17A038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A038u; }
        if (ctx->pc != 0x17A038u) { return; }
    }
    ctx->pc = 0x17A038u;
label_17a038:
    // 0x17a038: 0x3d01021  addu        $v0, $fp, $s0
    ctx->pc = 0x17a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x17a03c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17a03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a040: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17a040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17a044: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17a044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a048: 0xc041bce  jal         func_106F38
    ctx->pc = 0x17A048u;
    SET_GPR_U32(ctx, 31, 0x17A050u);
    ctx->pc = 0x17A04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A048u;
            // 0x17a04c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A050u; }
        if (ctx->pc != 0x17A050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A050u; }
        if (ctx->pc != 0x17A050u) { return; }
    }
    ctx->pc = 0x17A050u;
label_17a050:
    // 0x17a050: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17a050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a054: 0xc041be0  jal         func_106F80
    ctx->pc = 0x17A054u;
    SET_GPR_U32(ctx, 31, 0x17A05Cu);
    ctx->pc = 0x17A058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A054u;
            // 0x17a058: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A05Cu; }
        if (ctx->pc != 0x17A05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A05Cu; }
        if (ctx->pc != 0x17A05Cu) { return; }
    }
    ctx->pc = 0x17A05Cu;
label_17a05c:
    // 0x17a05c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x17a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17a060: 0xc041c5c  jal         func_107170
    ctx->pc = 0x17A060u;
    SET_GPR_U32(ctx, 31, 0x17A068u);
    ctx->pc = 0x17A064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A060u;
            // 0x17a064: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A068u; }
        if (ctx->pc != 0x17A068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A068u; }
        if (ctx->pc != 0x17A068u) { return; }
    }
    ctx->pc = 0x17A068u;
label_17a068:
    // 0x17a068: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17a068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17a06c: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x17a06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x17a070: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x17a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x17a074: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17A074u;
    {
        const bool branch_taken_0x17a074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A074u;
            // 0x17a078: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a074) {
            ctx->pc = 0x17A0B0u;
            goto label_17a0b0;
        }
    }
    ctx->pc = 0x17A07Cu;
    // 0x17a07c: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x17a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x17a080: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x17A080u;
    {
        const bool branch_taken_0x17a080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a080) {
            ctx->pc = 0x17A0ACu;
            goto label_17a0ac;
        }
    }
    ctx->pc = 0x17A088u;
    // 0x17a088: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x17A088u;
    SET_GPR_U32(ctx, 31, 0x17A090u);
    ctx->pc = 0x17A08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A088u;
            // 0x17a08c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A090u; }
        if (ctx->pc != 0x17A090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A090u; }
        if (ctx->pc != 0x17A090u) { return; }
    }
    ctx->pc = 0x17A090u;
label_17a090:
    // 0x17a090: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x17a090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x17a094: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x17A094u;
    SET_GPR_U32(ctx, 31, 0x17A09Cu);
    ctx->pc = 0x17A098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A094u;
            // 0x17a098: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A09Cu; }
        if (ctx->pc != 0x17A09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A09Cu; }
        if (ctx->pc != 0x17A09Cu) { return; }
    }
    ctx->pc = 0x17A09Cu;
label_17a09c:
    // 0x17a09c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17a0a0: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x17a0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x17a0a4: 0xc04c094  jal         func_130250
    ctx->pc = 0x17A0A4u;
    SET_GPR_U32(ctx, 31, 0x17A0ACu);
    ctx->pc = 0x17A0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A0A4u;
            // 0x17a0a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A0ACu; }
        if (ctx->pc != 0x17A0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A0ACu; }
        if (ctx->pc != 0x17A0ACu) { return; }
    }
    ctx->pc = 0x17A0ACu;
label_17a0ac:
    // 0x17a0ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17a0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17a0b0:
    // 0x17a0b0: 0xc04dd64  jal         func_137590
    ctx->pc = 0x17A0B0u;
    SET_GPR_U32(ctx, 31, 0x17A0B8u);
    ctx->pc = 0x17A0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A0B0u;
            // 0x17a0b4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A0B8u; }
        if (ctx->pc != 0x17A0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A0B8u; }
        if (ctx->pc != 0x17A0B8u) { return; }
    }
    ctx->pc = 0x17A0B8u;
label_17a0b8:
    // 0x17a0b8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x17A0B8u;
    {
        const bool branch_taken_0x17a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A0B8u;
            // 0x17a0bc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0b8) {
            ctx->pc = 0x17A1B8u;
            goto label_17a1b8;
        }
    }
    ctx->pc = 0x17A0C0u;
label_17a0c0:
    // 0x17a0c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17a0c4: 0x14a3003b  bne         $a1, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x17A0C4u;
    {
        const bool branch_taken_0x17a0c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x17a0c4) {
            ctx->pc = 0x17A1B4u;
            goto label_17a1b4;
        }
    }
    ctx->pc = 0x17A0CCu;
    // 0x17a0cc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x17a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x17a0d0: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x17a0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17a0d4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17a0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a0d8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x17a0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17a0dc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17a0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17a0e0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x17a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17a0e4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x17a0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x17a0e8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x17a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17a0ec: 0xe68021  addu        $s0, $a3, $a2
    ctx->pc = 0x17a0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x17a0f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x17a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17a0f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17a0f8: 0xe58821  addu        $s1, $a3, $a1
    ctx->pc = 0x17a0f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x17a0fc: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x17a0fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17a100: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17a100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a104: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17a104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17a108: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x17A108u;
    SET_GPR_U32(ctx, 31, 0x17A110u);
    ctx->pc = 0x17A10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A108u;
            // 0x17a10c: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A110u; }
        if (ctx->pc != 0x17A110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A110u; }
        if (ctx->pc != 0x17A110u) { return; }
    }
    ctx->pc = 0x17A110u;
label_17a110:
    // 0x17a110: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17a110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17a114: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x17a114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x17a118: 0xc041be0  jal         func_106F80
    ctx->pc = 0x17A118u;
    SET_GPR_U32(ctx, 31, 0x17A120u);
    ctx->pc = 0x17A11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A118u;
            // 0x17a11c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A120u; }
        if (ctx->pc != 0x17A120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A120u; }
        if (ctx->pc != 0x17A120u) { return; }
    }
    ctx->pc = 0x17A120u;
label_17a120:
    // 0x17a120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17a120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a124: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17a124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a128: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x17A128u;
    SET_GPR_U32(ctx, 31, 0x17A130u);
    ctx->pc = 0x17A12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A128u;
            // 0x17a12c: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A130u; }
        if (ctx->pc != 0x17A130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A130u; }
        if (ctx->pc != 0x17A130u) { return; }
    }
    ctx->pc = 0x17A130u;
label_17a130:
    // 0x17a130: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x17a130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17a134: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x17a134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x17a138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a13c: 0xc041be0  jal         func_106F80
    ctx->pc = 0x17A13Cu;
    SET_GPR_U32(ctx, 31, 0x17A144u);
    ctx->pc = 0x17A140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A13Cu;
            // 0x17a140: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A144u; }
        if (ctx->pc != 0x17A144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A144u; }
        if (ctx->pc != 0x17A144u) { return; }
    }
    ctx->pc = 0x17A144u;
label_17a144:
    // 0x17a144: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17a144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a148: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17a148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17a14c: 0xc041bce  jal         func_106F38
    ctx->pc = 0x17A14Cu;
    SET_GPR_U32(ctx, 31, 0x17A154u);
    ctx->pc = 0x17A150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A14Cu;
            // 0x17a150: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A154u; }
        if (ctx->pc != 0x17A154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A154u; }
        if (ctx->pc != 0x17A154u) { return; }
    }
    ctx->pc = 0x17A154u;
label_17a154:
    // 0x17a154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a158: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x17a158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17a15c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x17A15Cu;
    SET_GPR_U32(ctx, 31, 0x17A164u);
    ctx->pc = 0x17A160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A15Cu;
            // 0x17a160: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A164u; }
        if (ctx->pc != 0x17A164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A164u; }
        if (ctx->pc != 0x17A164u) { return; }
    }
    ctx->pc = 0x17A164u;
label_17a164:
    // 0x17a164: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17a164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17a168: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x17a168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x17a16c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x17a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x17a170: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17A170u;
    {
        const bool branch_taken_0x17a170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A170u;
            // 0x17a174: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a170) {
            ctx->pc = 0x17A1ACu;
            goto label_17a1ac;
        }
    }
    ctx->pc = 0x17A178u;
    // 0x17a178: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x17a178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x17a17c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x17A17Cu;
    {
        const bool branch_taken_0x17a17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a17c) {
            ctx->pc = 0x17A1A8u;
            goto label_17a1a8;
        }
    }
    ctx->pc = 0x17A184u;
    // 0x17a184: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x17A184u;
    SET_GPR_U32(ctx, 31, 0x17A18Cu);
    ctx->pc = 0x17A188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A184u;
            // 0x17a188: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A18Cu; }
        if (ctx->pc != 0x17A18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A18Cu; }
        if (ctx->pc != 0x17A18Cu) { return; }
    }
    ctx->pc = 0x17A18Cu;
label_17a18c:
    // 0x17a18c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x17a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x17a190: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x17A190u;
    SET_GPR_U32(ctx, 31, 0x17A198u);
    ctx->pc = 0x17A194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A190u;
            // 0x17a194: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A198u; }
        if (ctx->pc != 0x17A198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A198u; }
        if (ctx->pc != 0x17A198u) { return; }
    }
    ctx->pc = 0x17A198u;
label_17a198:
    // 0x17a198: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17a198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17a19c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x17a19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x17a1a0: 0xc04c094  jal         func_130250
    ctx->pc = 0x17A1A0u;
    SET_GPR_U32(ctx, 31, 0x17A1A8u);
    ctx->pc = 0x17A1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A1A0u;
            // 0x17a1a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A1A8u; }
        if (ctx->pc != 0x17A1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A1A8u; }
        if (ctx->pc != 0x17A1A8u) { return; }
    }
    ctx->pc = 0x17A1A8u;
label_17a1a8:
    // 0x17a1a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17a1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17a1ac:
    // 0x17a1ac: 0xc04dd64  jal         func_137590
    ctx->pc = 0x17A1ACu;
    SET_GPR_U32(ctx, 31, 0x17A1B4u);
    ctx->pc = 0x17A1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A1ACu;
            // 0x17a1b0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A1B4u; }
        if (ctx->pc != 0x17A1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A1B4u; }
        if (ctx->pc != 0x17A1B4u) { return; }
    }
    ctx->pc = 0x17A1B4u;
label_17a1b4:
    // 0x17a1b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17a1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_17a1b8:
    // 0x17a1b8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17a1b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17a1bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17a1bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17a1c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17a1c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17a1c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17a1c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a1c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17a1c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a1cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17a1ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a1d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a1d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a1d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a1d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x17A1DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A1DCu;
            // 0x17a1e0: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A1E4u;
}
