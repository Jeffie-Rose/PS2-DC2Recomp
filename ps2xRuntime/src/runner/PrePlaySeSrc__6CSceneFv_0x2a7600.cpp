#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PrePlaySeSrc__6CSceneFv
// Address: 0x2a7600 - 0x2a7668
void PrePlaySeSrc__6CSceneFv_0x2a7600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrePlaySeSrc__6CSceneFv_0x2a7600");
#endif

    ctx->pc = 0x2a7600u;

    // 0x2a7600: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7604: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a7604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a7608: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a7608u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a760c: 0xac239e00  sw          $v1, -0x6200($at)
    ctx->pc = 0x2a760cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942208), GPR_U32(ctx, 3));
    // 0x2a7610: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7614: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a7614u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a7618: 0xac209e04  sw          $zero, -0x61FC($at)
    ctx->pc = 0x2a7618u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942212), GPR_U32(ctx, 0));
    // 0x2a761c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a761cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7620: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a7620u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a7624: 0xac239e88  sw          $v1, -0x6178($at)
    ctx->pc = 0x2a7624u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942344), GPR_U32(ctx, 3));
    // 0x2a7628: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a762c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a762cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a7630: 0xac209e8c  sw          $zero, -0x6174($at)
    ctx->pc = 0x2a7630u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942348), GPR_U32(ctx, 0));
    // 0x2a7634: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7638: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a7638u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a763c: 0xac239f10  sw          $v1, -0x60F0($at)
    ctx->pc = 0x2a763cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942480), GPR_U32(ctx, 3));
    // 0x2a7640: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7644: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a7644u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a7648: 0xac209f14  sw          $zero, -0x60EC($at)
    ctx->pc = 0x2a7648u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942484), GPR_U32(ctx, 0));
    // 0x2a764c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a764cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7650: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a7650u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a7654: 0xac239f98  sw          $v1, -0x6068($at)
    ctx->pc = 0x2a7654u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942616), GPR_U32(ctx, 3));
    // 0x2a7658: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a765c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a765cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a7660: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7660u;
            // 0x2a7664: 0xac209f9c  sw          $zero, -0x6064($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A7668u;
}
