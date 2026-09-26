#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNumSameItem__16CUserDataManagerFi
// Address: 0x19dde0 - 0x19df6c
void GetNumSameItem__16CUserDataManagerFi_0x19dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNumSameItem__16CUserDataManagerFi_0x19dde0");
#endif

    switch (ctx->pc) {
        case 0x19de20u: goto label_19de20;
        case 0x19de34u: goto label_19de34;
        case 0x19de4cu: goto label_19de4c;
        case 0x19de5cu: goto label_19de5c;
        case 0x19de78u: goto label_19de78;
        case 0x19de88u: goto label_19de88;
        case 0x19dea0u: goto label_19dea0;
        case 0x19deb4u: goto label_19deb4;
        case 0x19ded0u: goto label_19ded0;
        case 0x19df10u: goto label_19df10;
        default: break;
    }

    ctx->pc = 0x19dde0u;

    // 0x19dde0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19dde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19dde4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19dde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19dde8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x19dde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19ddec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19ddecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19ddf0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19ddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19ddf4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19ddf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19ddf8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x19ddf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ddfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19ddfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19de00: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19de00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19de04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19de08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19de08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19de0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19de0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19de10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19de10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19de14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19de14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19de18: 0xc068644  jal         func_1A1910
    ctx->pc = 0x19DE18u;
    SET_GPR_U32(ctx, 31, 0x19DE20u);
    ctx->pc = 0x19DE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE18u;
            // 0x19de1c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE20u; }
        if (ctx->pc != 0x19DE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE20u; }
        if (ctx->pc != 0x19DE20u) { return; }
    }
    ctx->pc = 0x19DE20u;
label_19de20:
    // 0x19de20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19de20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de24: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x19de24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x19de28: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x19DE28u;
    {
        const bool branch_taken_0x19de28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE28u;
            // 0x19de2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de28) {
            ctx->pc = 0x19DE70u;
            goto label_19de70;
        }
    }
    ctx->pc = 0x19DE30u;
    // 0x19de30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19de30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19de34:
    // 0x19de34: 0x2d3a021  addu        $s4, $s6, $s3
    ctx->pc = 0x19de34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x19de38: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x19de38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x19de3c: 0x16a20004  bne         $s5, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19DE3Cu;
    {
        const bool branch_taken_0x19de3c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x19DE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE3Cu;
            // 0x19de40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de3c) {
            ctx->pc = 0x19DE50u;
            goto label_19de50;
        }
    }
    ctx->pc = 0x19DE44u;
    // 0x19de44: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x19DE44u;
    SET_GPR_U32(ctx, 31, 0x19DE4Cu);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE4Cu; }
        if (ctx->pc != 0x19DE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE4Cu; }
        if (ctx->pc != 0x19DE4Cu) { return; }
    }
    ctx->pc = 0x19DE4Cu;
label_19de4c:
    // 0x19de4c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x19de4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19de50:
    // 0x19de50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19de50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de54: 0xc066658  jal         func_199960
    ctx->pc = 0x19DE54u;
    SET_GPR_U32(ctx, 31, 0x19DE5Cu);
    ctx->pc = 0x19DE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE54u;
            // 0x19de58: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199960u;
    if (runtime->hasFunction(0x199960u)) {
        auto targetFn = runtime->lookupFunction(0x199960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE5Cu; }
        if (ctx->pc != 0x19DE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxSameItemNum__13CGameDataUsedFi_0x199960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE5Cu; }
        if (ctx->pc != 0x19DE5Cu) { return; }
    }
    ctx->pc = 0x19DE5Cu;
label_19de5c:
    // 0x19de5c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x19de5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19de60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19de60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19de64: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x19de64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x19de68: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19DE68u;
    {
        const bool branch_taken_0x19de68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE68u;
            // 0x19de6c: 0x2673006c  addiu       $s3, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de68) {
            ctx->pc = 0x19DE34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19de34;
        }
    }
    ctx->pc = 0x19DE70u;
label_19de70:
    // 0x19de70: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19de70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de74: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19de74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19de78:
    // 0x19de78: 0x2d71021  addu        $v0, $s6, $s7
    ctx->pc = 0x19de78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x19de7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19de7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de80: 0x245e3f48  addiu       $fp, $v0, 0x3F48
    ctx->pc = 0x19de80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16200));
    // 0x19de84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19de84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19de88:
    // 0x19de88: 0x3d29821  addu        $s3, $fp, $s2
    ctx->pc = 0x19de88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x19de8c: 0x8662002e  lh          $v0, 0x2E($s3)
    ctx->pc = 0x19de8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 46)));
    // 0x19de90: 0x16a20004  bne         $s5, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19DE90u;
    {
        const bool branch_taken_0x19de90 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x19DE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE90u;
            // 0x19de94: 0x2664002c  addiu       $a0, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de90) {
            ctx->pc = 0x19DEA4u;
            goto label_19dea4;
        }
    }
    ctx->pc = 0x19DE98u;
    // 0x19de98: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x19DE98u;
    SET_GPR_U32(ctx, 31, 0x19DEA0u);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DEA0u; }
        if (ctx->pc != 0x19DEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DEA0u; }
        if (ctx->pc != 0x19DEA0u) { return; }
    }
    ctx->pc = 0x19DEA0u;
label_19dea0:
    // 0x19dea0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x19dea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19dea4:
    // 0x19dea4: 0x0  nop
    ctx->pc = 0x19dea4u;
    // NOP
    // 0x19dea8: 0x2664002c  addiu       $a0, $s3, 0x2C
    ctx->pc = 0x19dea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x19deac: 0xc066658  jal         func_199960
    ctx->pc = 0x19DEACu;
    SET_GPR_U32(ctx, 31, 0x19DEB4u);
    ctx->pc = 0x19DEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DEACu;
            // 0x19deb0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199960u;
    if (runtime->hasFunction(0x199960u)) {
        auto targetFn = runtime->lookupFunction(0x199960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DEB4u; }
        if (ctx->pc != 0x19DEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxSameItemNum__13CGameDataUsedFi_0x199960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DEB4u; }
        if (ctx->pc != 0x19DEB4u) { return; }
    }
    ctx->pc = 0x19DEB4u;
label_19deb4:
    // 0x19deb4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x19deb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19deb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19deb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19debc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x19debcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19dec0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x19DEC0u;
    {
        const bool branch_taken_0x19dec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DEC0u;
            // 0x19dec4: 0x2652006c  addiu       $s2, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dec0) {
            ctx->pc = 0x19DE88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19de88;
        }
    }
    ctx->pc = 0x19DEC8u;
    // 0x19dec8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19dec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19decc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19deccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ded0:
    // 0x19ded0: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x19ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x19ded4: 0x84420172  lh          $v0, 0x172($v0)
    ctx->pc = 0x19ded4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 370)));
    // 0x19ded8: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DED8u;
    {
        const bool branch_taken_0x19ded8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ded8) {
            ctx->pc = 0x19DEE4u;
            goto label_19dee4;
        }
    }
    ctx->pc = 0x19DEE0u;
    // 0x19dee0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19dee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_19dee4:
    // 0x19dee4: 0x0  nop
    ctx->pc = 0x19dee4u;
    // NOP
    // 0x19dee8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19dee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19deec: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x19deecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x19def0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19DEF0u;
    {
        const bool branch_taken_0x19def0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DEF0u;
            // 0x19def4: 0x2463006c  addiu       $v1, $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19def0) {
            ctx->pc = 0x19DED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19ded0;
        }
    }
    ctx->pc = 0x19DEF8u;
    // 0x19def8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19def8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x19defc: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x19defcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19df00: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x19DF00u;
    {
        const bool branch_taken_0x19df00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF00u;
            // 0x19df04: 0x26f7038c  addiu       $s7, $s7, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df00) {
            ctx->pc = 0x19DE78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19de78;
        }
    }
    ctx->pc = 0x19DF08u;
    // 0x19df08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19df08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19df0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19df10:
    // 0x19df10: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x19df10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x19df14: 0x84424692  lh          $v0, 0x4692($v0)
    ctx->pc = 0x19df14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18066)));
    // 0x19df18: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DF18u;
    {
        const bool branch_taken_0x19df18 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x19df18) {
            ctx->pc = 0x19DF24u;
            goto label_19df24;
        }
    }
    ctx->pc = 0x19DF20u;
    // 0x19df20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19df20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_19df24:
    // 0x19df24: 0x0  nop
    ctx->pc = 0x19df24u;
    // NOP
    // 0x19df28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19df28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19df2c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x19df2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19df30: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19DF30u;
    {
        const bool branch_taken_0x19df30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF30u;
            // 0x19df34: 0x2463006c  addiu       $v1, $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df30) {
            ctx->pc = 0x19DF10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19df10;
        }
    }
    ctx->pc = 0x19DF38u;
    // 0x19df38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19df38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df3c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19df3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19df40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19df40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19df44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19df44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19df48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19df48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19df4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19df4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19df50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19df50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19df54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19df54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19df58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19df58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19df5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19df5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19df60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19df60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19df64: 0x3e00008  jr          $ra
    ctx->pc = 0x19DF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF64u;
            // 0x19df68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DF6Cu;
}
