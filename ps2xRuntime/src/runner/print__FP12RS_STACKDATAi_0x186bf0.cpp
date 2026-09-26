#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: print__FP12RS_STACKDATAi
// Address: 0x186bf0 - 0x186cc8
void print__FP12RS_STACKDATAi_0x186bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("print__FP12RS_STACKDATAi_0x186bf0");
#endif

    switch (ctx->pc) {
        case 0x186c18u: goto label_186c18;
        case 0x186c34u: goto label_186c34;
        case 0x186c5cu: goto label_186c5c;
        case 0x186c7cu: goto label_186c7c;
        case 0x186c8cu: goto label_186c8c;
        case 0x186ca0u: goto label_186ca0;
        default: break;
    }

    ctx->pc = 0x186bf0u;

    // 0x186bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x186bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x186bf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x186bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x186bf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x186bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x186bfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186c00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x186c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186c08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x186c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c0c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x186c0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x186c10: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x186C10u;
    {
        const bool branch_taken_0x186c10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186C10u;
            // 0x186c14: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c10) {
            ctx->pc = 0x186CB0u;
            goto label_186cb0;
        }
    }
    ctx->pc = 0x186C18u;
label_186c18:
    // 0x186c18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x186c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186c1c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x186C1Cu;
    {
        const bool branch_taken_0x186c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186c1c) {
            ctx->pc = 0x186C3Cu;
            goto label_186c3c;
        }
    }
    ctx->pc = 0x186C24u;
    // 0x186c24: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x186c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x186c28: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x186c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x186c2c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x186C2Cu;
    SET_GPR_U32(ctx, 31, 0x186C34u);
    ctx->pc = 0x186C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C2Cu;
            // 0x186c30: 0x24844090  addiu       $a0, $a0, 0x4090 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C34u; }
        if (ctx->pc != 0x186C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C34u; }
        if (ctx->pc != 0x186C34u) { return; }
    }
    ctx->pc = 0x186C34u;
label_186c34:
    // 0x186c34: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x186C34u;
    {
        const bool branch_taken_0x186c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c34) {
            ctx->pc = 0x186C8Cu;
            goto label_186c8c;
        }
    }
    ctx->pc = 0x186C3Cu;
label_186c3c:
    // 0x186c3c: 0x0  nop
    ctx->pc = 0x186c3cu;
    // NOP
    // 0x186c40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186c44: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x186C44u;
    {
        const bool branch_taken_0x186c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186c44) {
            ctx->pc = 0x186C64u;
            goto label_186c64;
        }
    }
    ctx->pc = 0x186C4Cu;
    // 0x186c4c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x186c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x186c50: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x186c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x186c54: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x186C54u;
    SET_GPR_U32(ctx, 31, 0x186C5Cu);
    ctx->pc = 0x186C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C54u;
            // 0x186c58: 0x24844098  addiu       $a0, $a0, 0x4098 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C5Cu; }
        if (ctx->pc != 0x186C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C5Cu; }
        if (ctx->pc != 0x186C5Cu) { return; }
    }
    ctx->pc = 0x186C5Cu;
label_186c5c:
    // 0x186c5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x186C5Cu;
    {
        const bool branch_taken_0x186c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c5c) {
            ctx->pc = 0x186C8Cu;
            goto label_186c8c;
        }
    }
    ctx->pc = 0x186C64u;
label_186c64:
    // 0x186c64: 0x0  nop
    ctx->pc = 0x186c64u;
    // NOP
    // 0x186c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186c6c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x186C6Cu;
    {
        const bool branch_taken_0x186c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186c6c) {
            ctx->pc = 0x186C8Cu;
            goto label_186c8c;
        }
    }
    ctx->pc = 0x186C74u;
    // 0x186c74: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x186C74u;
    SET_GPR_U32(ctx, 31, 0x186C7Cu);
    ctx->pc = 0x186C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C74u;
            // 0x186c78: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C7Cu; }
        if (ctx->pc != 0x186C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C7Cu; }
        if (ctx->pc != 0x186C7Cu) { return; }
    }
    ctx->pc = 0x186C7Cu;
label_186c7c:
    // 0x186c7c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x186c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x186c80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x186c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c84: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x186C84u;
    SET_GPR_U32(ctx, 31, 0x186C8Cu);
    ctx->pc = 0x186C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C84u;
            // 0x186c88: 0x248440a0  addiu       $a0, $a0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C8Cu; }
        if (ctx->pc != 0x186C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C8Cu; }
        if (ctx->pc != 0x186C8Cu) { return; }
    }
    ctx->pc = 0x186C8Cu;
label_186c8c:
    // 0x186c8c: 0x0  nop
    ctx->pc = 0x186c8cu;
    // NOP
    // 0x186c90: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x186c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x186c94: 0x8c223b84  lw          $v0, 0x3B84($at)
    ctx->pc = 0x186c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15236)));
    // 0x186c98: 0xc04953a  jal         func_1254E8
    ctx->pc = 0x186C98u;
    SET_GPR_U32(ctx, 31, 0x186CA0u);
    ctx->pc = 0x186C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C98u;
            // 0x186c9c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1254E8u;
    if (runtime->hasFunction(0x1254E8u)) {
        auto targetFn = runtime->lookupFunction(0x1254E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186CA0u; }
        if (ctx->pc != 0x186CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fflush_0x1254e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186CA0u; }
        if (ctx->pc != 0x186CA0u) { return; }
    }
    ctx->pc = 0x186CA0u;
label_186ca0:
    // 0x186ca0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x186ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x186ca4: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x186ca4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x186ca8: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x186CA8u;
    {
        const bool branch_taken_0x186ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186CA8u;
            // 0x186cac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ca8) {
            ctx->pc = 0x186C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_186c18;
        }
    }
    ctx->pc = 0x186CB0u;
label_186cb0:
    // 0x186cb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x186cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186cb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x186cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186cb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186cbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x186CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186CC0u;
            // 0x186cc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186CC8u;
}
