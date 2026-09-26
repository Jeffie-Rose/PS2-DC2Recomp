#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _POST_TREASURE_BOX__FP12RS_STACKDATAi
// Address: 0x277290 - 0x277370
void ps2__POST_TREASURE_BOX__FP12RS_STACKDATAi_0x277290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__POST_TREASURE_BOX__FP12RS_STACKDATAi_0x277290");
#endif

    switch (ctx->pc) {
        case 0x2772c4u: goto label_2772c4;
        case 0x2772d4u: goto label_2772d4;
        case 0x2772e4u: goto label_2772e4;
        case 0x2772fcu: goto label_2772fc;
        case 0x27734cu: goto label_27734c;
        default: break;
    }

    ctx->pc = 0x277290u;

    // 0x277290: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x277290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x277294: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x277294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x277298: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x277298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x27729c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2772a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2772a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2772a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2772a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2772a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2772a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2772ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2772acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2772b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2772b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2772b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2772b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2772b8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2772b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2772bc: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x2772BCu;
    SET_GPR_U32(ctx, 31, 0x2772C4u);
    ctx->pc = 0x2772C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2772BCu;
            // 0x2772c0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2772C4u; }
        if (ctx->pc != 0x2772C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2772C4u; }
        if (ctx->pc != 0x2772C4u) { return; }
    }
    ctx->pc = 0x2772C4u;
label_2772c4:
    // 0x2772c4: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x2772c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x2772c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2772c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2772cc: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2772CCu;
    SET_GPR_U32(ctx, 31, 0x2772D4u);
    ctx->pc = 0x2772D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2772CCu;
            // 0x2772d0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2772D4u; }
        if (ctx->pc != 0x2772D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2772D4u; }
        if (ctx->pc != 0x2772D4u) { return; }
    }
    ctx->pc = 0x2772D4u;
label_2772d4:
    // 0x2772d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2772d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2772d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2772d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2772dc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2772DCu;
    SET_GPR_U32(ctx, 31, 0x2772E4u);
    ctx->pc = 0x2772E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2772DCu;
            // 0x2772e0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2772E4u; }
        if (ctx->pc != 0x2772E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2772E4u; }
        if (ctx->pc != 0x2772E4u) { return; }
    }
    ctx->pc = 0x2772E4u;
label_2772e4:
    // 0x2772e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2772e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2772e8: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x2772e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2772ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2772ECu;
    {
        const bool branch_taken_0x2772ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2772F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2772ECu;
            // 0x2772f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2772ec) {
            ctx->pc = 0x277300u;
            goto label_277300;
        }
    }
    ctx->pc = 0x2772F4u;
    // 0x2772f4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2772F4u;
    SET_GPR_U32(ctx, 31, 0x2772FCu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2772FCu; }
        if (ctx->pc != 0x2772FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2772FCu; }
        if (ctx->pc != 0x2772FCu) { return; }
    }
    ctx->pc = 0x2772FCu;
label_2772fc:
    // 0x2772fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2772fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_277300:
    // 0x277300: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x277300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x277304: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x277304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x277308: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277308u;
    {
        const bool branch_taken_0x277308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277308) {
            ctx->pc = 0x277318u;
            goto label_277318;
        }
    }
    ctx->pc = 0x277310u;
    // 0x277310: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x277310u;
    {
        const bool branch_taken_0x277310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277310u;
            // 0x277314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277310) {
            ctx->pc = 0x277350u;
            goto label_277350;
        }
    }
    ctx->pc = 0x277318u;
label_277318:
    // 0x277318: 0x8c44007c  lw          $a0, 0x7C($v0)
    ctx->pc = 0x277318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x27731c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27731Cu;
    {
        const bool branch_taken_0x27731c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x277320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27731Cu;
            // 0x277320: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27731c) {
            ctx->pc = 0x27732Cu;
            goto label_27732c;
        }
    }
    ctx->pc = 0x277324u;
    // 0x277324: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x277324u;
    {
        const bool branch_taken_0x277324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277324u;
            // 0x277328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277324) {
            ctx->pc = 0x277350u;
            goto label_277350;
        }
    }
    ctx->pc = 0x27732Cu;
label_27732c:
    // 0x27732c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x27732cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277330: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x277330u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x277334: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x277334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277338: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x277338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27733c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x27733cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x277340: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x277340u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277344: 0xc0a3154  jal         func_28C550
    ctx->pc = 0x277344u;
    SET_GPR_U32(ctx, 31, 0x27734Cu);
    ctx->pc = 0x277348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277344u;
            // 0x277348: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C550u;
    if (runtime->hasFunction(0x28C550u)) {
        auto targetFn = runtime->lookupFunction(0x28C550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27734Cu; }
        if (ctx->pc != 0x27734Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PutTreasureBox__19CTreasureBoxManagerFiPffiiiii_0x28c550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27734Cu; }
        if (ctx->pc != 0x27734Cu) { return; }
    }
    ctx->pc = 0x27734Cu;
label_27734c:
    // 0x27734c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27734cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277350:
    // 0x277350: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x277350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277354: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x277354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x277358: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x277358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27735c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27735cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277360: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x277360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277364: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x277364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277368: 0x3e00008  jr          $ra
    ctx->pc = 0x277368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27736Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277368u;
            // 0x27736c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x277370u;
}
