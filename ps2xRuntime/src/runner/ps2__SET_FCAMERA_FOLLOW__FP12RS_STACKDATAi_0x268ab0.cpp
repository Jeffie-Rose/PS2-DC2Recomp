#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_FCAMERA_FOLLOW__FP12RS_STACKDATAi
// Address: 0x268ab0 - 0x268b18
void ps2__SET_FCAMERA_FOLLOW__FP12RS_STACKDATAi_0x268ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_FCAMERA_FOLLOW__FP12RS_STACKDATAi_0x268ab0");
#endif

    switch (ctx->pc) {
        case 0x268ab0u: goto label_268ab0;
        case 0x268ab4u: goto label_268ab4;
        case 0x268ab8u: goto label_268ab8;
        case 0x268abcu: goto label_268abc;
        case 0x268ac0u: goto label_268ac0;
        case 0x268ac4u: goto label_268ac4;
        case 0x268ac8u: goto label_268ac8;
        case 0x268accu: goto label_268acc;
        case 0x268ad0u: goto label_268ad0;
        case 0x268ad4u: goto label_268ad4;
        case 0x268ad8u: goto label_268ad8;
        case 0x268adcu: goto label_268adc;
        case 0x268ae0u: goto label_268ae0;
        case 0x268ae4u: goto label_268ae4;
        case 0x268ae8u: goto label_268ae8;
        case 0x268aecu: goto label_268aec;
        case 0x268af0u: goto label_268af0;
        case 0x268af4u: goto label_268af4;
        case 0x268af8u: goto label_268af8;
        case 0x268afcu: goto label_268afc;
        case 0x268b00u: goto label_268b00;
        case 0x268b04u: goto label_268b04;
        case 0x268b08u: goto label_268b08;
        case 0x268b0cu: goto label_268b0c;
        case 0x268b10u: goto label_268b10;
        case 0x268b14u: goto label_268b14;
        default: break;
    }

    ctx->pc = 0x268ab0u;

label_268ab0:
    // 0x268ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_268ab4:
    // 0x268ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x268ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_268ab8:
    // 0x268ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_268abc:
    // 0x268abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_268ac0:
    // 0x268ac0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x268ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_268ac4:
    // 0x268ac4: 0xc0a0e30  jal         func_2838C0
label_268ac8:
    if (ctx->pc == 0x268AC8u) {
        ctx->pc = 0x268AC8u;
            // 0x268ac8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x268ACCu;
        goto label_268acc;
    }
    ctx->pc = 0x268AC4u;
    SET_GPR_U32(ctx, 31, 0x268ACCu);
    ctx->pc = 0x268AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268AC4u;
            // 0x268ac8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268ACCu; }
        if (ctx->pc != 0x268ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268ACCu; }
        if (ctx->pc != 0x268ACCu) { return; }
    }
    ctx->pc = 0x268ACCu;
label_268acc:
    // 0x268acc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x268accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268ad0:
    // 0x268ad0: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_268ad4:
    if (ctx->pc == 0x268AD4u) {
        ctx->pc = 0x268AD4u;
            // 0x268ad4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x268AD8u;
        goto label_268ad8;
    }
    ctx->pc = 0x268AD0u;
    {
        const bool branch_taken_0x268ad0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x268AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268AD0u;
            // 0x268ad4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ad0) {
            ctx->pc = 0x268AE0u;
            goto label_268ae0;
        }
    }
    ctx->pc = 0x268AD8u;
label_268ad8:
    // 0x268ad8: 0x1000000b  b           . + 4 + (0xB << 2)
label_268adc:
    if (ctx->pc == 0x268ADCu) {
        ctx->pc = 0x268ADCu;
            // 0x268adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x268AE0u;
        goto label_268ae0;
    }
    ctx->pc = 0x268AD8u;
    {
        const bool branch_taken_0x268ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268AD8u;
            // 0x268adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ad8) {
            ctx->pc = 0x268B08u;
            goto label_268b08;
        }
    }
    ctx->pc = 0x268AE0u;
label_268ae0:
    // 0x268ae0: 0xc097e34  jal         func_25F8D0
label_268ae4:
    if (ctx->pc == 0x268AE4u) {
        ctx->pc = 0x268AE4u;
            // 0x268ae4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x268AE8u;
        goto label_268ae8;
    }
    ctx->pc = 0x268AE0u;
    SET_GPR_U32(ctx, 31, 0x268AE8u);
    ctx->pc = 0x268AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268AE0u;
            // 0x268ae4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268AE8u; }
        if (ctx->pc != 0x268AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268AE8u; }
        if (ctx->pc != 0x268AE8u) { return; }
    }
    ctx->pc = 0x268AE8u;
label_268ae8:
    // 0x268ae8: 0x8cf90060  lw          $t9, 0x60($a3)
    ctx->pc = 0x268ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
label_268aec:
    // 0x268aec: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x268aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_268af0:
    // 0x268af0: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x268af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_268af4:
    // 0x268af4: 0xc7ae0028  lwc1        $f14, 0x28($sp)
    ctx->pc = 0x268af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_268af8:
    // 0x268af8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x268af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_268afc:
    // 0x268afc: 0x320f809  jalr        $t9
label_268b00:
    if (ctx->pc == 0x268B00u) {
        ctx->pc = 0x268B00u;
            // 0x268b00: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x268B04u;
        goto label_268b04;
    }
    ctx->pc = 0x268AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x268B04u);
        ctx->pc = 0x268B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268AFCu;
            // 0x268b00: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x268B04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x268B04u; }
            if (ctx->pc != 0x268B04u) { return; }
        }
        }
    }
    ctx->pc = 0x268B04u;
label_268b04:
    // 0x268b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268b08:
    // 0x268b08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_268b0c:
    // 0x268b0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_268b10:
    // 0x268b10: 0x3e00008  jr          $ra
label_268b14:
    if (ctx->pc == 0x268B14u) {
        ctx->pc = 0x268B14u;
            // 0x268b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x268B18u;
        goto label_fallthrough_0x268b10;
    }
    ctx->pc = 0x268B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268B10u;
            // 0x268b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x268b10:
    ctx->pc = 0x268B18u;
}
