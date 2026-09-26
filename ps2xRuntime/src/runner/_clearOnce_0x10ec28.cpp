#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _clearOnce
// Address: 0x10ec28 - 0x10ec88
void _clearOnce_0x10ec28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_clearOnce_0x10ec28");
#endif

    switch (ctx->pc) {
        case 0x10ec44u: goto label_10ec44;
        default: break;
    }

    ctx->pc = 0x10ec28u;

    // 0x10ec28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ec28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ec2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ec2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ec30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ec30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec34: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ec34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ec38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ec38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ec3c: 0xc042656  jal         func_109958
    ctx->pc = 0x10EC3Cu;
    SET_GPR_U32(ctx, 31, 0x10EC44u);
    ctx->pc = 0x10EC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC3Cu;
            // 0x10ec40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109958u;
    if (runtime->hasFunction(0x109958u)) {
        auto targetFn = runtime->lookupFunction(0x109958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EC44u; }
        if (ctx->pc != 0x10EC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuSetMPEG1_0x109958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EC44u; }
        if (ctx->pc != 0x10EC44u) { return; }
    }
    ctx->pc = 0x10EC44u;
label_10ec44:
    // 0x10ec44: 0x3c117000  lui         $s1, 0x7000
    ctx->pc = 0x10ec44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28672 << 16));
    // 0x10ec48: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x10ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x10ec4c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x10ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x10ec50: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x10ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x10ec54: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x10ec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x10ec58: 0x34631b00  ori         $v1, $v1, 0x1B00
    ctx->pc = 0x10ec58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6912);
    // 0x10ec5c: 0x34843300  ori         $a0, $a0, 0x3300
    ctx->pc = 0x10ec5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13056);
    // 0x10ec60: 0xae110590  sw          $s1, 0x590($s0)
    ctx->pc = 0x10ec60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 17));
    // 0x10ec64: 0xae020594  sw          $v0, 0x594($s0)
    ctx->pc = 0x10ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1428), GPR_U32(ctx, 2));
    // 0x10ec68: 0xae0306d0  sw          $v1, 0x6D0($s0)
    ctx->pc = 0x10ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1744), GPR_U32(ctx, 3));
    // 0x10ec6c: 0xae0406d4  sw          $a0, 0x6D4($s0)
    ctx->pc = 0x10ec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1748), GPR_U32(ctx, 4));
    // 0x10ec70: 0xae000810  sw          $zero, 0x810($s0)
    ctx->pc = 0x10ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 0));
    // 0x10ec74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ec74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ec78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ec78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ec7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ec7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ec80: 0x3e00008  jr          $ra
    ctx->pc = 0x10EC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC80u;
            // 0x10ec84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EC88u;
}
