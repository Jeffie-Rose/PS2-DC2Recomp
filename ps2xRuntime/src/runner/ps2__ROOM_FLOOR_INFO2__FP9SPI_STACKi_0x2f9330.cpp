#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ROOM_FLOOR_INFO2__FP9SPI_STACKi
// Address: 0x2f9330 - 0x2f9398
void ps2__ROOM_FLOOR_INFO2__FP9SPI_STACKi_0x2f9330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ROOM_FLOOR_INFO2__FP9SPI_STACKi_0x2f9330");
#endif

    switch (ctx->pc) {
        case 0x2f9348u: goto label_2f9348;
        case 0x2f9354u: goto label_2f9354;
        case 0x2f9370u: goto label_2f9370;
        case 0x2f937cu: goto label_2f937c;
        default: break;
    }

    ctx->pc = 0x2f9330u;

    // 0x2f9330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f9330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f9334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f9334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f9338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f9338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f933c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2f933cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f9340: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F9340u;
    SET_GPR_U32(ctx, 31, 0x2F9348u);
    ctx->pc = 0x2F9344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9340u;
            // 0x2f9344: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9348u; }
        if (ctx->pc != 0x2F9348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9348u; }
        if (ctx->pc != 0x2F9348u) { return; }
    }
    ctx->pc = 0x2F9348u;
label_2f9348:
    // 0x2f9348: 0x8f849f4c  lw          $a0, -0x60B4($gp)
    ctx->pc = 0x2f9348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2f934c: 0xc0be768  jal         func_2F9DA0
    ctx->pc = 0x2F934Cu;
    SET_GPR_U32(ctx, 31, 0x2F9354u);
    ctx->pc = 0x2F9350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F934Cu;
            // 0x2f9350: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DA0u;
    if (runtime->hasFunction(0x2F9DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F9DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9354u; }
        if (ctx->pc != 0x2F9354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9354u; }
        if (ctx->pc != 0x2F9354u) { return; }
    }
    ctx->pc = 0x2F9354u;
label_2f9354:
    // 0x2f9354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f9354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9358: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9358u;
    {
        const bool branch_taken_0x2f9358 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F935Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9358u;
            // 0x2f935c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9358) {
            ctx->pc = 0x2F9368u;
            goto label_2f9368;
        }
    }
    ctx->pc = 0x2F9360u;
    // 0x2f9360: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F9360u;
    {
        const bool branch_taken_0x2f9360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9360u;
            // 0x2f9364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9360) {
            ctx->pc = 0x2F9384u;
            goto label_2f9384;
        }
    }
    ctx->pc = 0x2F9368u;
label_2f9368:
    // 0x2f9368: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F9368u;
    SET_GPR_U32(ctx, 31, 0x2F9370u);
    ctx->pc = 0x2F936Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9368u;
            // 0x2f936c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9370u; }
        if (ctx->pc != 0x2F9370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9370u; }
        if (ctx->pc != 0x2F9370u) { return; }
    }
    ctx->pc = 0x2F9370u;
label_2f9370:
    // 0x2f9370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9374: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F9374u;
    SET_GPR_U32(ctx, 31, 0x2F937Cu);
    ctx->pc = 0x2F9378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9374u;
            // 0x2f9378: 0xa202001a  sb          $v0, 0x1A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F937Cu; }
        if (ctx->pc != 0x2F937Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F937Cu; }
        if (ctx->pc != 0x2F937Cu) { return; }
    }
    ctx->pc = 0x2F937Cu;
label_2f937c:
    // 0x2f937c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2f937cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2f9380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9384:
    // 0x2f9384: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f9384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f9388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f938c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f938cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9390: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9390u;
            // 0x2f9394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9398u;
}
