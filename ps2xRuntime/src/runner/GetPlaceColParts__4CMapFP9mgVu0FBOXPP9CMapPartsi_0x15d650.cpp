#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPlaceColParts__4CMapFP9mgVu0FBOXPP9CMapPartsi
// Address: 0x15d650 - 0x15d730
void GetPlaceColParts__4CMapFP9mgVu0FBOXPP9CMapPartsi_0x15d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPlaceColParts__4CMapFP9mgVu0FBOXPP9CMapPartsi_0x15d650");
#endif

    switch (ctx->pc) {
        case 0x15d6a8u: goto label_15d6a8;
        case 0x15d6c4u: goto label_15d6c4;
        default: break;
    }

    ctx->pc = 0x15d650u;

    // 0x15d650: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15d650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15d654: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x15d658: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15d658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15d65c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15d660: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x15d660u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d664: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15d664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15d668: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x15d668u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d66c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15d66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15d670: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x15d670u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d674: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15d678: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x15d678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d67c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15d680: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d684: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D684u;
    {
        const bool branch_taken_0x15d684 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D684u;
            // 0x15d688: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d684) {
            ctx->pc = 0x15D694u;
            goto label_15d694;
        }
    }
    ctx->pc = 0x15D68Cu;
    // 0x15d68c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x15D68Cu;
    {
        const bool branch_taken_0x15d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D68Cu;
            // 0x15d690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d68c) {
            ctx->pc = 0x15D704u;
            goto label_15d704;
        }
    }
    ctx->pc = 0x15D694u;
label_15d694:
    // 0x15d694: 0x8ed0032c  lw          $s0, 0x32C($s6)
    ctx->pc = 0x15d694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 812)));
    // 0x15d698: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15d698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d69c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15d69cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15D6A0u;
    {
        const bool branch_taken_0x15d6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6A0u;
            // 0x15d6a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d6a0) {
            ctx->pc = 0x15D6F0u;
            goto label_15d6f0;
        }
    }
    ctx->pc = 0x15D6A8u;
label_15d6a8:
    // 0x15d6a8: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x15d6a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x15d6ac: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x15d6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x15d6b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15d6b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x15d6b4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15D6B4u;
    {
        const bool branch_taken_0x15d6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6B4u;
            // 0x15d6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d6b4) {
            ctx->pc = 0x15D6E4u;
            goto label_15d6e4;
        }
    }
    ctx->pc = 0x15D6BCu;
    // 0x15d6bc: 0xc059c24  jal         func_167090
    ctx->pc = 0x15D6BCu;
    SET_GPR_U32(ctx, 31, 0x15D6C4u);
    ctx->pc = 0x15D6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6BCu;
            // 0x15d6c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167090u;
    if (runtime->hasFunction(0x167090u)) {
        auto targetFn = runtime->lookupFunction(0x167090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D6C4u; }
        if (ctx->pc != 0x15D6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckColBox__9CMapPartsFP9mgVu0FBOX_0x167090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D6C4u; }
        if (ctx->pc != 0x15D6C4u) { return; }
    }
    ctx->pc = 0x15D6C4u;
label_15d6c4:
    // 0x15d6c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D6C4u;
    {
        const bool branch_taken_0x15d6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d6c4) {
            ctx->pc = 0x15D6E4u;
            goto label_15d6e4;
        }
    }
    ctx->pc = 0x15D6CCu;
    // 0x15d6cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d6ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15d6d0: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x15d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x15d6d4: 0x237082a  slt         $at, $s1, $s7
    ctx->pc = 0x15d6d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x15d6d8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x15d6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x15d6dc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D6DCu;
    {
        const bool branch_taken_0x15d6dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6DCu;
            // 0x15d6e0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d6dc) {
            ctx->pc = 0x15D700u;
            goto label_15d700;
        }
    }
    ctx->pc = 0x15D6E4u;
label_15d6e4:
    // 0x15d6e4: 0x0  nop
    ctx->pc = 0x15d6e4u;
    // NOP
    // 0x15d6e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15d6e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15d6ec: 0x26100310  addiu       $s0, $s0, 0x310
    ctx->pc = 0x15d6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_15d6f0:
    // 0x15d6f0: 0x8ec20330  lw          $v0, 0x330($s6)
    ctx->pc = 0x15d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 816)));
    // 0x15d6f4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15d6f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15d6f8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x15D6F8u;
    {
        const bool branch_taken_0x15d6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d6f8) {
            ctx->pc = 0x15D6A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d6a8;
        }
    }
    ctx->pc = 0x15D700u;
label_15d700:
    // 0x15d700: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15d700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d704:
    // 0x15d704: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15d704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15d708: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15d708u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15d70c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15d70cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15d710: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15d710u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15d714: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15d714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d718: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15d718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d71c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d71cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d728: 0x3e00008  jr          $ra
    ctx->pc = 0x15D728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D728u;
            // 0x15d72c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D730u;
}
