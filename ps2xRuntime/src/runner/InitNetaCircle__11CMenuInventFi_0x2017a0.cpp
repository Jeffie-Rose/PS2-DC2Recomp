#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitNetaCircle__11CMenuInventFi
// Address: 0x2017a0 - 0x201884
void InitNetaCircle__11CMenuInventFi_0x2017a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitNetaCircle__11CMenuInventFi_0x2017a0");
#endif

    switch (ctx->pc) {
        case 0x2017d0u: goto label_2017d0;
        case 0x2017e0u: goto label_2017e0;
        case 0x201818u: goto label_201818;
        case 0x201850u: goto label_201850;
        default: break;
    }

    ctx->pc = 0x2017a0u;

    // 0x2017a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2017a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2017a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2017a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2017a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2017a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2017ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2017acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2017b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2017b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2017b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2017b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2017b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2017bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2017bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2017c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2017c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2017c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2017c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2017c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2017ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2017d0:
    // 0x2017d0: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2017D0u;
    {
        const bool branch_taken_0x2017d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2017D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2017D0u;
            // 0x2017d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2017d0) {
            ctx->pc = 0x2017F8u;
            goto label_2017f8;
        }
    }
    ctx->pc = 0x2017D8u;
    // 0x2017d8: 0xc080708  jal         func_201C20
    ctx->pc = 0x2017D8u;
    SET_GPR_U32(ctx, 31, 0x2017E0u);
    ctx->pc = 0x2017DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2017D8u;
            // 0x2017dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201C20u;
    if (runtime->hasFunction(0x201C20u)) {
        auto targetFn = runtime->lookupFunction(0x201C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2017E0u; }
        if (ctx->pc != 0x2017E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelNetaCircle__11CMenuInventFi_0x201c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2017E0u; }
        if (ctx->pc != 0x2017E0u) { return; }
    }
    ctx->pc = 0x2017E0u;
label_2017e0:
    // 0x2017e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2017e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2017e4: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x2017e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2017e8: 0xa0a4061f  sb          $a0, 0x61F($a1)
    ctx->pc = 0x2017e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1567), (uint8_t)GPR_U32(ctx, 4));
    // 0x2017ec: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x2017ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2017f0: 0xac640610  sw          $a0, 0x610($v1)
    ctx->pc = 0x2017f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1552), GPR_U32(ctx, 4));
    // 0x2017f4: 0xa0a00622  sb          $zero, 0x622($a1)
    ctx->pc = 0x2017f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1570), (uint8_t)GPR_U32(ctx, 0));
label_2017f8:
    // 0x2017f8: 0x2919021  addu        $s2, $s4, $s1
    ctx->pc = 0x2017f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2017fc: 0x8e440ef0  lw          $a0, 0xEF0($s2)
    ctx->pc = 0x2017fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3824)));
    // 0x201800: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x201800u;
    {
        const bool branch_taken_0x201800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201800u;
            // 0x201804: 0x26550ef0  addiu       $s5, $s2, 0xEF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201800) {
            ctx->pc = 0x201850u;
            goto label_201850;
        }
    }
    ctx->pc = 0x201808u;
    // 0x201808: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x201808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20180c: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x20180cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x201810: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x201810u;
    SET_GPR_U32(ctx, 31, 0x201818u);
    ctx->pc = 0x201814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201810u;
            // 0x201814: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201818u; }
        if (ctx->pc != 0x201818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201818u; }
        if (ctx->pc != 0x201818u) { return; }
    }
    ctx->pc = 0x201818u;
label_201818:
    // 0x201818: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x201818u;
    {
        const bool branch_taken_0x201818 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x201818) {
            ctx->pc = 0x20182Cu;
            goto label_20182c;
        }
    }
    ctx->pc = 0x201820u;
    // 0x201820: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x201820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x201824: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x201824u;
    {
        const bool branch_taken_0x201824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201824u;
            // 0x201828: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201824) {
            ctx->pc = 0x201850u;
            goto label_201850;
        }
    }
    ctx->pc = 0x20182Cu;
label_20182c:
    // 0x20182c: 0x0  nop
    ctx->pc = 0x20182cu;
    // NOP
    // 0x201830: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x201830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x201834: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x201834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201838: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x201838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20183c: 0x8e440f00  lw          $a0, 0xF00($s2)
    ctx->pc = 0x20183cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3840)));
    // 0x201840: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201840u;
    {
        const bool branch_taken_0x201840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201840u;
            // 0x201844: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201840) {
            ctx->pc = 0x201850u;
            goto label_201850;
        }
    }
    ctx->pc = 0x201848u;
    // 0x201848: 0xc08a240  jal         func_228900
    ctx->pc = 0x201848u;
    SET_GPR_U32(ctx, 31, 0x201850u);
    ctx->pc = 0x20184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201848u;
            // 0x20184c: 0x24a592a8  addiu       $a1, $a1, -0x6D58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201850u; }
        if (ctx->pc != 0x201850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201850u; }
        if (ctx->pc != 0x201850u) { return; }
    }
    ctx->pc = 0x201850u;
label_201850:
    // 0x201850: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x201850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x201854: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x201854u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x201858: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x201858u;
    {
        const bool branch_taken_0x201858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20185Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201858u;
            // 0x20185c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201858) {
            ctx->pc = 0x2017D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2017d0;
        }
    }
    ctx->pc = 0x201860u;
    // 0x201860: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x201860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201864: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x201864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201868: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x201868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20186c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20186cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20187c: 0x3e00008  jr          $ra
    ctx->pc = 0x20187Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20187Cu;
            // 0x201880: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201884u;
}
