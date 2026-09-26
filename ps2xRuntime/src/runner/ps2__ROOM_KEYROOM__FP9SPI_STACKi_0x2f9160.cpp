#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ROOM_KEYROOM__FP9SPI_STACKi
// Address: 0x2f9160 - 0x2f91c8
void ps2__ROOM_KEYROOM__FP9SPI_STACKi_0x2f9160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ROOM_KEYROOM__FP9SPI_STACKi_0x2f9160");
#endif

    switch (ctx->pc) {
        case 0x2f9174u: goto label_2f9174;
        case 0x2f9188u: goto label_2f9188;
        case 0x2f919cu: goto label_2f919c;
        case 0x2f91acu: goto label_2f91ac;
        default: break;
    }

    ctx->pc = 0x2f9160u;

    // 0x2f9160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f9160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f9164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f9164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f9168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f9168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f916c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F916Cu;
    SET_GPR_U32(ctx, 31, 0x2F9174u);
    ctx->pc = 0x2F9170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F916Cu;
            // 0x2f9170: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9174u; }
        if (ctx->pc != 0x2F9174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9174u; }
        if (ctx->pc != 0x2F9174u) { return; }
    }
    ctx->pc = 0x2F9174u;
label_2f9174:
    // 0x2f9174: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f9174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f9178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f917c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x2f917cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f9180: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F9180u;
    SET_GPR_U32(ctx, 31, 0x2F9188u);
    ctx->pc = 0x2F9184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9180u;
            // 0x2f9184: 0xa4620036  sh          $v0, 0x36($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9188u; }
        if (ctx->pc != 0x2F9188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9188u; }
        if (ctx->pc != 0x2F9188u) { return; }
    }
    ctx->pc = 0x2F9188u;
label_2f9188:
    // 0x2f9188: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f9188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f918c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f918cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9190: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x2f9190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f9194: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F9194u;
    SET_GPR_U32(ctx, 31, 0x2F919Cu);
    ctx->pc = 0x2F9198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9194u;
            // 0x2f9198: 0xa4620038  sh          $v0, 0x38($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F919Cu; }
        if (ctx->pc != 0x2F919Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F919Cu; }
        if (ctx->pc != 0x2F919Cu) { return; }
    }
    ctx->pc = 0x2F919Cu;
label_2f919c:
    // 0x2f919c: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f91a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f91a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f91a4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F91A4u;
    SET_GPR_U32(ctx, 31, 0x2F91ACu);
    ctx->pc = 0x2F91A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F91A4u;
            // 0x2f91a8: 0xa462003a  sh          $v0, 0x3A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 58), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F91ACu; }
        if (ctx->pc != 0x2F91ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F91ACu; }
        if (ctx->pc != 0x2F91ACu) { return; }
    }
    ctx->pc = 0x2F91ACu;
label_2f91ac:
    // 0x2f91ac: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f91acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f91b0: 0xa462003c  sh          $v0, 0x3C($v1)
    ctx->pc = 0x2f91b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f91b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f91b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f91b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f91bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f91bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f91c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F91C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F91C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F91C0u;
            // 0x2f91c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F91C8u;
}
