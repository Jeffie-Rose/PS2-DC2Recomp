#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__10mgCTextureFv
// Address: 0x12c4b0 - 0x12c54c
void Initialize__10mgCTextureFv_0x12c4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__10mgCTextureFv_0x12c4b0");
#endif

    switch (ctx->pc) {
        case 0x12c4c8u: goto label_12c4c8;
        default: break;
    }

    ctx->pc = 0x12c4b0u;

    // 0x12c4b0: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x12c4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c4b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c4b8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x12c4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x12c4bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12C4C0u;
    {
        const bool branch_taken_0x12c4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c4c0) {
            ctx->pc = 0x12C4D8u;
            goto label_12c4d8;
        }
    }
    ctx->pc = 0x12C4C8u;
label_12c4c8:
    // 0x12c4c8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12c4cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12c4d0: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x12c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x12c4d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12c4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12c4d8:
    // 0x12c4d8: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x12c4d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12c4dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12C4DCu;
    {
        const bool branch_taken_0x12c4dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c4dc) {
            ctx->pc = 0x12C4C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c4c8;
        }
    }
    ctx->pc = 0x12C4E4u;
    // 0x12c4e4: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x12c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x12c4e8: 0xfc800048  sd          $zero, 0x48($a0)
    ctx->pc = 0x12c4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 0));
    // 0x12c4ec: 0xfc800040  sd          $zero, 0x40($a0)
    ctx->pc = 0x12c4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 0));
    // 0x12c4f0: 0xfc800038  sd          $zero, 0x38($a0)
    ctx->pc = 0x12c4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 0));
    // 0x12c4f4: 0x90860048  lbu         $a2, 0x48($a0)
    ctx->pc = 0x12c4f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x12c4f8: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x12c4f8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x12c4fc: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x12c4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x12c500: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x12c500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12c504: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x12c504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12c508: 0xa0830048  sb          $v1, 0x48($a0)
    ctx->pc = 0x12c508u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x12c50c: 0x90860048  lbu         $a2, 0x48($a0)
    ctx->pc = 0x12c50cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x12c510: 0x64050004  daddiu      $a1, $zero, 0x4
    ctx->pc = 0x12c510u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x12c514: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x12c514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x12c518: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x12c518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12c51c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x12c51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12c520: 0xa0830048  sb          $v1, 0x48($a0)
    ctx->pc = 0x12c520u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x12c524: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x12c524u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c528: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x12c528u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c52c: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x12c52cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c530: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x12c530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x12c534: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x12c534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x12c538: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x12c538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x12c53c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x12c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x12c540: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x12c540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x12c544: 0x3e00008  jr          $ra
    ctx->pc = 0x12C544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C54Cu;
}
