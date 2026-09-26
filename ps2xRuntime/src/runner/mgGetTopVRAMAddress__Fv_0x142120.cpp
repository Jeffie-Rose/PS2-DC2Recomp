#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetTopVRAMAddress__Fv
// Address: 0x142120 - 0x1421c4
void mgGetTopVRAMAddress__Fv_0x142120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetTopVRAMAddress__Fv_0x142120");
#endif

    ctx->pc = 0x142120u;

    // 0x142120: 0x8f848784  lw          $a0, -0x787C($gp)
    ctx->pc = 0x142120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x142124: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142124u;
    {
        const bool branch_taken_0x142124 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x142128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142124u;
            // 0x142128: 0x3082001f  andi        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142124) {
            ctx->pc = 0x142138u;
            goto label_142138;
        }
    }
    ctx->pc = 0x14212Cu;
    // 0x14212c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14212Cu;
    {
        const bool branch_taken_0x14212c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14212c) {
            ctx->pc = 0x142138u;
            goto label_142138;
        }
    }
    ctx->pc = 0x142134u;
    // 0x142134: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x142134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_142138:
    // 0x142138: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x142138u;
    {
        const bool branch_taken_0x142138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14213Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142138u;
            // 0x14213c: 0x3083001f  andi        $v1, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142138) {
            ctx->pc = 0x142160u;
            goto label_142160;
        }
    }
    ctx->pc = 0x142140u;
    // 0x142140: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142140u;
    {
        const bool branch_taken_0x142140 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x142144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142140u;
            // 0x142144: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142140) {
            ctx->pc = 0x142158u;
            goto label_142158;
        }
    }
    ctx->pc = 0x142148u;
    // 0x142148: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x142148u;
    {
        const bool branch_taken_0x142148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142148) {
            ctx->pc = 0x142154u;
            goto label_142154;
        }
    }
    ctx->pc = 0x142150u;
    // 0x142150: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x142150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_142154:
    // 0x142154: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x142154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_142158:
    // 0x142158: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x142158u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14215c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14215cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_142160:
    // 0x142160: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x142160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x142164: 0x8f8287a0  lw          $v0, -0x7860($gp)
    ctx->pc = 0x142164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x142168: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x142168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14216c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x14216cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x142170: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x142170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x142174: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142174u;
    {
        const bool branch_taken_0x142174 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x142178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142174u;
            // 0x142178: 0x21a03  sra         $v1, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142174) {
            ctx->pc = 0x142184u;
            goto label_142184;
        }
    }
    ctx->pc = 0x14217Cu;
    // 0x14217c: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x14217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x142180: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x142180u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
label_142184:
    // 0x142184: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x142184u;
    {
        const bool branch_taken_0x142184 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x142188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142184u;
            // 0x142188: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142184) {
            ctx->pc = 0x142194u;
            goto label_142194;
        }
    }
    ctx->pc = 0x14218Cu;
    // 0x14218c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x14218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x142190: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x142190u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_142194:
    // 0x142194: 0x8f8387a4  lw          $v1, -0x785C($gp)
    ctx->pc = 0x142194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936484)));
    // 0x142198: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x142198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14219c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14219Cu;
    {
        const bool branch_taken_0x14219c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1421A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14219Cu;
            // 0x1421a0: 0x32203  sra         $a0, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14219c) {
            ctx->pc = 0x1421ACu;
            goto label_1421ac;
        }
    }
    ctx->pc = 0x1421A4u;
    // 0x1421a4: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x1421a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x1421a8: 0x32203  sra         $a0, $v1, 8
    ctx->pc = 0x1421a8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 8));
label_1421ac:
    // 0x1421ac: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1421ACu;
    {
        const bool branch_taken_0x1421ac = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1421B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1421ACu;
            // 0x1421b0: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1421ac) {
            ctx->pc = 0x1421BCu;
            goto label_1421bc;
        }
    }
    ctx->pc = 0x1421B4u;
    // 0x1421b4: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x1421b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1421b8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1421b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1421bc:
    // 0x1421bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1421BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1421C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1421BCu;
            // 0x1421c0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1421C4u;
}
