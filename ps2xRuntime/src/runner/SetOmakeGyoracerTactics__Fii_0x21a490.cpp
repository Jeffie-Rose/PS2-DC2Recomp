#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetOmakeGyoracerTactics__Fii
// Address: 0x21a490 - 0x21a4c8
void SetOmakeGyoracerTactics__Fii_0x21a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetOmakeGyoracerTactics__Fii_0x21a490");
#endif

    ctx->pc = 0x21a490u;

    // 0x21a490: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x21A490u;
    {
        const bool branch_taken_0x21a490 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x21a490) {
            ctx->pc = 0x21A4C0u;
            goto label_21a4c0;
        }
    }
    ctx->pc = 0x21A498u;
    // 0x21a498: 0x28810006  slti        $at, $a0, 0x6
    ctx->pc = 0x21a498u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x21a49c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A49Cu;
    {
        const bool branch_taken_0x21a49c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a49c) {
            ctx->pc = 0x21A4ACu;
            goto label_21a4ac;
        }
    }
    ctx->pc = 0x21A4A4u;
    // 0x21a4a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21A4A4u;
    {
        const bool branch_taken_0x21a4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a4a4) {
            ctx->pc = 0x21A4C0u;
            goto label_21a4c0;
        }
    }
    ctx->pc = 0x21A4ACu;
label_21a4ac:
    // 0x21a4ac: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x21a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x21a4b0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x21a4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21a4b4: 0x2463feb0  addiu       $v1, $v1, -0x150
    ctx->pc = 0x21a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966960));
    // 0x21a4b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21a4bc: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x21a4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_21a4c0:
    // 0x21a4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x21A4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A4C8u;
}
