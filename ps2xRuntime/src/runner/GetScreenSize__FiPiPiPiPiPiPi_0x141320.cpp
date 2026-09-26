#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetScreenSize__FiPiPiPiPiPiPi
// Address: 0x141320 - 0x1413e0
void GetScreenSize__FiPiPiPiPiPiPi_0x141320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetScreenSize__FiPiPiPiPiPiPi_0x141320");
#endif

    ctx->pc = 0x141320u;

    // 0x141320: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x141320u;
    {
        const bool branch_taken_0x141320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141320u;
            // 0x141324: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141320) {
            ctx->pc = 0x141388u;
            goto label_141388;
        }
    }
    ctx->pc = 0x141328u;
    // 0x141328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14132c: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14132Cu;
    {
        const bool branch_taken_0x14132c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x141330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14132Cu;
            // 0x141330: 0x24030200  addiu       $v1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14132c) {
            ctx->pc = 0x141374u;
            goto label_141374;
        }
    }
    ctx->pc = 0x141334u;
    // 0x141334: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141338: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x141338u;
    {
        const bool branch_taken_0x141338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x14133Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141338u;
            // 0x14133c: 0x24030200  addiu       $v1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141338) {
            ctx->pc = 0x141364u;
            goto label_141364;
        }
    }
    ctx->pc = 0x141340u;
    // 0x141340: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x141340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x141344: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141344u;
    {
        const bool branch_taken_0x141344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x141348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141344u;
            // 0x141348: 0x24030280  addiu       $v1, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141344) {
            ctx->pc = 0x141354u;
            goto label_141354;
        }
    }
    ctx->pc = 0x14134Cu;
    // 0x14134c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14134Cu;
    {
        const bool branch_taken_0x14134c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14134c) {
            ctx->pc = 0x141384u;
            goto label_141384;
        }
    }
    ctx->pc = 0x141354u;
label_141354:
    // 0x141354: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x141354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x141358: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x141358u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x14135c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14135Cu;
    {
        const bool branch_taken_0x14135c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14135Cu;
            // 0x141360: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14135c) {
            ctx->pc = 0x141398u;
            goto label_141398;
        }
    }
    ctx->pc = 0x141364u;
label_141364:
    // 0x141364: 0x240201e0  addiu       $v0, $zero, 0x1E0
    ctx->pc = 0x141364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x141368: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x141368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x14136c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14136Cu;
    {
        const bool branch_taken_0x14136c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14136Cu;
            // 0x141370: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14136c) {
            ctx->pc = 0x141398u;
            goto label_141398;
        }
    }
    ctx->pc = 0x141374u;
label_141374:
    // 0x141374: 0x240201a0  addiu       $v0, $zero, 0x1A0
    ctx->pc = 0x141374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x141378: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x141378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x14137c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14137Cu;
    {
        const bool branch_taken_0x14137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14137Cu;
            // 0x141380: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14137c) {
            ctx->pc = 0x141398u;
            goto label_141398;
        }
    }
    ctx->pc = 0x141384u;
label_141384:
    // 0x141384: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x141384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_141388:
    // 0x141388: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x141388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14138c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x14138cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x141390: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x141390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x141394: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x141394u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_141398:
    // 0x141398: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x141398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14139c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x14139cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413a0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1413a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1413a4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1413a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1413a8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1413a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1413ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1413acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1413b0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1413b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1413b4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1413b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1413b8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1413b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1413bc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1413bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1413c0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1413c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1413c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1413c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1413c8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x1413c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x1413cc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1413ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1413d0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1413d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1413d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1413d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1413d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1413D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1413DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1413D8u;
            // 0x1413dc: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1413E0u;
}
