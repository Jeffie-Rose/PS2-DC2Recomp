#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignMds__9CMapPieceFP8CMdsInfo
// Address: 0x168520 - 0x16856c
void AssignMds__9CMapPieceFP8CMdsInfo_0x168520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignMds__9CMapPieceFP8CMdsInfo_0x168520");
#endif

    ctx->pc = 0x168520u;

    // 0x168520: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168520u;
    {
        const bool branch_taken_0x168520 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x168524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168520u;
            // 0x168524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168520) {
            ctx->pc = 0x168530u;
            goto label_168530;
        }
    }
    ctx->pc = 0x168528u;
    // 0x168528: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x168528u;
    {
        const bool branch_taken_0x168528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168528) {
            ctx->pc = 0x168564u;
            goto label_168564;
        }
    }
    ctx->pc = 0x168530u;
label_168530:
    // 0x168530: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x168530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x168534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168538: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x168538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x16853c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x16853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x168540: 0xac83009c  sw          $v1, 0x9C($a0)
    ctx->pc = 0x168540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 3));
    // 0x168544: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x168544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x168548: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x168548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x16854c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x16854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x168550: 0xac830070  sw          $v1, 0x70($a0)
    ctx->pc = 0x168550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
    // 0x168554: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x168554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168558: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x168558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x16855c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x16855cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x168560: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x168560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_168564:
    // 0x168564: 0x3e00008  jr          $ra
    ctx->pc = 0x168564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16856Cu;
}
