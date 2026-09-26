#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: setD4_CHCR
// Address: 0x10f708 - 0x10f76c
void setD4_CHCR_0x10f708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setD4_CHCR_0x10f708");
#endif

    switch (ctx->pc) {
        case 0x10f71cu: goto label_10f71c;
        default: break;
    }

    ctx->pc = 0x10f708u;

    // 0x10f708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f70c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f710: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f714: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10F714u;
    SET_GPR_U32(ctx, 31, 0x10F71Cu);
    ctx->pc = 0x10F718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F714u;
            // 0x10f718: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F71Cu; }
        if (ctx->pc != 0x10F71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F71Cu; }
        if (ctx->pc != 0x10F71Cu) { return; }
    }
    ctx->pc = 0x10F71Cu;
label_10f71c:
    // 0x10f71c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10f71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10f720: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x10f720u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x10f724: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x10f724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x10f728: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10f728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10f72c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10f730: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x10f730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x10f734: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10f734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10f738: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x10f738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x10f73c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10f73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10f740: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x10f740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x10f744: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x10f744u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x10f748: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10f748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x10f74c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x10f74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x10f750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f754: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10f754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10f758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f75c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x10f75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x10f760: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x10f760u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x10f764: 0x804630a  j           func_118C28
    ctx->pc = 0x10F764u;
    ctx->pc = 0x10F768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F764u;
            // 0x10f768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x118c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10F76Cu;
}
