#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcALL_GEO_PARTS__FP9SPI_STACKi
// Address: 0x193de0 - 0x193f98
void gcALL_GEO_PARTS__FP9SPI_STACKi_0x193de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcALL_GEO_PARTS__FP9SPI_STACKi_0x193de0");
#endif

    switch (ctx->pc) {
        case 0x193e08u: goto label_193e08;
        case 0x193e14u: goto label_193e14;
        case 0x193e28u: goto label_193e28;
        case 0x193e38u: goto label_193e38;
        case 0x193e74u: goto label_193e74;
        case 0x193e7cu: goto label_193e7c;
        case 0x193e88u: goto label_193e88;
        case 0x193e94u: goto label_193e94;
        case 0x193ed0u: goto label_193ed0;
        case 0x193f18u: goto label_193f18;
        case 0x193f20u: goto label_193f20;
        case 0x193f30u: goto label_193f30;
        case 0x193f4cu: goto label_193f4c;
        case 0x193f54u: goto label_193f54;
        case 0x193f64u: goto label_193f64;
        default: break;
    }

    ctx->pc = 0x193de0u;

    // 0x193de0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x193de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x193de4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x193de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x193de8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x193de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x193dec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x193decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x193df0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193df4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193df8: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x193DF8u;
    {
        const bool branch_taken_0x193df8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x193DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193DF8u;
            // 0x193dfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193df8) {
            ctx->pc = 0x193E0Cu;
            goto label_193e0c;
        }
    }
    ctx->pc = 0x193E00u;
    // 0x193e00: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x193E00u;
    SET_GPR_U32(ctx, 31, 0x193E08u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E08u; }
        if (ctx->pc != 0x193E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E08u; }
        if (ctx->pc != 0x193E08u) { return; }
    }
    ctx->pc = 0x193E08u;
label_193e08:
    // 0x193e08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x193e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193e0c:
    // 0x193e0c: 0xc064220  jal         func_190880
    ctx->pc = 0x193E0Cu;
    SET_GPR_U32(ctx, 31, 0x193E14u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E14u; }
        if (ctx->pc != 0x193E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E14u; }
        if (ctx->pc != 0x193E14u) { return; }
    }
    ctx->pc = 0x193E14u;
label_193e14:
    // 0x193e14: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x193e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x193e18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x193e18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e1c: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x193e1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x193e20: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x193e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x193e24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x193e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193e28:
    // 0x193e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x193e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e30: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x193E30u;
    SET_GPR_U32(ctx, 31, 0x193E38u);
    ctx->pc = 0x193E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193E30u;
            // 0x193e34: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E38u; }
        if (ctx->pc != 0x193E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E38u; }
        if (ctx->pc != 0x193E38u) { return; }
    }
    ctx->pc = 0x193E38u;
label_193e38:
    // 0x193e38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x193E38u;
    {
        const bool branch_taken_0x193e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193e38) {
            ctx->pc = 0x193E4Cu;
            goto label_193e4c;
        }
    }
    ctx->pc = 0x193E40u;
    // 0x193e40: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x193e40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x193e44: 0x34630300  ori         $v1, $v1, 0x300
    ctx->pc = 0x193e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)768);
    // 0x193e48: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x193e48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
label_193e4c:
    // 0x193e4c: 0x0  nop
    ctx->pc = 0x193e4cu;
    // NOP
    // 0x193e50: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x193e50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x193e54: 0x2a620028  slti        $v0, $s3, 0x28
    ctx->pc = 0x193e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x193e58: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x193E58u;
    {
        const bool branch_taken_0x193e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193e58) {
            ctx->pc = 0x193E28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193e28;
        }
    }
    ctx->pc = 0x193E60u;
    // 0x193e60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x193e60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x193e64: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x193e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x193e68: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x193E68u;
    {
        const bool branch_taken_0x193e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193E68u;
            // 0x193e6c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e68) {
            ctx->pc = 0x193E28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193e28;
        }
    }
    ctx->pc = 0x193E70u;
    // 0x193e70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x193e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193e74:
    // 0x193e74: 0xc064220  jal         func_190880
    ctx->pc = 0x193E74u;
    SET_GPR_U32(ctx, 31, 0x193E7Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E7Cu; }
        if (ctx->pc != 0x193E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E7Cu; }
        if (ctx->pc != 0x193E7Cu) { return; }
    }
    ctx->pc = 0x193E7Cu;
label_193e7c:
    // 0x193e7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e80: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x193E80u;
    SET_GPR_U32(ctx, 31, 0x193E88u);
    ctx->pc = 0x193E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193E80u;
            // 0x193e84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E88u; }
        if (ctx->pc != 0x193E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E88u; }
        if (ctx->pc != 0x193E88u) { return; }
    }
    ctx->pc = 0x193E88u;
label_193e88:
    // 0x193e88: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x193E88u;
    {
        const bool branch_taken_0x193e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193E88u;
            // 0x193e8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e88) {
            ctx->pc = 0x193F00u;
            goto label_193f00;
        }
    }
    ctx->pc = 0x193E90u;
    // 0x193e90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x193e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193e94:
    // 0x193e94: 0x0  nop
    ctx->pc = 0x193e94u;
    // NOP
    // 0x193e98: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x193e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x193e9c: 0xa0855040  sb          $a1, 0x5040($a0)
    ctx->pc = 0x193e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20544), (uint8_t)GPR_U32(ctx, 5));
    // 0x193ea0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193ea4: 0xa0855041  sb          $a1, 0x5041($a0)
    ctx->pc = 0x193ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20545), (uint8_t)GPR_U32(ctx, 5));
    // 0x193ea8: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x193ea8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x193eac: 0xa0855042  sb          $a1, 0x5042($a0)
    ctx->pc = 0x193eacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20546), (uint8_t)GPR_U32(ctx, 5));
    // 0x193eb0: 0xa0855043  sb          $a1, 0x5043($a0)
    ctx->pc = 0x193eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20547), (uint8_t)GPR_U32(ctx, 5));
    // 0x193eb4: 0xa0855044  sb          $a1, 0x5044($a0)
    ctx->pc = 0x193eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20548), (uint8_t)GPR_U32(ctx, 5));
    // 0x193eb8: 0xa0855045  sb          $a1, 0x5045($a0)
    ctx->pc = 0x193eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20549), (uint8_t)GPR_U32(ctx, 5));
    // 0x193ebc: 0xa0855046  sb          $a1, 0x5046($a0)
    ctx->pc = 0x193ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20550), (uint8_t)GPR_U32(ctx, 5));
    // 0x193ec0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x193EC0u;
    {
        const bool branch_taken_0x193ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x193EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193EC0u;
            // 0x193ec4: 0xa0855047  sb          $a1, 0x5047($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20551), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ec0) {
            ctx->pc = 0x193E94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193e94;
        }
    }
    ctx->pc = 0x193EC8u;
    // 0x193ec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ecc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x193eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193ed0:
    // 0x193ed0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x193ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x193ed4: 0xa0855090  sb          $a1, 0x5090($a0)
    ctx->pc = 0x193ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20624), (uint8_t)GPR_U32(ctx, 5));
    // 0x193ed8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193edc: 0xa0855091  sb          $a1, 0x5091($a0)
    ctx->pc = 0x193edcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20625), (uint8_t)GPR_U32(ctx, 5));
    // 0x193ee0: 0x28c30040  slti        $v1, $a2, 0x40
    ctx->pc = 0x193ee0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x193ee4: 0xa0855092  sb          $a1, 0x5092($a0)
    ctx->pc = 0x193ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20626), (uint8_t)GPR_U32(ctx, 5));
    // 0x193ee8: 0xa0855093  sb          $a1, 0x5093($a0)
    ctx->pc = 0x193ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20627), (uint8_t)GPR_U32(ctx, 5));
    // 0x193eec: 0xa0855094  sb          $a1, 0x5094($a0)
    ctx->pc = 0x193eecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20628), (uint8_t)GPR_U32(ctx, 5));
    // 0x193ef0: 0xa0855095  sb          $a1, 0x5095($a0)
    ctx->pc = 0x193ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20629), (uint8_t)GPR_U32(ctx, 5));
    // 0x193ef4: 0xa0855096  sb          $a1, 0x5096($a0)
    ctx->pc = 0x193ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20630), (uint8_t)GPR_U32(ctx, 5));
    // 0x193ef8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x193EF8u;
    {
        const bool branch_taken_0x193ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x193EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193EF8u;
            // 0x193efc: 0xa0855097  sb          $a1, 0x5097($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20631), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ef8) {
            ctx->pc = 0x193ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193ed0;
        }
    }
    ctx->pc = 0x193F00u;
label_193f00:
    // 0x193f00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x193f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x193f04: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x193f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x193f08: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x193F08u;
    {
        const bool branch_taken_0x193f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193f08) {
            ctx->pc = 0x193E74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193e74;
        }
    }
    ctx->pc = 0x193F10u;
    // 0x193f10: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x193F10u;
    {
        const bool branch_taken_0x193f10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x193F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193F10u;
            // 0x193f14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f10) {
            ctx->pc = 0x193F40u;
            goto label_193f40;
        }
    }
    ctx->pc = 0x193F18u;
label_193f18:
    // 0x193f18: 0xc064220  jal         func_190880
    ctx->pc = 0x193F18u;
    SET_GPR_U32(ctx, 31, 0x193F20u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F20u; }
        if (ctx->pc != 0x193F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F20u; }
        if (ctx->pc != 0x193F20u) { return; }
    }
    ctx->pc = 0x193F20u;
label_193f20:
    // 0x193f20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f28: 0xc0bd960  jal         func_2F6580
    ctx->pc = 0x193F28u;
    SET_GPR_U32(ctx, 31, 0x193F30u);
    ctx->pc = 0x193F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193F28u;
            // 0x193f2c: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6580u;
    if (runtime->hasFunction(0x2F6580u)) {
        auto targetFn = runtime->lookupFunction(0x2F6580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F30u; }
        if (ctx->pc != 0x193F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuildPartsNum__9CSaveDataFii_0x2f6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F30u; }
        if (ctx->pc != 0x193F30u) { return; }
    }
    ctx->pc = 0x193F30u;
label_193f30:
    // 0x193f30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x193f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x193f34: 0x2a2203e7  slti        $v0, $s1, 0x3E7
    ctx->pc = 0x193f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)999) ? 1 : 0);
    // 0x193f38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x193F38u;
    {
        const bool branch_taken_0x193f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193f38) {
            ctx->pc = 0x193F18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193f18;
        }
    }
    ctx->pc = 0x193F40u;
label_193f40:
    // 0x193f40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193f44: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x193F44u;
    {
        const bool branch_taken_0x193f44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x193F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193F44u;
            // 0x193f48: 0x241000d2  addiu       $s0, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f44) {
            ctx->pc = 0x193F74u;
            goto label_193f74;
        }
    }
    ctx->pc = 0x193F4Cu;
label_193f4c:
    // 0x193f4c: 0xc064220  jal         func_190880
    ctx->pc = 0x193F4Cu;
    SET_GPR_U32(ctx, 31, 0x193F54u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F54u; }
        if (ctx->pc != 0x193F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F54u; }
        if (ctx->pc != 0x193F54u) { return; }
    }
    ctx->pc = 0x193F54u;
label_193f54:
    // 0x193f54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f5c: 0xc0bda04  jal         func_2F6810
    ctx->pc = 0x193F5Cu;
    SET_GPR_U32(ctx, 31, 0x193F64u);
    ctx->pc = 0x193F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193F5Cu;
            // 0x193f60: 0x24060063  addiu       $a2, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6810u;
    if (runtime->hasFunction(0x2F6810u)) {
        auto targetFn = runtime->lookupFunction(0x2F6810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F64u; }
        if (ctx->pc != 0x193F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__9CSaveDataFii_0x2f6810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F64u; }
        if (ctx->pc != 0x193F64u) { return; }
    }
    ctx->pc = 0x193F64u;
label_193f64:
    // 0x193f64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x193f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x193f68: 0x2a0200f5  slti        $v0, $s0, 0xF5
    ctx->pc = 0x193f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)245) ? 1 : 0);
    // 0x193f6c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x193F6Cu;
    {
        const bool branch_taken_0x193f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193f6c) {
            ctx->pc = 0x193F4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193f4c;
        }
    }
    ctx->pc = 0x193F74u;
label_193f74:
    // 0x193f74: 0x0  nop
    ctx->pc = 0x193f74u;
    // NOP
    // 0x193f78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x193f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193f7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x193f7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193f84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x193f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193f88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193f8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193f90: 0x3e00008  jr          $ra
    ctx->pc = 0x193F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193F90u;
            // 0x193f94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193F98u;
}
