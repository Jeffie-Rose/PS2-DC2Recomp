#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMesWinTbl__6ClsMesFiss
// Address: 0x1560d0 - 0x15631c
void SetMesWinTbl__6ClsMesFiss_0x1560d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMesWinTbl__6ClsMesFiss_0x1560d0");
#endif

    ctx->pc = 0x1560d0u;

    // 0x1560d0: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x1560d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x1560d4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1560d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1560d8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1560D8u;
    {
        const bool branch_taken_0x1560d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1560DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1560D8u;
            // 0x1560dc: 0x3402fc00  ori         $v0, $zero, 0xFC00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560d8) {
            ctx->pc = 0x156124u;
            goto label_156124;
        }
    }
    ctx->pc = 0x1560E0u;
    // 0x1560e0: 0x3401ff00  ori         $at, $zero, 0xFF00
    ctx->pc = 0x1560e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1560e4: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x1560e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1560e8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1560E8u;
    {
        const bool branch_taken_0x1560e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1560e8) {
            ctx->pc = 0x156124u;
            goto label_156124;
        }
    }
    ctx->pc = 0x1560F0u;
    // 0x1560f0: 0x8c8217c0  lw          $v0, 0x17C0($a0)
    ctx->pc = 0x1560f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6080)));
    // 0x1560f4: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1560F4u;
    {
        const bool branch_taken_0x1560f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1560f4) {
            ctx->pc = 0x15611Cu;
            goto label_15611c;
        }
    }
    ctx->pc = 0x1560FCu;
    // 0x1560fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1560fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x156100: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x156100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x156104: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x156104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x156108: 0x24a28200  addiu       $v0, $a1, -0x7E00
    ctx->pc = 0x156108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935040));
    // 0x15610c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x15610cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156110: 0x906201dc  lbu         $v0, 0x1DC($v1)
    ctx->pc = 0x156110u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 476)));
    // 0x156114: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x156114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x156118: 0xa06201dc  sb          $v0, 0x1DC($v1)
    ctx->pc = 0x156118u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 476), (uint8_t)GPR_U32(ctx, 2));
label_15611c:
    // 0x15611c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x15611Cu;
    {
        const bool branch_taken_0x15611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15611Cu;
            // 0x156120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15611c) {
            ctx->pc = 0x156314u;
            goto label_156314;
        }
    }
    ctx->pc = 0x156124u;
label_156124:
    // 0x156124: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x156124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156128: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x156128u;
    {
        const bool branch_taken_0x156128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15612Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156128u;
            // 0x15612c: 0x3402f500  ori         $v0, $zero, 0xF500 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62720);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156128) {
            ctx->pc = 0x156180u;
            goto label_156180;
        }
    }
    ctx->pc = 0x156130u;
    // 0x156130: 0x3401fd00  ori         $at, $zero, 0xFD00
    ctx->pc = 0x156130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
    // 0x156134: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x156134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x156138: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x156138u;
    {
        const bool branch_taken_0x156138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15613Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156138u;
            // 0x15613c: 0x24a38000  addiu       $v1, $a1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156138) {
            ctx->pc = 0x156180u;
            goto label_156180;
        }
    }
    ctx->pc = 0x156140u;
    // 0x156140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156144: 0x24638400  addiu       $v1, $v1, -0x7C00
    ctx->pc = 0x156144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935552));
    // 0x156148: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x156148u;
    {
        const bool branch_taken_0x156148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15614Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156148u;
            // 0x15614c: 0x3c028022  lui         $v0, 0x8022 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32802 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156148) {
            ctx->pc = 0x15616Cu;
            goto label_15616c;
        }
    }
    ctx->pc = 0x156150u;
    // 0x156150: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x156150u;
    {
        const bool branch_taken_0x156150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x156150) {
            ctx->pc = 0x156160u;
            goto label_156160;
        }
    }
    ctx->pc = 0x156158u;
    // 0x156158: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x156158u;
    {
        const bool branch_taken_0x156158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15615Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156158u;
            // 0x15615c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156158) {
            ctx->pc = 0x156178u;
            goto label_156178;
        }
    }
    ctx->pc = 0x156160u;
label_156160:
    // 0x156160: 0x8c8217d0  lw          $v0, 0x17D0($a0)
    ctx->pc = 0x156160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6096)));
    // 0x156164: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x156164u;
    {
        const bool branch_taken_0x156164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156164u;
            // 0x156168: 0xac8217d4  sw          $v0, 0x17D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156164) {
            ctx->pc = 0x156174u;
            goto label_156174;
        }
    }
    ctx->pc = 0x15616Cu;
label_15616c:
    // 0x15616c: 0x3442227f  ori         $v0, $v0, 0x227F
    ctx->pc = 0x15616cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8831);
    // 0x156170: 0xac8217d4  sw          $v0, 0x17D4($a0)
    ctx->pc = 0x156170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6100), GPR_U32(ctx, 2));
label_156174:
    // 0x156174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x156174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156178:
    // 0x156178: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x156178u;
    {
        const bool branch_taken_0x156178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156178) {
            ctx->pc = 0x156314u;
            goto label_156314;
        }
    }
    ctx->pc = 0x156180u;
label_156180:
    // 0x156180: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x156180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156184: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x156184u;
    {
        const bool branch_taken_0x156184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156184u;
            // 0x156188: 0x3402f400  ori         $v0, $zero, 0xF400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62464);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156184) {
            ctx->pc = 0x1561C0u;
            goto label_1561c0;
        }
    }
    ctx->pc = 0x15618Cu;
    // 0x15618c: 0x3401f600  ori         $at, $zero, 0xF600
    ctx->pc = 0x15618cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62976);
    // 0x156190: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x156190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x156194: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x156194u;
    {
        const bool branch_taken_0x156194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x156194) {
            ctx->pc = 0x1561BCu;
            goto label_1561bc;
        }
    }
    ctx->pc = 0x15619Cu;
    // 0x15619c: 0x8c8817d4  lw          $t0, 0x17D4($a0)
    ctx->pc = 0x15619cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6100)));
    // 0x1561a0: 0x24a28000  addiu       $v0, $a1, -0x8000
    ctx->pc = 0x1561a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1561a4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1561a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1561a8: 0x24428b00  addiu       $v0, $v0, -0x7500
    ctx->pc = 0x1561a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937344));
    // 0x1561ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1561acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1561b0: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x1561b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1561b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1561b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1561b8: 0xac8217d4  sw          $v0, 0x17D4($a0)
    ctx->pc = 0x1561b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6100), GPR_U32(ctx, 2));
label_1561bc:
    // 0x1561bc: 0x3402f400  ori         $v0, $zero, 0xF400
    ctx->pc = 0x1561bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62464);
label_1561c0:
    // 0x1561c0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1561c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1561c4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1561C4u;
    {
        const bool branch_taken_0x1561c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1561C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1561C4u;
            // 0x1561c8: 0x3402f300  ori         $v0, $zero, 0xF300 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62208);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561c4) {
            ctx->pc = 0x156208u;
            goto label_156208;
        }
    }
    ctx->pc = 0x1561CCu;
    // 0x1561cc: 0x3401f500  ori         $at, $zero, 0xF500
    ctx->pc = 0x1561ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62720);
    // 0x1561d0: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x1561d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1561d4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1561D4u;
    {
        const bool branch_taken_0x1561d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1561d4) {
            ctx->pc = 0x156204u;
            goto label_156204;
        }
    }
    ctx->pc = 0x1561DCu;
    // 0x1561dc: 0x8c8817d4  lw          $t0, 0x17D4($a0)
    ctx->pc = 0x1561dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6100)));
    // 0x1561e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1561e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1561e4: 0x344300ff  ori         $v1, $v0, 0xFF
    ctx->pc = 0x1561e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1561e8: 0x24a28000  addiu       $v0, $a1, -0x8000
    ctx->pc = 0x1561e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1561ec: 0x24428c00  addiu       $v0, $v0, -0x7400
    ctx->pc = 0x1561ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937600));
    // 0x1561f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1561f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1561f4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1561f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1561f8: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x1561f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1561fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1561fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x156200: 0xac8217d4  sw          $v0, 0x17D4($a0)
    ctx->pc = 0x156200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6100), GPR_U32(ctx, 2));
label_156204:
    // 0x156204: 0x3402f300  ori         $v0, $zero, 0xF300
    ctx->pc = 0x156204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62208);
label_156208:
    // 0x156208: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x156208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15620c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15620Cu;
    {
        const bool branch_taken_0x15620c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15620Cu;
            // 0x156210: 0x3402f200  ori         $v0, $zero, 0xF200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15620c) {
            ctx->pc = 0x156250u;
            goto label_156250;
        }
    }
    ctx->pc = 0x156214u;
    // 0x156214: 0x3401f400  ori         $at, $zero, 0xF400
    ctx->pc = 0x156214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62464);
    // 0x156218: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x156218u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15621c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x15621Cu;
    {
        const bool branch_taken_0x15621c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15621c) {
            ctx->pc = 0x15624Cu;
            goto label_15624c;
        }
    }
    ctx->pc = 0x156224u;
    // 0x156224: 0x8c8817d4  lw          $t0, 0x17D4($a0)
    ctx->pc = 0x156224u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6100)));
    // 0x156228: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x156228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x15622c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x15622cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x156230: 0x24a28000  addiu       $v0, $a1, -0x8000
    ctx->pc = 0x156230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x156234: 0x24428d00  addiu       $v0, $v0, -0x7300
    ctx->pc = 0x156234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
    // 0x156238: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x156238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15623c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15623cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x156240: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x156240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x156244: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x156244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x156248: 0xac8217d4  sw          $v0, 0x17D4($a0)
    ctx->pc = 0x156248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6100), GPR_U32(ctx, 2));
label_15624c:
    // 0x15624c: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x15624cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
label_156250:
    // 0x156250: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x156250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156254: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x156254u;
    {
        const bool branch_taken_0x156254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156254u;
            // 0x156258: 0x3402ff04  ori         $v0, $zero, 0xFF04 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65284);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156254) {
            ctx->pc = 0x156294u;
            goto label_156294;
        }
    }
    ctx->pc = 0x15625Cu;
    // 0x15625c: 0x3401f300  ori         $at, $zero, 0xF300
    ctx->pc = 0x15625cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62208);
    // 0x156260: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x156260u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x156264: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x156264u;
    {
        const bool branch_taken_0x156264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x156264) {
            ctx->pc = 0x156290u;
            goto label_156290;
        }
    }
    ctx->pc = 0x15626Cu;
    // 0x15626c: 0x8c8317d4  lw          $v1, 0x17D4($a0)
    ctx->pc = 0x15626cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6100)));
    // 0x156270: 0x24a28000  addiu       $v0, $a1, -0x8000
    ctx->pc = 0x156270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x156274: 0x24428e00  addiu       $v0, $v0, -0x7200
    ctx->pc = 0x156274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938112));
    // 0x156278: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x156278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15627c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x15627cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x156280: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x156280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x156284: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x156284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x156288: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x156288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15628c: 0xac8217d4  sw          $v0, 0x17D4($a0)
    ctx->pc = 0x15628cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6100), GPR_U32(ctx, 2));
label_156290:
    // 0x156290: 0x3402ff04  ori         $v0, $zero, 0xFF04
    ctx->pc = 0x156290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65284);
label_156294:
    // 0x156294: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156294u;
    {
        const bool branch_taken_0x156294 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x156298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156294u;
            // 0x156298: 0x3402ff05  ori         $v0, $zero, 0xFF05 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65285);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156294) {
            ctx->pc = 0x1562A8u;
            goto label_1562a8;
        }
    }
    ctx->pc = 0x15629Cu;
    // 0x15629c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1562a0: 0xac821b20  sw          $v0, 0x1B20($a0)
    ctx->pc = 0x1562a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6944), GPR_U32(ctx, 2));
    // 0x1562a4: 0x3402ff05  ori         $v0, $zero, 0xFF05
    ctx->pc = 0x1562a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65285);
label_1562a8:
    // 0x1562a8: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1562A8u;
    {
        const bool branch_taken_0x1562a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1562ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1562A8u;
            // 0x1562ac: 0x3402ff06  ori         $v0, $zero, 0xFF06 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65286);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1562a8) {
            ctx->pc = 0x1562B4u;
            goto label_1562b4;
        }
    }
    ctx->pc = 0x1562B0u;
    // 0x1562b0: 0xac801b20  sw          $zero, 0x1B20($a0)
    ctx->pc = 0x1562b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6944), GPR_U32(ctx, 0));
label_1562b4:
    // 0x1562b4: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1562B4u;
    {
        const bool branch_taken_0x1562b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1562B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1562B4u;
            // 0x1562b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1562b4) {
            ctx->pc = 0x1562C0u;
            goto label_1562c0;
        }
    }
    ctx->pc = 0x1562BCu;
    // 0x1562bc: 0xac821b20  sw          $v0, 0x1B20($a0)
    ctx->pc = 0x1562bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6944), GPR_U32(ctx, 2));
label_1562c0:
    // 0x1562c0: 0x8c8317c0  lw          $v1, 0x17C0($a0)
    ctx->pc = 0x1562c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6080)));
    // 0x1562c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1562c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1562c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1562c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1562cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1562ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1562d0: 0xa46501e0  sh          $a1, 0x1E0($v1)
    ctx->pc = 0x1562d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 480), (uint16_t)GPR_U32(ctx, 5));
    // 0x1562d4: 0x8c8317c0  lw          $v1, 0x17C0($a0)
    ctx->pc = 0x1562d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6080)));
    // 0x1562d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1562d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1562dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1562dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1562e0: 0xa46601e2  sh          $a2, 0x1E2($v1)
    ctx->pc = 0x1562e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 482), (uint16_t)GPR_U32(ctx, 6));
    // 0x1562e4: 0x8c8317c0  lw          $v1, 0x17C0($a0)
    ctx->pc = 0x1562e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6080)));
    // 0x1562e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1562e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1562ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1562ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1562f0: 0xa46701e4  sh          $a3, 0x1E4($v1)
    ctx->pc = 0x1562f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 484), (uint16_t)GPR_U32(ctx, 7));
    // 0x1562f4: 0x8c8317c0  lw          $v1, 0x17C0($a0)
    ctx->pc = 0x1562f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6080)));
    // 0x1562f8: 0x8c8517d4  lw          $a1, 0x17D4($a0)
    ctx->pc = 0x1562f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6100)));
    // 0x1562fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1562fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x156300: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x156300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x156304: 0xac6501e8  sw          $a1, 0x1E8($v1)
    ctx->pc = 0x156304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 5));
    // 0x156308: 0x8c8317c0  lw          $v1, 0x17C0($a0)
    ctx->pc = 0x156308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6080)));
    // 0x15630c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15630cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x156310: 0xac8317c0  sw          $v1, 0x17C0($a0)
    ctx->pc = 0x156310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6080), GPR_U32(ctx, 3));
label_156314:
    // 0x156314: 0x3e00008  jr          $ra
    ctx->pc = 0x156314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15631Cu;
}
