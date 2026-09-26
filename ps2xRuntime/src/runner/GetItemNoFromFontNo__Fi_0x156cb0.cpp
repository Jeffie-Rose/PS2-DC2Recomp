#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemNoFromFontNo__Fi
// Address: 0x156cb0 - 0x156e00
void GetItemNoFromFontNo__Fi_0x156cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemNoFromFontNo__Fi_0x156cb0");
#endif

    ctx->pc = 0x156cb0u;

    // 0x156cb0: 0x24828000  addiu       $v0, $a0, -0x8000
    ctx->pc = 0x156cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x156cb4: 0x24438500  addiu       $v1, $v0, -0x7B00
    ctx->pc = 0x156cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x156cb8: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x156cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x156cbc: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x156CBCu;
    {
        const bool branch_taken_0x156cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156CBCu;
            // 0x156cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156cbc) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156CC4u;
    // 0x156cc4: 0x240200fd  addiu       $v0, $zero, 0xFD
    ctx->pc = 0x156cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x156cc8: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x156CC8u;
    {
        const bool branch_taken_0x156cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156CC8u;
            // 0x156ccc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156cc8) {
            ctx->pc = 0x156DF0u;
            goto label_156df0;
        }
    }
    ctx->pc = 0x156CD0u;
    // 0x156cd0: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x156cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x156cd4: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x156CD4u;
    {
        const bool branch_taken_0x156cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156CD4u;
            // 0x156cd8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156cd4) {
            ctx->pc = 0x156DE8u;
            goto label_156de8;
        }
    }
    ctx->pc = 0x156CDCu;
    // 0x156cdc: 0x240200fb  addiu       $v0, $zero, 0xFB
    ctx->pc = 0x156cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x156ce0: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x156CE0u;
    {
        const bool branch_taken_0x156ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156CE0u;
            // 0x156ce4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ce0) {
            ctx->pc = 0x156DE0u;
            goto label_156de0;
        }
    }
    ctx->pc = 0x156CE8u;
    // 0x156ce8: 0x240200f2  addiu       $v0, $zero, 0xF2
    ctx->pc = 0x156ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x156cec: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x156CECu;
    {
        const bool branch_taken_0x156cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156CECu;
            // 0x156cf0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156cec) {
            ctx->pc = 0x156DD8u;
            goto label_156dd8;
        }
    }
    ctx->pc = 0x156CF4u;
    // 0x156cf4: 0x240200f1  addiu       $v0, $zero, 0xF1
    ctx->pc = 0x156cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x156cf8: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x156CF8u;
    {
        const bool branch_taken_0x156cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156CF8u;
            // 0x156cfc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156cf8) {
            ctx->pc = 0x156DD0u;
            goto label_156dd0;
        }
    }
    ctx->pc = 0x156D00u;
    // 0x156d00: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x156d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x156d04: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x156D04u;
    {
        const bool branch_taken_0x156d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D04u;
            // 0x156d08: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d04) {
            ctx->pc = 0x156DC8u;
            goto label_156dc8;
        }
    }
    ctx->pc = 0x156D0Cu;
    // 0x156d0c: 0x240200ef  addiu       $v0, $zero, 0xEF
    ctx->pc = 0x156d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
    // 0x156d10: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x156D10u;
    {
        const bool branch_taken_0x156d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D10u;
            // 0x156d14: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d10) {
            ctx->pc = 0x156DC0u;
            goto label_156dc0;
        }
    }
    ctx->pc = 0x156D18u;
    // 0x156d18: 0x240200ee  addiu       $v0, $zero, 0xEE
    ctx->pc = 0x156d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x156d1c: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x156D1Cu;
    {
        const bool branch_taken_0x156d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D1Cu;
            // 0x156d20: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d1c) {
            ctx->pc = 0x156DB8u;
            goto label_156db8;
        }
    }
    ctx->pc = 0x156D24u;
    // 0x156d24: 0x240200ed  addiu       $v0, $zero, 0xED
    ctx->pc = 0x156d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
    // 0x156d28: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x156D28u;
    {
        const bool branch_taken_0x156d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D28u;
            // 0x156d2c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d28) {
            ctx->pc = 0x156DB0u;
            goto label_156db0;
        }
    }
    ctx->pc = 0x156D30u;
    // 0x156d30: 0x240200ec  addiu       $v0, $zero, 0xEC
    ctx->pc = 0x156d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x156d34: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x156D34u;
    {
        const bool branch_taken_0x156d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D34u;
            // 0x156d38: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d34) {
            ctx->pc = 0x156DA8u;
            goto label_156da8;
        }
    }
    ctx->pc = 0x156D3Cu;
    // 0x156d3c: 0x240200eb  addiu       $v0, $zero, 0xEB
    ctx->pc = 0x156d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
    // 0x156d40: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x156D40u;
    {
        const bool branch_taken_0x156d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D40u;
            // 0x156d44: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d40) {
            ctx->pc = 0x156DA0u;
            goto label_156da0;
        }
    }
    ctx->pc = 0x156D48u;
    // 0x156d48: 0x240200ea  addiu       $v0, $zero, 0xEA
    ctx->pc = 0x156d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    // 0x156d4c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x156D4Cu;
    {
        const bool branch_taken_0x156d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D4Cu;
            // 0x156d50: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d4c) {
            ctx->pc = 0x156D98u;
            goto label_156d98;
        }
    }
    ctx->pc = 0x156D54u;
    // 0x156d54: 0x240200e9  addiu       $v0, $zero, 0xE9
    ctx->pc = 0x156d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    // 0x156d58: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x156D58u;
    {
        const bool branch_taken_0x156d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D58u;
            // 0x156d5c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d58) {
            ctx->pc = 0x156D90u;
            goto label_156d90;
        }
    }
    ctx->pc = 0x156D60u;
    // 0x156d60: 0x240200e8  addiu       $v0, $zero, 0xE8
    ctx->pc = 0x156d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x156d64: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x156D64u;
    {
        const bool branch_taken_0x156d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D64u;
            // 0x156d68: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d64) {
            ctx->pc = 0x156D88u;
            goto label_156d88;
        }
    }
    ctx->pc = 0x156D6Cu;
    // 0x156d6c: 0x240200e7  addiu       $v0, $zero, 0xE7
    ctx->pc = 0x156d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x156d70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156D70u;
    {
        const bool branch_taken_0x156d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D70u;
            // 0x156d74: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d70) {
            ctx->pc = 0x156D80u;
            goto label_156d80;
        }
    }
    ctx->pc = 0x156D78u;
    // 0x156d78: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x156D78u;
    {
        const bool branch_taken_0x156d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D78u;
            // 0x156d7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d78) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156D80u;
label_156d80:
    // 0x156d80: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x156D80u;
    {
        const bool branch_taken_0x156d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d80) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156D88u;
label_156d88:
    // 0x156d88: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x156D88u;
    {
        const bool branch_taken_0x156d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d88) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156D90u;
label_156d90:
    // 0x156d90: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x156D90u;
    {
        const bool branch_taken_0x156d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d90) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156D98u;
label_156d98:
    // 0x156d98: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x156D98u;
    {
        const bool branch_taken_0x156d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d98) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156DA0u;
label_156da0:
    // 0x156da0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x156DA0u;
    {
        const bool branch_taken_0x156da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156da0) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156DA8u;
label_156da8:
    // 0x156da8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x156DA8u;
    {
        const bool branch_taken_0x156da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156da8) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156DB0u;
label_156db0:
    // 0x156db0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x156DB0u;
    {
        const bool branch_taken_0x156db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156db0) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156DB8u;
label_156db8:
    // 0x156db8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x156DB8u;
    {
        const bool branch_taken_0x156db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156db8) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156DC0u;
label_156dc0:
    // 0x156dc0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x156DC0u;
    {
        const bool branch_taken_0x156dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156dc0) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156DC8u;
label_156dc8:
    // 0x156dc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x156DC8u;
    {
        const bool branch_taken_0x156dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156dc8) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156DD0u;
label_156dd0:
    // 0x156dd0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x156DD0u;
    {
        const bool branch_taken_0x156dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156dd0) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156DD8u;
label_156dd8:
    // 0x156dd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x156DD8u;
    {
        const bool branch_taken_0x156dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156dd8) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156DE0u;
label_156de0:
    // 0x156de0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x156DE0u;
    {
        const bool branch_taken_0x156de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156de0) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156DE8u;
label_156de8:
    // 0x156de8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x156DE8u;
    {
        const bool branch_taken_0x156de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156de8) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156DF0u;
label_156df0:
    // 0x156df0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x156DF0u;
    {
        const bool branch_taken_0x156df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156df0) {
            ctx->pc = 0x156DF8u;
            goto label_156df8;
        }
    }
    ctx->pc = 0x156DF8u;
label_156df8:
    // 0x156df8: 0x3e00008  jr          $ra
    ctx->pc = 0x156DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156E00u;
}
