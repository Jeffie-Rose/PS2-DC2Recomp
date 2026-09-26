#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ROOM_TEXNO__FP9SPI_STACKi
// Address: 0x2f91d0 - 0x2f9230
void ps2__ROOM_TEXNO__FP9SPI_STACKi_0x2f91d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ROOM_TEXNO__FP9SPI_STACKi_0x2f91d0");
#endif

    switch (ctx->pc) {
        case 0x2f91e0u: goto label_2f91e0;
        case 0x2f91f0u: goto label_2f91f0;
        case 0x2f91fcu: goto label_2f91fc;
        default: break;
    }

    ctx->pc = 0x2f91d0u;

    // 0x2f91d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f91d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f91d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f91d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f91d8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F91D8u;
    SET_GPR_U32(ctx, 31, 0x2F91E0u);
    ctx->pc = 0x2F91DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F91D8u;
            // 0x2f91dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F91E0u; }
        if (ctx->pc != 0x2F91E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F91E0u; }
        if (ctx->pc != 0x2F91E0u) { return; }
    }
    ctx->pc = 0x2F91E0u;
label_2f91e0:
    // 0x2f91e0: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F91E0u;
    {
        const bool branch_taken_0x2f91e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F91E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F91E0u;
            // 0x2f91e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91e0) {
            ctx->pc = 0x2F9214u;
            goto label_2f9214;
        }
    }
    ctx->pc = 0x2F91E8u;
    // 0x2f91e8: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x2F91E8u;
    SET_GPR_U32(ctx, 31, 0x2F91F0u);
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F91F0u; }
        if (ctx->pc != 0x2F91F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F91F0u; }
        if (ctx->pc != 0x2F91F0u) { return; }
    }
    ctx->pc = 0x2F91F0u;
label_2f91f0:
    // 0x2f91f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f91f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f91f4: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2F91F4u;
    SET_GPR_U32(ctx, 31, 0x2F91FCu);
    ctx->pc = 0x2F91F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F91F4u;
            // 0x2f91f8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F91FCu; }
        if (ctx->pc != 0x2F91FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F91FCu; }
        if (ctx->pc != 0x2F91FCu) { return; }
    }
    ctx->pc = 0x2F91FCu;
label_2f91fc:
    // 0x2f91fc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2f91fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2f9200: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2f9200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2f9204: 0x2463cfec  addiu       $v1, $v1, -0x3014
    ctx->pc = 0x2f9204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954988));
    // 0x2f9208: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f9208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f920c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f920cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f9210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f9214:
    // 0x2f9214: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f9214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f9218: 0xa0620042  sb          $v0, 0x42($v1)
    ctx->pc = 0x2f9218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f921c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f921cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f9224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9228: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F922Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9228u;
            // 0x2f922c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9230u;
}
