#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _pictureDisplayExtension
// Address: 0x10b978 - 0x10ba6c
void _pictureDisplayExtension_0x10b978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureDisplayExtension_0x10b978");
#endif

    switch (ctx->pc) {
        case 0x10b9f8u: goto label_10b9f8;
        case 0x10ba00u: goto label_10ba00;
        case 0x10ba18u: goto label_10ba18;
        case 0x10ba28u: goto label_10ba28;
        case 0x10ba3cu: goto label_10ba3c;
        default: break;
    }

    ctx->pc = 0x10b978u;

    // 0x10b978: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10b978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10b97c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10b97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b980: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10b980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10b984: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10b984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b988: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10b988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10b98c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10b98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10b990: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10b990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10b994: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10b994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10b998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b99c: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x10b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x10b9a0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10B9A0u;
    {
        const bool branch_taken_0x10b9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b9a0) {
            ctx->pc = 0x10B9A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9A0u;
            // 0x10b9a4: 0x8e230174  lw          $v1, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B9C4u;
            goto label_10b9c4;
        }
    }
    ctx->pc = 0x10B9A8u;
    // 0x10b9a8: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x10b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x10b9ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10B9ACu;
    {
        const bool branch_taken_0x10b9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9ACu;
            // 0x10b9b0: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b9ac) {
            ctx->pc = 0x10B9D0u;
            goto label_10b9d0;
        }
    }
    ctx->pc = 0x10B9B4u;
    // 0x10b9b4: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x10b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x10b9b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b9bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10B9BCu;
    {
        const bool branch_taken_0x10b9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9BCu;
            // 0x10b9c0: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b9bc) {
            ctx->pc = 0x10B9E0u;
            goto label_10b9e0;
        }
    }
    ctx->pc = 0x10B9C4u;
label_10b9c4:
    // 0x10b9c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b9c8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B9C8u;
    {
        const bool branch_taken_0x10b9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b9c8) {
            ctx->pc = 0x10B9CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9C8u;
            // 0x10b9cc: 0x8e220184  lw          $v0, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B9D8u;
            goto label_10b9d8;
        }
    }
    ctx->pc = 0x10B9D0u;
label_10b9d0:
    // 0x10b9d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10B9D0u;
    {
        const bool branch_taken_0x10b9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9D0u;
            // 0x10b9d4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b9d0) {
            ctx->pc = 0x10B9E0u;
            goto label_10b9e0;
        }
    }
    ctx->pc = 0x10B9D8u;
label_10b9d8:
    // 0x10b9d8: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x10b9d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b9dc: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x10b9dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
label_10b9e0:
    // 0x10b9e0: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x10B9E0u;
    {
        const bool branch_taken_0x10b9e0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x10B9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9E0u;
            // 0x10b9e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b9e0) {
            ctx->pc = 0x10BA48u;
            goto label_10ba48;
        }
    }
    ctx->pc = 0x10B9E8u;
    // 0x10b9e8: 0x2635018c  addiu       $s5, $s1, 0x18C
    ctx->pc = 0x10b9e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 396));
    // 0x10b9ec: 0x26340198  addiu       $s4, $s1, 0x198
    ctx->pc = 0x10b9ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 408));
    // 0x10b9f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b9f4: 0x0  nop
    ctx->pc = 0x10b9f4u;
    // NOP
label_10b9f8:
    // 0x10b9f8: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B9F8u;
    SET_GPR_U32(ctx, 31, 0x10BA00u);
    ctx->pc = 0x10B9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9F8u;
            // 0x10b9fc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA00u; }
        if (ctx->pc != 0x10BA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA00u; }
        if (ctx->pc != 0x10BA00u) { return; }
    }
    ctx->pc = 0x10BA00u;
label_10ba00:
    // 0x10ba00: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x10ba00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x10ba04: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x10ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x10ba08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ba08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10ba10: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10BA10u;
    SET_GPR_U32(ctx, 31, 0x10BA18u);
    ctx->pc = 0x10BA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA10u;
            // 0x10ba14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA18u; }
        if (ctx->pc != 0x10BA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA18u; }
        if (ctx->pc != 0x10BA18u) { return; }
    }
    ctx->pc = 0x10BA18u;
label_10ba18:
    // 0x10ba18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10ba18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10ba1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba20: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10BA20u;
    SET_GPR_U32(ctx, 31, 0x10BA28u);
    ctx->pc = 0x10BA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA20u;
            // 0x10ba24: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA28u; }
        if (ctx->pc != 0x10BA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA28u; }
        if (ctx->pc != 0x10BA28u) { return; }
    }
    ctx->pc = 0x10BA28u;
label_10ba28:
    // 0x10ba28: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x10ba28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x10ba2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ba2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10ba34: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10BA34u;
    SET_GPR_U32(ctx, 31, 0x10BA3Cu);
    ctx->pc = 0x10BA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA34u;
            // 0x10ba38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA3Cu; }
        if (ctx->pc != 0x10BA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA3Cu; }
        if (ctx->pc != 0x10BA3Cu) { return; }
    }
    ctx->pc = 0x10BA3Cu;
label_10ba3c:
    // 0x10ba3c: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x10ba3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x10ba40: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x10BA40u;
    {
        const bool branch_taken_0x10ba40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA40u;
            // 0x10ba44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba40) {
            ctx->pc = 0x10B9F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b9f8;
        }
    }
    ctx->pc = 0x10BA48u;
label_10ba48:
    // 0x10ba48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10ba48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10ba4c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10ba4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10ba50: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10ba50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ba54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10ba54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ba58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ba58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ba5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ba5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ba60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ba60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ba64: 0x3e00008  jr          $ra
    ctx->pc = 0x10BA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA64u;
            // 0x10ba68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BA6Cu;
}
