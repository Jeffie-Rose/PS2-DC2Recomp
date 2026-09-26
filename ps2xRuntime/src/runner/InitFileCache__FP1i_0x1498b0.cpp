#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitFileCache__FP1i
// Address: 0x1498b0 - 0x149954
void InitFileCache__FP1i_0x1498b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitFileCache__FP1i_0x1498b0");
#endif

    switch (ctx->pc) {
        case 0x1498d0u: goto label_1498d0;
        case 0x149924u: goto label_149924;
        default: break;
    }

    ctx->pc = 0x1498b0u;

    // 0x1498b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1498b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1498b4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1498b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1498b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1498bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1498bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498c0: 0xaf8088b4  sw          $zero, -0x774C($gp)
    ctx->pc = 0x1498c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936756), GPR_U32(ctx, 0));
    // 0x1498c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1498c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498c8: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x1498c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x1498cc: 0x24a5ac90  addiu       $a1, $a1, -0x5370
    ctx->pc = 0x1498ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945936));
label_1498d0:
    // 0x1498d0: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x1498d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1498d4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1498d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1498d8: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1498d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1498dc: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x1498dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1498e0: 0xad000040  sw          $zero, 0x40($t0)
    ctx->pc = 0x1498e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 0));
    // 0x1498e4: 0x24e70200  addiu       $a3, $a3, 0x200
    ctx->pc = 0x1498e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x1498e8: 0xad000080  sw          $zero, 0x80($t0)
    ctx->pc = 0x1498e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 0));
    // 0x1498ec: 0xad0000c0  sw          $zero, 0xC0($t0)
    ctx->pc = 0x1498ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 192), GPR_U32(ctx, 0));
    // 0x1498f0: 0xad000100  sw          $zero, 0x100($t0)
    ctx->pc = 0x1498f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 256), GPR_U32(ctx, 0));
    // 0x1498f4: 0xad000140  sw          $zero, 0x140($t0)
    ctx->pc = 0x1498f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 320), GPR_U32(ctx, 0));
    // 0x1498f8: 0xad000180  sw          $zero, 0x180($t0)
    ctx->pc = 0x1498f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 384), GPR_U32(ctx, 0));
    // 0x1498fc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1498FCu;
    {
        const bool branch_taken_0x1498fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1498FCu;
            // 0x149900: 0xad0001c0  sw          $zero, 0x1C0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1498fc) {
            ctx->pc = 0x1498D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1498d0;
        }
    }
    ctx->pc = 0x149904u;
    // 0x149904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149908: 0x11230004  beq         $t1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x149908u;
    {
        const bool branch_taken_0x149908 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x14990Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149908u;
            // 0x14990c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149908) {
            ctx->pc = 0x14991Cu;
            goto label_14991c;
        }
    }
    ctx->pc = 0x149910u;
    // 0x149910: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x149910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149914: 0x1523000c  bne         $t1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x149914u;
    {
        const bool branch_taken_0x149914 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        if (branch_taken_0x149914) {
            ctx->pc = 0x149948u;
            goto label_149948;
        }
    }
    ctx->pc = 0x14991Cu;
label_14991c:
    // 0x14991c: 0xc05260c  jal         func_149830
    ctx->pc = 0x14991Cu;
    SET_GPR_U32(ctx, 31, 0x149924u);
    ctx->pc = 0x149830u;
    if (runtime->hasFunction(0x149830u)) {
        auto targetFn = runtime->lookupFunction(0x149830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149924u; }
        if (ctx->pc != 0x149924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        align_size__FUiUi_0x149830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149924u; }
        if (ctx->pc != 0x149924u) { return; }
    }
    ctx->pc = 0x149924u;
label_149924:
    // 0x149924: 0xaf8288b4  sw          $v0, -0x774C($gp)
    ctx->pc = 0x149924u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936756), GPR_U32(ctx, 2));
    // 0x149928: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14992c: 0x8f8488b4  lw          $a0, -0x774C($gp)
    ctx->pc = 0x14992cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936756)));
    // 0x149930: 0x15230004  bne         $t1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x149930u;
    {
        const bool branch_taken_0x149930 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x149934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149930u;
            // 0x149934: 0xaf8488b8  sw          $a0, -0x7748($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936760), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149930) {
            ctx->pc = 0x149944u;
            goto label_149944;
        }
    }
    ctx->pc = 0x149938u;
    // 0x149938: 0x8f8388b8  lw          $v1, -0x7748($gp)
    ctx->pc = 0x149938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
    // 0x14993c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x14993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x149940: 0xaf8388b8  sw          $v1, -0x7748($gp)
    ctx->pc = 0x149940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936760), GPR_U32(ctx, 3));
label_149944:
    // 0x149944: 0xaf8988bc  sw          $t1, -0x7744($gp)
    ctx->pc = 0x149944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936764), GPR_U32(ctx, 9));
label_149948:
    // 0x149948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14994c: 0x3e00008  jr          $ra
    ctx->pc = 0x14994Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14994Cu;
            // 0x149950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149954u;
}
