#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MoveCamera__14CCameraControlFP11CPadControlPfP6CCPolyi
// Address: 0x2ec1f0 - 0x2ec364
void MoveCamera__14CCameraControlFP11CPadControlPfP6CCPolyi_0x2ec1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveCamera__14CCameraControlFP11CPadControlPfP6CCPolyi_0x2ec1f0");
#endif

    switch (ctx->pc) {
        case 0x2ec260u: goto label_2ec260;
        case 0x2ec290u: goto label_2ec290;
        case 0x2ec2b0u: goto label_2ec2b0;
        case 0x2ec2e0u: goto label_2ec2e0;
        case 0x2ec300u: goto label_2ec300;
        case 0x2ec314u: goto label_2ec314;
        case 0x2ec338u: goto label_2ec338;
        default: break;
    }

    ctx->pc = 0x2ec1f0u;

    // 0x2ec1f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ec1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ec1f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ec1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ec1f8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2ec1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2ec1fc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ec1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2ec200: 0x27b60094  addiu       $s6, $sp, 0x94
    ctx->pc = 0x2ec200u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x2ec204: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ec204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2ec208: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ec208u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec20c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ec20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ec210: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ec210u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec214: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ec214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ec218: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ec218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec21c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ec21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ec220: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ec220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec224: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ec224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ec228: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2ec228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec22c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ec22cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ec230: 0x27b00098  addiu       $s0, $sp, 0x98
    ctx->pc = 0x2ec230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2ec234: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2ec234u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x2ec238: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ec238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ec23c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x2ec23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x2ec240: 0x12800037  beqz        $s4, . + 4 + (0x37 << 2)
    ctx->pc = 0x2EC240u;
    {
        const bool branch_taken_0x2ec240 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC240u;
            // 0x2ec244: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec240) {
            ctx->pc = 0x2EC320u;
            goto label_2ec320;
        }
    }
    ctx->pc = 0x2EC248u;
    // 0x2ec248: 0x8ea200c4  lw          $v0, 0xC4($s5)
    ctx->pc = 0x2ec248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x2ec24c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ec24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ec250: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC250u;
    {
        const bool branch_taken_0x2ec250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC250u;
            // 0x2ec254: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec250) {
            ctx->pc = 0x2EC278u;
            goto label_2ec278;
        }
    }
    ctx->pc = 0x2EC258u;
    // 0x2ec258: 0xc0bb548  jal         func_2ED520
    ctx->pc = 0x2EC258u;
    SET_GPR_U32(ctx, 31, 0x2EC260u);
    ctx->pc = 0x2EC25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC258u;
            // 0x2ec25c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC260u; }
        if (ctx->pc != 0x2EC260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC260u; }
        if (ctx->pc != 0x2EC260u) { return; }
    }
    ctx->pc = 0x2EC260u;
label_2ec260:
    // 0x2ec260: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2ec260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2ec264: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2ec264u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2ec268: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ec268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ec26c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec270: 0x0  nop
    ctx->pc = 0x2ec270u;
    // NOP
    // 0x2ec274: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2ec274u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2ec278:
    // 0x2ec278: 0x8ea200c4  lw          $v0, 0xC4($s5)
    ctx->pc = 0x2ec278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x2ec27c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ec27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ec280: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EC280u;
    {
        const bool branch_taken_0x2ec280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC280u;
            // 0x2ec284: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec280) {
            ctx->pc = 0x2EC2C0u;
            goto label_2ec2c0;
        }
    }
    ctx->pc = 0x2EC288u;
    // 0x2ec288: 0xc0bb538  jal         func_2ED4E0
    ctx->pc = 0x2EC288u;
    SET_GPR_U32(ctx, 31, 0x2EC290u);
    ctx->pc = 0x2EC28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC288u;
            // 0x2ec28c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC290u; }
        if (ctx->pc != 0x2EC290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC290u; }
        if (ctx->pc != 0x2EC290u) { return; }
    }
    ctx->pc = 0x2EC290u;
label_2ec290:
    // 0x2ec290: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC290u;
    {
        const bool branch_taken_0x2ec290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC290u;
            // 0x2ec294: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec290) {
            ctx->pc = 0x2EC2A8u;
            goto label_2ec2a8;
        }
    }
    ctx->pc = 0x2EC298u;
    // 0x2ec298: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2ec298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2ec29c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ec29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ec2a0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2ec2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ec2a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ec2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ec2a8:
    // 0x2ec2a8: 0xc0bb538  jal         func_2ED4E0
    ctx->pc = 0x2EC2A8u;
    SET_GPR_U32(ctx, 31, 0x2EC2B0u);
    ctx->pc = 0x2EC2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC2A8u;
            // 0x2ec2ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC2B0u; }
        if (ctx->pc != 0x2EC2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC2B0u; }
        if (ctx->pc != 0x2EC2B0u) { return; }
    }
    ctx->pc = 0x2EC2B0u;
label_2ec2b0:
    // 0x2ec2b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC2B0u;
    {
        const bool branch_taken_0x2ec2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC2B0u;
            // 0x2ec2b4: 0x3c02bd4c  lui         $v0, 0xBD4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2b0) {
            ctx->pc = 0x2EC2C0u;
            goto label_2ec2c0;
        }
    }
    ctx->pc = 0x2EC2B8u;
    // 0x2ec2b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ec2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ec2bc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2ec2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ec2c0:
    // 0x2ec2c0: 0x8ea200d0  lw          $v0, 0xD0($s5)
    ctx->pc = 0x2ec2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x2ec2c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC2C4u;
    {
        const bool branch_taken_0x2ec2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC2C4u;
            // 0x2ec2c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2c4) {
            ctx->pc = 0x2EC2D4u;
            goto label_2ec2d4;
        }
    }
    ctx->pc = 0x2EC2CCu;
    // 0x2ec2cc: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x2ec2ccu;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x2ec2d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ec2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ec2d4:
    // 0x2ec2d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ec2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ec2d8: 0xc0bb548  jal         func_2ED520
    ctx->pc = 0x2EC2D8u;
    SET_GPR_U32(ctx, 31, 0x2EC2E0u);
    ctx->pc = 0x2EC2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC2D8u;
            // 0x2ec2dc: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC2E0u; }
        if (ctx->pc != 0x2EC2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC2E0u; }
        if (ctx->pc != 0x2EC2E0u) { return; }
    }
    ctx->pc = 0x2EC2E0u;
label_2ec2e0:
    // 0x2ec2e0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2ec2e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2ec2e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ec2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec2e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec2ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ec2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec2f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ec2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ec2f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ec2f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ec2f8: 0xc0bb538  jal         func_2ED4E0
    ctx->pc = 0x2EC2F8u;
    SET_GPR_U32(ctx, 31, 0x2EC300u);
    ctx->pc = 0x2EC2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC2F8u;
            // 0x2ec2fc: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC300u; }
        if (ctx->pc != 0x2EC300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC300u; }
        if (ctx->pc != 0x2EC300u) { return; }
    }
    ctx->pc = 0x2EC300u;
label_2ec300:
    // 0x2ec300: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ec300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec304: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC304u;
    {
        const bool branch_taken_0x2ec304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC304u;
            // 0x2ec308: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec304) {
            ctx->pc = 0x2EC318u;
            goto label_2ec318;
        }
    }
    ctx->pc = 0x2EC30Cu;
    // 0x2ec30c: 0xc0bb538  jal         func_2ED4E0
    ctx->pc = 0x2EC30Cu;
    SET_GPR_U32(ctx, 31, 0x2EC314u);
    ctx->pc = 0x2EC310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC30Cu;
            // 0x2ec310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC314u; }
        if (ctx->pc != 0x2EC314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC314u; }
        if (ctx->pc != 0x2EC314u) { return; }
    }
    ctx->pc = 0x2EC314u;
label_2ec314:
    // 0x2ec314: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ec314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ec318:
    // 0x2ec318: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ec318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ec31c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ec31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2ec320:
    // 0x2ec320: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ec320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec324: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ec324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec328: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ec328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec32c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2ec32cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec330: 0xc0bb0dc  jal         func_2EC370
    ctx->pc = 0x2EC330u;
    SET_GPR_U32(ctx, 31, 0x2EC338u);
    ctx->pc = 0x2EC334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC330u;
            // 0x2ec334: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC370u;
    if (runtime->hasFunction(0x2EC370u)) {
        auto targetFn = runtime->lookupFunction(0x2EC370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC338u; }
        if (ctx->pc != 0x2EC338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCamera__14CCameraControlFPQ214CCameraControl7ControlPfP6CCPolyi_0x2ec370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC338u; }
        if (ctx->pc != 0x2EC338u) { return; }
    }
    ctx->pc = 0x2EC338u;
label_2ec338:
    // 0x2ec338: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ec338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ec33c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ec33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ec340: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2ec340u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ec344: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ec344u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ec348: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ec348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ec34c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ec34cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ec350: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ec350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ec354: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ec354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec358: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ec358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec35c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC35Cu;
            // 0x2ec360: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC364u;
}
