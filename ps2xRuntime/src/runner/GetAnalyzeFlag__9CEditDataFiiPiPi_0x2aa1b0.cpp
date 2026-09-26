#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAnalyzeFlag__9CEditDataFiiPiPi
// Address: 0x2aa1b0 - 0x2aa248
void GetAnalyzeFlag__9CEditDataFiiPiPi_0x2aa1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAnalyzeFlag__9CEditDataFiiPiPi_0x2aa1b0");
#endif

    switch (ctx->pc) {
        case 0x2aa1ccu: goto label_2aa1cc;
        case 0x2aa1e4u: goto label_2aa1e4;
        default: break;
    }

    ctx->pc = 0x2aa1b0u;

    // 0x2aa1b0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2aa1b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa1b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa1b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aa1b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2aa1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa1bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa1c0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2aa1c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa1c4: 0xc0aa238  jal         func_2A88E0
    ctx->pc = 0x2AA1C4u;
    SET_GPR_U32(ctx, 31, 0x2AA1CCu);
    ctx->pc = 0x2AA1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA1C4u;
            // 0x2aa1c8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A88E0u;
    if (runtime->hasFunction(0x2A88E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A88E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA1CCu; }
        if (ctx->pc != 0x2AA1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeDataSrc__Fii_0x2a88e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA1CCu; }
        if (ctx->pc != 0x2AA1CCu) { return; }
    }
    ctx->pc = 0x2AA1CCu;
label_2aa1cc:
    // 0x2aa1cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA1CCu;
    {
        const bool branch_taken_0x2aa1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA1CCu;
            // 0x2aa1d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1cc) {
            ctx->pc = 0x2AA1DCu;
            goto label_2aa1dc;
        }
    }
    ctx->pc = 0x2AA1D4u;
    // 0x2aa1d4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2AA1D4u;
    {
        const bool branch_taken_0x2aa1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA1D4u;
            // 0x2aa1d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1d4) {
            ctx->pc = 0x2AA23Cu;
            goto label_2aa23c;
        }
    }
    ctx->pc = 0x2AA1DCu;
label_2aa1dc:
    // 0x2aa1dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aa1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa1e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aa1e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa1e4:
    // 0x2aa1e4: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x2aa1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2aa1e8: 0x1271821  addu        $v1, $t1, $a3
    ctx->pc = 0x2aa1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2aa1ec: 0x80840008  lb          $a0, 0x8($a0)
    ctx->pc = 0x2aa1ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2aa1f0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA1F0u;
    {
        const bool branch_taken_0x2aa1f0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2AA1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA1F0u;
            // 0x2aa1f4: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1f0) {
            ctx->pc = 0x2AA208u;
            goto label_2aa208;
        }
    }
    ctx->pc = 0x2AA1F8u;
    // 0x2aa1f8: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2AA1F8u;
    {
        const bool branch_taken_0x2aa1f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA1F8u;
            // 0x2aa1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1f8) {
            ctx->pc = 0x2AA238u;
            goto label_2aa238;
        }
    }
    ctx->pc = 0x2AA200u;
    // 0x2aa200: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2AA200u;
    {
        const bool branch_taken_0x2aa200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA200u;
            // 0x2aa204: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa200) {
            ctx->pc = 0x2AA240u;
            goto label_2aa240;
        }
    }
    ctx->pc = 0x2AA208u;
label_2aa208:
    // 0x2aa208: 0x1441821  addu        $v1, $t2, $a0
    ctx->pc = 0x2aa208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2aa20c: 0x80635050  lb          $v1, 0x5050($v1)
    ctx->pc = 0x2aa20cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 20560)));
    // 0x2aa210: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x2aa210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2aa214: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2aa214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2aa218: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2aa218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aa21c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AA21Cu;
    {
        const bool branch_taken_0x2aa21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa21c) {
            ctx->pc = 0x2AA228u;
            goto label_2aa228;
        }
    }
    ctx->pc = 0x2AA224u;
    // 0x2aa224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aa224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa228:
    // 0x2aa228: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2aa228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2aa22c: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x2aa22cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2aa230: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2AA230u;
    {
        const bool branch_taken_0x2aa230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA230u;
            // 0x2aa234: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa230) {
            ctx->pc = 0x2AA1E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa1e4;
        }
    }
    ctx->pc = 0x2AA238u;
label_2aa238:
    // 0x2aa238: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2aa238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2aa23c:
    // 0x2aa23c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa240:
    // 0x2aa240: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA240u;
            // 0x2aa244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA248u;
}
