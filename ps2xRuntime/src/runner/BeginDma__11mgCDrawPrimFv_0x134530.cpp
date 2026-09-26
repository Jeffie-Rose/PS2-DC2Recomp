#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BeginDma__11mgCDrawPrimFv
// Address: 0x134530 - 0x1345b8
void BeginDma__11mgCDrawPrimFv_0x134530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BeginDma__11mgCDrawPrimFv_0x134530");
#endif

    ctx->pc = 0x134530u;

    // 0x134530: 0x8c8700dc  lw          $a3, 0xDC($a0)
    ctx->pc = 0x134530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134534: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x134534u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x134538: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x134538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x13453c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x13453cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x134540: 0xac8700e0  sw          $a3, 0xE0($a0)
    ctx->pc = 0x134540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 7));
    // 0x134544: 0x8c8700e0  lw          $a3, 0xE0($a0)
    ctx->pc = 0x134544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x134548: 0xac8700e4  sw          $a3, 0xE4($a0)
    ctx->pc = 0x134548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 7));
    // 0x13454c: 0x8c8800dc  lw          $t0, 0xDC($a0)
    ctx->pc = 0x13454cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134550: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x134550u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x134554: 0x2507000c  addiu       $a3, $t0, 0xC
    ctx->pc = 0x134554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x134558: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x134558u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x13455c: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x13455cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x134560: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x134560u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x134564: 0xac8800ec  sw          $t0, 0xEC($a0)
    ctx->pc = 0x134564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 8));
    // 0x134568: 0xac8700f0  sw          $a3, 0xF0($a0)
    ctx->pc = 0x134568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 7));
    // 0x13456c: 0x8c8700dc  lw          $a3, 0xDC($a0)
    ctx->pc = 0x13456cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134570: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x134570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x134574: 0xac8700dc  sw          $a3, 0xDC($a0)
    ctx->pc = 0x134574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 7));
    // 0x134578: 0x8c8700dc  lw          $a3, 0xDC($a0)
    ctx->pc = 0x134578u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x13457c: 0xac8700e8  sw          $a3, 0xE8($a0)
    ctx->pc = 0x13457cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 7));
    // 0x134580: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x134580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x134584: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x134584u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x134588: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x134588u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x13458c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x13458cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x134590: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x134590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134594: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x134594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x134598: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x134598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
    // 0x13459c: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x13459cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1345a0: 0xdc850050  ld          $a1, 0x50($a0)
    ctx->pc = 0x1345a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1345a4: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x1345a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1345a8: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x1345a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x1345ac: 0xfcc00008  sd          $zero, 0x8($a2)
    ctx->pc = 0x1345acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 0));
    // 0x1345b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1345B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1345B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1345B0u;
            // 0x1345b4: 0xac8300dc  sw          $v1, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1345B8u;
}
